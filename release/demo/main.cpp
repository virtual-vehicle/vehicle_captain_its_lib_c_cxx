//
// Created by christophpilz on 15.09.2021.
//
// Authors:
// - Christoph Pilz (christoph.pilz@v2c2.at)
// - Patrizia Neubauer (patrizia.neubauer@v2c2.at)
//

#include <chrono>
#include <iostream>
#include <thread>
#include <string>
#include <tuple>

#include <csignal>

using namespace std;

typedef std::tuple<void *, long unsigned int> Message;

extern "C" {
#include "experimental/vcits/cam/CAM.h"
#include "experimental/vcits/parser/Encoder.h"
#include "experimental/vcits/parser/Decoder.h"
#include "experimental/vcits/cam/LowFrequencyContainer.h"       // needed, as it is not in the CAM.h include chain (only forward declarations)
#include "experimental/vcits/cam/SpecialVehicleContainer.h"     // needed, as it is not in the CAM.h include chain (only forward declarations)
}

// prototypes
long getGenerationDeltaTime();

void create_V2X_msg(Message &msg, int msg_id);

void create_cam(Message &msg);

int get_message_id(void *msg, size_t size);

void print_cam(void *msg, size_t size);

bool stringEquals(const char *__lhs, const char *__rhs);

// helper functions
// Source https://stackoverflow.com/questions/17261798/converting-a-hex-string-to-a-byte-array
int char2int(char input) {
    if (input >= '0' && input <= '9')
        return input - '0';
    if (input >= 'A' && input <= 'F')
        return input - 'A' + 10;
    if (input >= 'a' && input <= 'f')
        return input - 'a' + 10;
    throw std::invalid_argument("Invalid input string");
}

// Source: https://stackoverflow.com/questions/17261798/converting-a-hex-string-to-a-byte-array
// This function assumes src to be a zero terminated sanitized string with
// an even number of [0-9a-f] characters, and target to be sufficiently large
void hex2bin(const char *src, char *target) {
    while (*src && src[1]) {
        *(target++) = char2int(*src) * 16 + char2int(src[1]);
        src += 2;
    }
}

// main
int main() {

    // variables
    Message msg;

    // verify & check
    std::cout << "main()" << std::endl;

    // variables
    // msg_id = 2 is CAM
    int v2x_msg_id = ItsPduHeader__messageID_cam;
    void *v2x_msg_buffer = nullptr;

    std::cout << std::endl;
    std::cout << "main(): " << "main loop" << std::endl;
    // create v2x_msg && encode
    // msg struct is first filled and then validated before encoding
    create_V2X_msg(msg, v2x_msg_id);

    // decode
    std::cout << "*** *** V2X Message Received *** ***" << std::endl;
    // in general you have to decode a PDU header to get the msg id to know which message you will be decoding
    v2x_msg_id = get_message_id(std::get<0>(msg), std::get<1>(msg));
    switch (v2x_msg_id) {
        case ItsPduHeader__messageID_cam:
            print_cam(std::get<0>(msg), std::get<1>(msg));
            break;
        default:
            break;
    }
    free(v2x_msg_buffer);

    // done
    std::cout << "done" << std::endl;
}

// helpers

long getGenerationDeltaTime() {
//    ETSI EN 302 637-2 V1.3.1 (Annex B3)
//      - Time corresponding to the time of the reference position in the CAM, considered as time of the CAM generation.
//          -> meaning the timestamp of the situation, i.e., the exact time matching the GPS position, when the CAM was generated
//          -> in other words: the timestamp matching the GPS position
//      - calculation: generationDeltaTime = TimestampIts mod 65 536
//          -> TimestampIts represents an integer value in milliseconds since 2004-01-01T00:00:00:000Z as defined in ETSI TS 102 894-2 [2].
//              ... TimestampIts = zulu_time_now - 2004-01-01T00:00:00:000Z
    std::cout << "getGenerationDeltaTime(): not yet implemented - read comments in code" << std::endl;
    return 0;
}

void create_V2X_msg(Message &msg, int msg_id) {
    std::cout << "*** *** V2X Message Creation *** ***" << std::endl;
    switch (msg_id) {
        case ItsPduHeader__messageID_cam:
            create_cam(msg);
            break;
        default:
            std::cout << "Message not supported by this demo" << std::endl;
            break;
    }
}


void create_cam(Message &msg) {
    std::cout << "--- --- --- CAM --- --- ---" << std::endl;

    // variables
    CAM_t cam;
    long generationDeltaTime = getGenerationDeltaTime();
    void *v2x_msg_buffer = nullptr;
    ssize_t final_cam_size = 0;

    // reset data structure
    memset((void *) &cam, 0, sizeof(cam));

    // set header
    cam.header.protocolVersion = 2; // V2 is most recent CDD header
    cam.header.messageID = 2; // CAM
    cam.header.stationID = 1337;

    cam.cam.generationDeltaTime = generationDeltaTime; // TimestampIts mod 65 536; TimestampIts = integer value in milliseconds since 2004-01-01T00:00:00:000Z as defined in ETSI TS 102 894-2
    cam.cam.camParameters.basicContainer.stationType = StationType_unknown; // StationType enum -> important: Optional parameters get mandatory, depending on station type
    cam.cam.camParameters.basicContainer.referencePosition.latitude = Latitude_unavailable; // enum Latitude -> Latitude_oneMicrodegreeNorth = 10
    cam.cam.camParameters.basicContainer.referencePosition.longitude = Longitude_unavailable; // enum Longitude -> Longitude_oneMicrodegreeEast = 10
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorConfidence = SemiAxisLength_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMinorConfidence = SemiAxisLength_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorOrientation = HeadingValue_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.altitude.altitudeValue = AltitudeValue_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.altitude.altitudeConfidence = AltitudeConfidence_unavailable;

    cam.cam.camParameters.highFrequencyContainer.present = HighFrequencyContainer_PR_basicVehicleContainerHighFrequency;
    // IMPORTANT! present can not just be HighFrequencyContainer_PR_NOTHING, because encoding will fail
    // -> there is a bug in the ASN.1, which makes the basicVehicleContainerHighFrequency needed
    // -> rsuContainerHighFrequency has a subvalue that is a pointer. it is thus not needed to be implemented
    // -> the highFrequencyContainer has the following default parameters that will cause an "encoding failed -> check if values are out of range" error
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.heading.headingConfidence = HeadingConfidence_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.speed.speedConfidence = SpeedConfidence_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleLength.vehicleLengthValue = VehicleLengthValue_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleWidth = VehicleWidth_unavailable;

    // OPTIONALs are all set to zero with memset earlier
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.accelerationControl
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lanePosition
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.steeringWheelAngle
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lateralAcceleration
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.verticalAcceleration
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.performanceClass
    //    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.cenDsrcTollingZone

    // HighFrequencyContainer could also be HighFrequencyContainer_PR_rsuContainerHighFrequency
    // -> not implemented as example

    cam.cam.camParameters.lowFrequencyContainer = nullptr; // OPTIONAL not implemented in demo

    cam.cam.camParameters.specialVehicleContainer = nullptr; // OPTIONAL not implemented in demo

    Encoder::validate_constraints(&asn_DEF_CAM, &cam);
    final_cam_size = Encoder::encode(&asn_DEF_CAM, nullptr, &cam, &v2x_msg_buffer);

    if (final_cam_size > 0) {
        std::cout << "CAM created successfully with size " << final_cam_size << std::endl;
        std::get<0>(msg) = v2x_msg_buffer;
        std::get<1>(msg) = final_cam_size;
    } else {
        std::cout << std::endl;
        std::cout << "CAM creation failed - you should probably stop the program" << std::endl;
    }
}

int get_message_id(void *msg, size_t size) {
    int msg_id = 0;
    ItsPduHeader_t *its_pdu_header = nullptr;

    its_pdu_header = (ItsPduHeader_t *) Decoder::decode(&asn_DEF_ItsPduHeader, msg, size);

    std::cout << "ItsPduHeader" << std::endl;
    std::cout << "|-Protocol Version: " << its_pdu_header->protocolVersion << std::endl;
    std::cout << "|-Message ID: " << its_pdu_header->messageID << std::endl;
    std::cout << "|-Station ID: " << its_pdu_header->stationID << std::endl;

    msg_id = its_pdu_header->messageID;

    ASN_STRUCT_FREE(asn_DEF_ItsPduHeader, its_pdu_header);
    its_pdu_header = nullptr;
    return msg_id;
}

void print_cam(void *msg, size_t size) {
    std::cout << "--- --- --- CAM --- --- ---" << std::endl;

    CAM_t *cam = nullptr;

    cam = (CAM_t *) Decoder::decode(&asn_DEF_CAM, msg, size);

    if (cam->header.protocolVersion != 2) {
        std::cout << "this sample code only supports version 2 encoding" << std::endl;
        return;
    }

    std::cout << "CAM" << std::endl;
    std::cout << "|-header:" << std::endl;
    std::cout << " |-protocolVersion: " << cam->header.protocolVersion << std::endl;
    std::cout << " |-messageID: " << cam->header.messageID << std::endl;
    std::cout << " |-stationID: " << cam->header.stationID << std::endl;
    std::cout << "|-cam:" << std::endl;
    std::cout << " |-generationDeltaTime: " << cam->cam.generationDeltaTime << std::endl;
    std::cout << " |-camParameters: " << std::endl;
    std::cout << "  |-basicContainer: " << std::endl;
    std::cout << "   |-stationType: " << cam->cam.camParameters.basicContainer.stationType << std::endl;
    std::cout << "   |-referencePosition: " << std::endl;
    std::cout << "    |-latitude: " << cam->cam.camParameters.basicContainer.referencePosition.latitude << std::endl;
    std::cout << "    |-longitude: " << cam->cam.camParameters.basicContainer.referencePosition.longitude << std::endl;
    std::cout << "    |-positionConfidenceEllipse: " << std::endl;
    std::cout << "     |-semiMajorConfidence: "
              << cam->cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorConfidence
              << std::endl;
    std::cout << "     |-semiMinorConfidence: "
              << cam->cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMinorConfidence
              << std::endl;
    std::cout << "     |-semiMajorOrientation: "
              << cam->cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorOrientation
              << std::endl;
    std::cout << "    |-altitude: " << std::endl;
    std::cout << "     |-altitudeValue: "
              << cam->cam.camParameters.basicContainer.referencePosition.altitude.altitudeValue << std::endl;
    std::cout << "     |-altitudeConfidence: "
              << cam->cam.camParameters.basicContainer.referencePosition.altitude.altitudeConfidence << std::endl;
    std::cout << "  |-highFrequencyContainer: " << std::endl;
    std::cout << "   |-present: " << cam->cam.camParameters.highFrequencyContainer.present << std::endl;
    switch (cam->cam.camParameters.highFrequencyContainer.present) {
        case (HighFrequencyContainer_PR_NOTHING):
            std::cout << "   |-choice: " << "HighFrequencyContainer_PR_NOTHING" << std::endl;
            break;
        case (HighFrequencyContainer_PR_basicVehicleContainerHighFrequency):
            std::cout << "   |-choice: " << "HighFrequencyContainer_PR_basicVehicleContainerHighFrequency" << std::endl;
            std::cout << "    |-basicVehicleContainerHighFrequency: " << std::endl;
            std::cout << "     |-heading: " << std::endl;
            std::cout << "      |-headingValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.heading.headingValue
                      << std::endl;
            std::cout << "      |-headingConfidence: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.heading.headingConfidence
                      << std::endl;
            std::cout << "     |-speed: " << std::endl;
            std::cout << "      |-speedValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.speed.speedValue
                      << std::endl;
            std::cout << "      |-speedConfidence: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.speed.speedConfidence
                      << std::endl;
            std::cout << "     |-driveDirection: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.driveDirection
                      << std::endl;
            std::cout << "     |-vehicleLength: " << std::endl;
            std::cout << "      |-vehicleLengthValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleLength.vehicleLengthValue
                      << std::endl;
            std::cout << "      |-vehicleLengthConfidenceIndication: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleLength.vehicleLengthConfidenceIndication
                      << std::endl;
            std::cout << "     |-vehicleWidth: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleWidth
                      << std::endl;
            std::cout << "     |-longitudinalAcceleration: " << std::endl;
            std::cout << "      |-longitudinalAccelerationValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.longitudinalAcceleration.longitudinalAccelerationValue
                      << std::endl;
            std::cout << "      |-longitudinalAccelerationConfidence: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.longitudinalAcceleration.longitudinalAccelerationConfidence
                      << std::endl;
            std::cout << "     |-curvature: " << std::endl;
            std::cout << "      |-curvatureValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.curvature.curvatureValue
                      << std::endl;
            std::cout << "      |-curvatureConfidence: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.curvature.curvatureConfidence
                      << std::endl;
            std::cout << "     |-curvatureCalculationMode: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.curvatureCalculationMode
                      << std::endl;
            std::cout << "     |-yawRate: " << std::endl;
            std::cout << "      |-yawRateValue: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.yawRate.yawRateValue
                      << std::endl;
            std::cout << "      |-yawRateConfidence: "
                      << cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.yawRate.yawRateConfidence
                      << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.accelerationControl)
                std::cout << "     |-accelerationControl(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-accelerationControl(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lanePosition)
                std::cout << "     |-lanePosition(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-lanePosition(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.steeringWheelAngle)
                std::cout << "     |-steeringWheelAngle(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-steeringWheelAngle(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lateralAcceleration)
                std::cout << "     |-lateralAcceleration(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-lateralAcceleration(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.verticalAcceleration)
                std::cout << "     |-verticalAcceleration(OPTIONAL): present - parsing not yet implemented"
                          << std::endl;
            else
                std::cout << "     |-verticalAcceleration(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.performanceClass)
                std::cout << "     |-performanceClass(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-performanceClass(OPTIONAL): not present" << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.cenDsrcTollingZone)
                std::cout << "     |-cenDsrcTollingZone(OPTIONAL): present - parsing not yet implemented" << std::endl;
            else
                std::cout << "     |-cenDsrcTollingZone(OPTIONAL): not present" << std::endl;

            break;
        case (HighFrequencyContainer_PR_rsuContainerHighFrequency):
            std::cout << "   |-choice: " << "HighFrequencyContainer_PR_rsuContainerHighFrequency" << std::endl;
            std::cout << "    |-rsuContainerHighFrequency: " << std::endl;

            if (cam->cam.camParameters.highFrequencyContainer.choice.rsuContainerHighFrequency.protectedCommunicationZonesRSU)
                std::cout << "     |-protectedCommunicationZonesRSU(OPTIONAL): present - parsing not yet implemented"
                          << std::endl;
            else
                std::cout << "     |-protectedCommunicationZonesRSU(OPTIONAL): not present" << std::endl;
            break;
        default:
            std::cout << "Non standard present value" << std::endl;
    }

    if (cam->cam.camParameters.lowFrequencyContainer) {
        std::cout << "  |-lowFrequencyContainer(OPTIONAL): present" << std::endl;
        std::cout << "   |-present: "
                  << ((LowFrequencyContainer *) cam->cam.camParameters.lowFrequencyContainer)->present << std::endl;
        switch (cam->cam.camParameters.lowFrequencyContainer->present) {
            case (LowFrequencyContainer_PR_NOTHING):
                std::cout << "   |-choice: " << "LowFrequencyContainer_PR_NOTHING" << std::endl;
                break;
            case (LowFrequencyContainer_PR_basicVehicleContainerLowFrequency):
                std::cout << "   |-choice: " << "LowFrequencyContainer_PR_basicVehicleContainerLowFrequency"
                          << std::endl;
                std::cout << "    |-basicVehicleContainerLowFrequency: " << std::endl;
                std::cout << "     |-vehicleRole: "
                          << cam->cam.camParameters.lowFrequencyContainer->choice.basicVehicleContainerLowFrequency.vehicleRole
                          << std::endl;
                std::cout << "     |-exteriorLights: BITSTRING - not implemented for displaying in demo" << std::endl;
                std::cout << "     |-pathHistory: A_SEQUENCE_OF - not implemented for displaying in demo" << std::endl;
                break;
            default:
                std::cout << "Non standard present value" << std::endl;
        }
    } else
        std::cout << "  |-lowFrequencyContainer(OPTIONAL): not present" << std::endl;

    if (cam->cam.camParameters.specialVehicleContainer) {
        std::cout << "  |-specialVehicleContainer(OPTIONAL): present" << std::endl;
        std::cout << "   |-present: " << cam->cam.camParameters.specialVehicleContainer->present << std::endl;
        switch (cam->cam.camParameters.specialVehicleContainer->present) {
            case (SpecialVehicleContainer_PR_NOTHING):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_NOTHING" << std::endl;
                break;
            case (SpecialVehicleContainer_PR_publicTransportContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_publicTransportContainer" << std::endl;
                std::cout << "    |-publicTransportContainer: content parsing not further implemented in demo"
                          << std::endl;
                break;
            case (SpecialVehicleContainer_PR_specialTransportContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_specialTransportContainer" << std::endl;
                std::cout << "    |-specialTransportContainer: content parsing not further implemented in demo"
                          << std::endl;
                break;
            case (SpecialVehicleContainer_PR_dangerousGoodsContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_dangerousGoodsContainer" << std::endl;
                std::cout << "    |-dangerousGoodsContainer: content parsing not further implemented in demo"
                          << std::endl;
                break;
            case (SpecialVehicleContainer_PR_roadWorksContainerBasic):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_roadWorksContainerBasic" << std::endl;
                std::cout << "    |-roadWorksContainerBasic: content parsing not further implemented in demo"
                          << std::endl;
                break;
            case (SpecialVehicleContainer_PR_rescueContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_rescueContainer" << std::endl;
                std::cout << "    |-rescueContainer: content parsing not further implemented in demo" << std::endl;
                break;
            case (SpecialVehicleContainer_PR_emergencyContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_emergencyContainer" << std::endl;
                std::cout << "    |-emergencyContainer: content parsing not further implemented in demo" << std::endl;
                break;
            case (SpecialVehicleContainer_PR_safetyCarContainer):
                std::cout << "   |-choice: " << "SpecialVehicleContainer_PR_safetyCarContainer" << std::endl;
                std::cout << "    |-safetyCarContainer: content parsing not further implemented in demo" << std::endl;
                break;
            default:
                std::cout << "Non standard present value" << std::endl;
        }
    } else
        std::cout << "  |-specialVehicleContainer(OPTIONAL): not present" << std::endl;

    ASN_STRUCT_FREE(asn_DEF_CAM, cam);
    cam = nullptr;
}
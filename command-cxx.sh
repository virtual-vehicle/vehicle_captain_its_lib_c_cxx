#!/bin/bash -e
# ----------------------------------------------------
# Project: vehicleCAPTAIN ITS library
#
# Authors:
#   - Christoph Pilz (christoph.pilz@v2c2.at)
#
# Things to Improve:
# - Add: coloring to output
# - add: return value for are_standards_present
# - add: other standards
# - handle: not all standards present -> go to fail
# - refactor: relative path handling load_additional_modules
# - refactor: clean-all for removing also git ETSI ITS ASN1 git repo
#
# ----------------------------------------------------

### ### Defines ### ###
VC_ITS_LIB_NAME="vcits"
VC_ITS_LIB_VERSION="1.1"

ROOT_DIR=$(pwd)
ASN1C_DIR=/usr/local/share/asn1c
VC_ITS_ASN1_SPECS_DIR=$ROOT_DIR/../"vehicle_captain_its_asn1_specifications"
ETSI_ITS_BUILD_ROOT_DIR=$ROOT_DIR/"build"
CXX_EXCEPTIONS_DIR=$ROOT_DIR/"exceptions"/"CXX"
CXX_PARSER_DIR=$ROOT_DIR/"parser"/"CXX"
VC_ITS_LIB_ROOT_DIR=$ROOT_DIR/$VC_ITS_LIB_NAME
VC_ITS_LIB_INCLUDE_DIR=$VC_ITS_LIB_ROOT_DIR/"include"/$VC_ITS_LIB_NAME
VC_ITS_LIB_SRC_DIR=$VC_ITS_LIB_ROOT_DIR/"src"

CDD_SPEC_v2=etsi/cdd_ts102894_2/ITS-Container.asn
CAM_SPEC=etsi/cam_en302637_2/CAM-PDU-Descriptions.asn
CPM_SPEC=etsi/cpm_ts103324/asn/CPM-PDU-Descriptions.asn
CPM_ORIGINATING_STATION_SPEC=etsi/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn
CPM_PERCEIVED_OBJECT_SPEC=etsi/cpm_ts103324/asn/CPM-PerceivedObjectContainer.asn
CPM_PERCEPTION_REGION_SPEC=etsi/cpm_ts103324/asn/CPM-PerceptionRegionContainer.asn
CPM_SENSOR_INFORMATION_SPEC=etsi/cpm_ts103324/asn/CPM-SensorInformationContainer.asn
CPM_CDD_SPEC=etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn
DENM_SPEC=etsi/denm_en302637_3/DENM-PDU-Descriptions.asn
EVCSN_SPEC=etsi/evcsn-ts101556_1/EVCSN-PDU-Descriptions.asn
EVRSR_SPEC=etsi/evrsr_ts101556_3/EV-RSR-PDU-Descriptions.asn
IVIM_SPEC=etsi/is_ts103301/IVIM-PDU-Descriptions.asn
MAPEM_SPEC=etsi/is_ts103301/MAPEM-PDU-Descriptions.asn
RTCMEM_SPEC=etsi/is_ts103301/RTCMEM-PDU-Descriptions.asn
SPATEM_SPEC=etsi/is_ts103301/SPATEM-PDU-Descriptions.asn
SREM_SPEC=etsi/is_ts103301/SREM-PDU-Descriptions.asn
SSEM_SPEC=etsi/is_ts103301/SSEM-PDU-Descriptions.asn
VC_CONTAINER_SPEC=custom/VC-Container-PDU-Descriptions.asn

ADDITIONAL_MODULES_DIR=$ETSI_ITS_BUILD_ROOT_DIR/"asn1"
IS_TS_ISO_DIR=$VC_ITS_ASN1_SPECS_DIR/"etsi/is_ts103301/iso-patched"

# Echo Headers
AUTHOR_ECHO="# Authors:
# - Christoph Pilz (christoph.pilz@v2c2.at) (gh: @MrMushroom)
# "

### ### Functions ### ###
function load_vehicle_captain_its_asn1_specifications() {
  cd "$ROOT_DIR" || return
  echo "Loading vehicleCAPTAIN ITS ASN1 specifications ..."

  if [ ! -d "$VC_ITS_ASN1_SPECS_DIR" ]
    then
      cd .. || return
      echo "Cloning vehicleCAPTAIN ITS ASN1 specifications into $(pwd) ..."
      git clone https://github.com/virtual-vehicle/vehicle_captain_its_asn1_specifications.git --recurse-submodules
    else
      echo "vehicleCAPTAIN ITS ASN1 specifications present"
  fi
}

function are_standards_present() {
  # Basics
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$CDD_SPEC_v2 missing."
  fi

  # custom
  if ! [[ -f "$VC_SPECS_DIR"/"$VC_CONTAINER_SPEC" ]]; then
    echo "WARNING: $VC_SPECS_DIR/$VC_CONTAINER_SPEC missing."
  fi

  # experimental
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$CPM_SPEC missing."
  fi

  # standardized
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$CAM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$CAM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$DENM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$DENM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR/$EVCSN_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$EVCSN_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$EVRSR_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$EVRSR_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$IVIM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$IVIM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$MAPEM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$MAPEM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$RTCMEM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$RTCMEM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$SPATEM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$SPATEM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$SREM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$SREM_SPEC missing."
  fi
  if ! [[ -f "$VC_ITS_ASN1_SPECS_DIR"/"$SSEM_SPEC" ]]; then
    echo "WARNING: $VC_ITS_ASN1_SPECS_DIR/$SSEM_SPEC missing."
  fi
}

function load_additional_modules() {
  # additional modules for IVIM, MAPEM, RTCMEM, SPATEM, SREM, SSEM
  install -d "$ETSI_ITS_BUILD_ROOT_DIR"/asn1

  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO-TS-19091-addgrp-C-2018.asn ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 https://standards.iso.org/iso/ts/19091/ed-2/en/ISO-TS-19091-addgrp-C-2018.asn
    sed -e 's/\bHeadingConfidence\b/HeadingConfidenceDSRC/g' \
      -e 's/\bSpeedConfidence\b/SpeedConfidenceDSRC/g' \
      -e 's/\bHeading\b/HeadingDSRC/g' \
      "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO-TS-19091-addgrp-C-2018.asn >"$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO19321IVIv2.asn ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/ts/19321/ed-2/en/ISO19321IVIv2.asn'
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule_ForBallot.asn ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/24534/-3/ISO%2024534-3%20ASN.1%20repository/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule_ForBallot.asn'
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 https://standards.iso.org/iso/14816/ISO14816%20ASN.1%20repository/ISO14816_AVIAEINumberingAndDataStructures.asn
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/"ISO14906(2018)EfcDsrcApplicationv6.asn" ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/14906/ed-3/en/ISO14906(2018)EfcDsrcApplicationv6.asn'
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/"ISO14906(2018)EfcDsrcGenericv7.asn" ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/14906/ed-3/en/ISO14906(2018)EfcDsrcGenericv7.asn'
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/TS17419_2014_CITSapplMgmtIDs.asn ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/ts/17419/TS%2017419%20ASN.1%20repository/TS17419_2014_CITSapplMgmtIDs.asn'
  fi
  if [ ! -f "$ETSI_ITS_BUILD_ROOT_DIR"/asn1/"ISO14906(2018)EfcDsrcGenericv7.asn" ]; then
    wget -P "$ETSI_ITS_BUILD_ROOT_DIR"/asn1 'https://standards.iso.org/iso/14906/ed-3/en/ISO14906(2018)EfcDsrcGenericv7.asn'
  fi
}
function compile_DENM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/denm
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/denm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=DENM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$DENM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2"

  install -d "$VC_ITS_LIB_ROOT_DIR"/denm/src
  mv "$VC_ITS_LIB_ROOT_DIR"/denm/*.c "$VC_ITS_LIB_ROOT_DIR"/denm/src/

  echo "Compiled PDU: DENM"
}
function compile_CAM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/cam
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CAM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2"

  install -d "$VC_ITS_LIB_ROOT_DIR"/cam/src
  mv "$VC_ITS_LIB_ROOT_DIR"/cam/*.c "$VC_ITS_LIB_ROOT_DIR"/cam/src/
  echo "mv $VC_ITS_LIB_ROOT_DIR/cam/*.c $VC_ITS_LIB_ROOT_DIR/cam/src/"

  echo "Compiled PDU: CAM"
}
function compile_CPM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/cpm
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/cpm -R -no-gen-example -fcompound-names -fno-include-deps \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_ORIGINATING_STATION_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_PERCEIVED_OBJECT_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_PERCEPTION_REGION_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_SENSOR_INFORMATION_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CPM_CDD_SPEC"

  install -d "$VC_ITS_LIB_ROOT_DIR"/cpm/src
  mv "$VC_ITS_LIB_ROOT_DIR"/cpm/*.c "$VC_ITS_LIB_ROOT_DIR"/cpm/src/
  echo "mv $VC_ITS_LIB_ROOT_DIR/cpm/*.c $VC_ITS_LIB_ROOT_DIR/cpm/src/"

  echo "Compiled PDU: CPM"
}
function compile_POI() {
    echo "POI not yet implemented"
}
function compile_SPATEM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/spatem
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$SPATEM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/spatem/src
  mv "$VC_ITS_LIB_ROOT_DIR"/spatem/*.c "$VC_ITS_LIB_ROOT_DIR"/spatem/src/

  echo "Compiled PDU: SPATEM"
}
function compile_MAPEM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/mapem
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM\
    "$VC_ITS_ASN1_SPECS_DIR"/"$MAPEM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/mapem/src
  mv "$VC_ITS_LIB_ROOT_DIR"/mapem/*.c "$VC_ITS_LIB_ROOT_DIR"/mapem/src/

  echo "Compiled PDU: MAPEM"
}
function compile_IVIM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/ivim
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$IVIM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$IS_TS_ISO_DIR"/'ISO14823-missing.asn' \
    "$ADDITIONAL_MODULES_DIR"/'TS17419_2014_CITSapplMgmtIDs.asn' \
    "$IS_TS_ISO_DIR"/'ISO14906(2018)EfcDsrcGenericv7-patched.asn' \
    "$IS_TS_ISO_DIR"/'ISO14906(2018)EfcDsrcApplicationv6-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO19321IVIv2.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/ivim/src
  mv "$VC_ITS_LIB_ROOT_DIR"/ivim/*.c "$VC_ITS_LIB_ROOT_DIR"/ivim/src/

  echo "Compiled PDU: IVIM"
}
function compile_EVRSR() {
  echo "EV-RSR not yet implemented"
}
function compile_TISTPGTRANSACTION() {
  echo "TISTPGTRANSACTION not yet implemented"
}
function compile_SREM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/srem
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$SREM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/srem/src
  mv "$VC_ITS_LIB_ROOT_DIR"/srem/*.c "$VC_ITS_LIB_ROOT_DIR"/srem/src/

  echo "Compiled PDU: SREM"
}
function compile_SSEM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/ssem
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$SSEM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/ssem/src
  mv "$VC_ITS_LIB_ROOT_DIR"/ssem/*.c "$VC_ITS_LIB_ROOT_DIR"/ssem/src/

  echo "Compiled PDU: SSEM"
}
function compile_EVCSN() {
    echo "EVCSN not yet implemented"
}
function compile_SAEM() {
    echo "SAEM not yet implemented"
}
function compile_RTCMEM() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/rtcmem
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM \
    "$VC_ITS_ASN1_SPECS_DIR"/"$RTCMEM_SPEC" \
    "$VC_ITS_ASN1_SPECS_DIR"/"$CDD_SPEC_v2" \
    "$IS_TS_ISO_DIR"/'ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO-TS-19091-addgrp-C-2018-patched.asn' \
    "$ADDITIONAL_MODULES_DIR"/'ISO14816_AVIAEINumberingAndDataStructures.asn'

  install -d "$VC_ITS_LIB_ROOT_DIR"/rtcmem/src
  mv "$VC_ITS_LIB_ROOT_DIR"/rtcmem/*.c "$VC_ITS_LIB_ROOT_DIR"/rtcmem/src/

  echo "Compiled PDU: RTCMEM"
}
function compile_VCContainer() {
  install -d "$VC_ITS_LIB_ROOT_DIR"/vccontainer
  asn1c -D "$VC_ITS_LIB_ROOT_DIR"/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage \
    "$VC_ITS_ASN1_SPECS_DIR"/"$VC_CONTAINER_SPEC"

  install -d "$VC_ITS_LIB_ROOT_DIR"/vccontainer/src
  mv "$VC_ITS_LIB_ROOT_DIR"/vccontainer/*.c "$VC_ITS_LIB_ROOT_DIR"/vccontainer/src/

  echo "Compiled PDUs: RawRxMessage, RawTxMessage"
}


function pack_cmake_asn1_library() {
  # get asn1 library
  echo "checking asn1c lib ..."
  if [ ! -d "$VC_ITS_LIB_ROOT_DIR/asn1c" ]; then
    echo "... copying"
    cp -r $ASN1C_DIR "$VC_ITS_LIB_ROOT_DIR"
    install -d "$VC_ITS_LIB_ROOT_DIR"/asn1c/src
    mv "$VC_ITS_LIB_ROOT_DIR"/asn1c/*.c "$VC_ITS_LIB_ROOT_DIR"/asn1c/src
    rm "$VC_ITS_LIB_ROOT_DIR"/asn1c/src/converter-example.c # only example, fucks up build
  fi
}
function pack_cmake_root_cmake_file() {
  # create root cmake file
  echo "creating root CMakeLists ..."

  {
    echo "# This file is auto-generated by $(basename "$0")"
    echo "#"
    echo "$AUTHOR_ECHO"
    echo ""
    echo "cmake_minimum_required(VERSION 3.13)"
    echo ""
    echo "message(STATUS \"--> Configure build of $VC_ITS_LIB_NAME\")"
    echo ""
#    echo "set(CMAKE_CXX_STANDARD 17)"
    echo ""
    echo "project($VC_ITS_LIB_NAME VERSION $VC_ITS_LIB_VERSION DESCRIPTION \"vehicleCAPTAIN ITS Library\")"
    echo ""
    for dir in "$VC_ITS_LIB_ROOT_DIR"/*; do
      if [ -d "$dir" ]; then
        echo "add_subdirectory($(basename "$dir"))"
      fi
    done
    echo ""
    echo "add_library($VC_ITS_LIB_NAME INTERFACE)"
    echo ""
    echo "set_target_properties($VC_ITS_LIB_NAME PROPERTIES INTERFACE_LIB_VERSION \${PROJECT_VERSION})"
    echo ""
    echo "target_link_libraries($VC_ITS_LIB_NAME INTERFACE"
    for dir in "$VC_ITS_LIB_ROOT_DIR"/*; do
      if [ -d "$dir" ]; then
        echo "$VC_ITS_LIB_NAME-$(basename "$dir")"
      fi
    done
    echo ")"
    echo ""
    echo "message(STATUS \"--> Configure build of $VC_ITS_LIB_NAME - done\")"
    echo ""
  } >"$VC_ITS_LIB_ROOT_DIR"/CMakeLists.txt
}
function pack_cmake_submodule_cmake_files() {
  # create cmake files for each submodule
  echo "creating submodules ..."
  for dir in "$VC_ITS_LIB_ROOT_DIR"/*; do
    if [ -d "$dir" ]; then
      cur_lib_name="$VC_ITS_LIB_NAME-$(basename "$dir")"
      echo "... $cur_lib_name"

      cur_lib_description="$(basename "$dir") part of $VC_ITS_LIB_NAME"

      cur_lib_sources=$(
        for source_file in "$dir"/src/*; do
          echo "src/$(basename "$source_file")"
        done
      )

      {
        echo "# This file is auto-generated by $(basename "$0")"
        echo "#"
        echo "$AUTHOR_ECHO"
        echo ""
        echo "cmake_minimum_required(VERSION 3.13)"
        echo ""
        echo "message(STATUS \"--> Configure build of |-$cur_lib_name\")"
        echo ""
        echo "project($cur_lib_name VERSION $VC_ITS_LIB_VERSION DESCRIPTION \"$cur_lib_description\")"
        echo ""
        echo "add_library($cur_lib_name SHARED"
        echo "$cur_lib_sources"
        echo ")"
        echo ""
        echo "target_compile_options($cur_lib_name PRIVATE -Wno-incompatible-pointer-types)"
        echo ""
        echo "set_target_properties($cur_lib_name PROPERTIES INTERFACE_LIB_VERSION \${PROJECT_VERSION})"
        echo ""
        echo "target_include_directories($cur_lib_name PRIVATE .)"
        echo "target_include_directories($cur_lib_name PRIVATE ../asn1c)"
        echo ""
        echo "message(STATUS \"--> Configure build of |-$cur_lib_name - done\")"
        echo ""
      } >"$dir"/CMakeLists.txt
    fi
  done
}
function pack_cmake_exception_module() {
  # copies exception files to library folder and creates cmake file
  echo "creating exceptions ..."
  install -d "$VC_ITS_LIB_ROOT_DIR"/exceptions

  echo "... copying cxx exceptions"
  \cp -r "$CXX_EXCEPTIONS_DIR"/* "$VC_ITS_LIB_ROOT_DIR"/exceptions/

  echo "... creating  CMakeLists"
  {
    echo "# This file is auto-generated by $(basename "$0")"
    echo "#"
    echo "$AUTHOR_ECHO"
    echo ""
    echo "cmake_minimum_required(VERSION 3.13)"
    echo ""
    echo "message(STATUS \"--> Configure build of |-$VC_ITS_LIB_NAME-exceptions\")"
    echo ""
#    echo "set(CMAKE_CXX_STANDARD 17)"
    echo ""
    echo "project($VC_ITS_LIB_NAME-exceptions VERSION $VC_ITS_LIB_VERSION DESCRIPTION \"Exceptions of vehicleCAPTAIN ITS Library\")"
    echo ""
    echo "add_library($VC_ITS_LIB_NAME-exceptions INTERFACE)"
    echo ""
    echo "set_target_properties($VC_ITS_LIB_NAME-exceptions PROPERTIES INTERFACE_LIB_VERSION \${PROJECT_VERSION})"
    echo ""
    echo "target_include_directories($VC_ITS_LIB_NAME-exceptions INTERFACE \$<BUILD_INTERFACE:\${CMAKE_CURRENT_SOURCE_DIR}> \$<INSTALL_INTERFACE:include/\${\$PROJECT_NAME}>)"
    echo ""
    echo "message(STATUS \"--> Configure build of |-$VC_ITS_LIB_NAME-exceptions - done\")"
    echo ""
  } >"$VC_ITS_LIB_ROOT_DIR"/exceptions/CMakeLists.txt
}
function pack_cmake_parser_module() {
  # copies parser files to library folder and creates cmake file
  echo "creating parser ..."
  install -d "$VC_ITS_LIB_ROOT_DIR"/parser

  echo "... copying cxx parser"
  \cp -r "$CXX_PARSER_DIR"/* "$VC_ITS_LIB_ROOT_DIR"/parser/

  parser_lib_sources=$(
    for source_file in "$VC_ITS_LIB_ROOT_DIR"/parser/src/*; do
      echo "src/$(basename "$source_file")"
    done
  )

  echo "... creating  CMakeLists"
  {
    echo "# This file is auto-generated by $(basename "$0")"
    echo "#"
    echo "$AUTHOR_ECHO"
    echo ""
    echo "cmake_minimum_required(VERSION 3.13)"
    echo ""
    echo "message(STATUS \"--> Configure build of |-$VC_ITS_LIB_NAME-parser\")"
    echo ""
#    echo "set(CMAKE_CXX_STANDARD 17)"
    echo ""
    echo "project($VC_ITS_LIB_NAME-parser VERSION $VC_ITS_LIB_VERSION DESCRIPTION \"Parser of vehicleCAPTAIN ITS Library\")"
    echo ""
    echo "add_library($VC_ITS_LIB_NAME-parser SHARED"
    echo "$parser_lib_sources"
    echo ")"
    echo ""
    echo "target_compile_options($VC_ITS_LIB_NAME-parser  PRIVATE -Wall -Wextra -Wno-incompatible-pointer-types)"
    echo "target_link_options($VC_ITS_LIB_NAME-parser  PRIVATE -Wall -Wextra)"
    echo ""
    echo "set_target_properties($VC_ITS_LIB_NAME-parser PROPERTIES INTERFACE_LIB_VERSION \${PROJECT_VERSION})"
    echo ""
    echo "target_include_directories($VC_ITS_LIB_NAME-parser PRIVATE .)"
    echo "target_include_directories($VC_ITS_LIB_NAME-parser PRIVATE ..) #for code readability"
    echo "target_include_directories($VC_ITS_LIB_NAME-parser PRIVATE ../asn1c) #for include dependencies"
    echo ""
    echo "target_link_libraries($VC_ITS_LIB_NAME-parser PUBLIC"
    for dir in "$VC_ITS_LIB_ROOT_DIR"/*; do
      if [ -d "$dir" ]; then
        if [ $(basename "$dir") != "parser" ]; then
          echo "$VC_ITS_LIB_NAME-$(basename "$dir")"
        fi
      fi
    done
    echo ")"
    echo ""
    echo "message(STATUS \"--> Configure build of |-$VC_ITS_LIB_NAME-parser - done\")"
    echo ""
  } >"$VC_ITS_LIB_ROOT_DIR"/parser/CMakeLists.txt
}
function pack_cmake() {
  # pack etsi library into vehicleCAPTAIN library structure
  cd "$VC_ITS_LIB_ROOT_DIR" || return

  # get asn1 library
  pack_cmake_asn1_library

  # create cmake files for each asn1 submodule
  pack_cmake_submodule_cmake_files

  # copy exception files and create cmake file
  # important: do this after pack_cmake_submodule_cmake_files as this would mess with CMakeLists linkage
  pack_cmake_exception_module

  # copy parser files and create cmake file
  # important: do this after pack_cmake_submodule_cmake_files and pack_cmake_exception_module as this would mess with CMakeLists linkage
  pack_cmake_parser_module

  # create root cmake file
  pack_cmake_root_cmake_file

  echo "Packed vehicleCAPTAIN ITS Library"
  echo ""
  echo "VC_ITS_LIB_ROOT_DIR: $VC_ITS_LIB_ROOT_DIR"
  echo ""
}

function clean_build() {
  rm -rf "$ETSI_ITS_BUILD_ROOT_DIR"
  rm -rf "$VC_ITS_LIB_ROOT_DIR"
}
function clean_all() {
  clean_build
  rm -rf "$VC_ITS_ASN1_SPECS_DIR"
}

### ### Main Logic ### ###
# load vehicle_captain_its_asn1_specifications library
load_vehicle_captain_its_asn1_specifications

# Check presence of standards
are_standards_present

#loading additional modules for IVIM, MAPEM, RTCMEM, SPATEM, SREM, SSEM
load_additional_modules

# select standard to compile
echo "Select one of the following for compilation"
echo "0 ... Exit"
echo "1 ... CAM - Cooperative Awareness Message"
echo "2 ... DENM - Decentralized Environmental Notification Message"
echo "3 ... EVCSN - Electric Vehicle Charging Spot Notification"
echo "4 ... EVRSR - Electric Vehicle Recharging Spot Reservation"
echo "5 ... IVIM - Infrastructure to Vehicle Information Message"
echo "6 ... MAPEM - MAP Extended Message"
echo "7 ... RTCMEM - Radio Technical Commision for maritime services Extended Message"
echo "8 ... SPATEM - Signal Phase And Timing Extended Message"
echo "9 ... SREM - Signal Request Extended Message"
echo "10 ... SSEM - Signal request Status Extended Message"
echo "ex_cpm ... CPM - Experimental Collective Perception Message"
echo "vc ... VC-Container - Container Messages with Rx/Tx Info"
echo "main ... all messages released by ETSI (non experimental)"
echo "all ... all available messages from ETSI (including experimental and custom)"
echo "cmake ... create vehicleCAPTAIN ITS library"
echo "clean ... delete build and lib files"
echo "clean-all ... clean + delete standards"
echo -n "Choice: "
read compilation_choice

case $compilation_choice in

"0")
  echo "exit selected ... nothing to do"
  ;;

"1")
  # CAM
  compile_CAM
  ;;

"2")
  # DENM
  compile_DENM
  ;;

"3")
  # EVCSN
  #asn1c $ROOT_DIR/$CDD_SPEC_v2 -pdu=EvcsnPdu $ROOT_DIR/$EVCSN_SPEC
  #echo "Compiled PDUs: EVCSN"
  echo "not yet available, due to CDD_v1"
  ;;

"4")
  # EVRSR
  #asn1c $ROOT_DIR/$CDD_SPEC_v2 -pdu=EV-RSR $ROOT_DIR/$EVRSR_SPEC
  #echo "Compiled PDUs: EVRSR"
  echo "not yet available, due to CDD_v1"
  ;;

"5")
  # IVIM
  compile_IVIM
  ;;

"6")
  # MAPEM
  compile_MAPEM
  ;;

"7")
  # RTCMEM
  compile_RTCMEM
  ;;

"8")
  # SPATEM
  compile_SPATEM
  ;;

"9")
  # SREM
  compile_SREM
  ;;

"10")
  # SSEM
  compile_SSEM
  ;;

"ex_cpm")
  # Experimental CPM
  compile_CPM
  ;;

"vc")
  # VC Rx/Tx Container
  compile_VCContainer
  ;;

"main")
  # compile all standardized messages (non experimental)
  compile_DENM
  compile_CAM
  compile_CPM
  compile_POI
  compile_SPATEM
  compile_MAPEM
  compile_IVIM
  compile_EVRSR
  compile_TISTPGTRANSACTION
  compile_SREM
  compile_SSEM
  compile_EVCSN
  compile_SAEM
  compile_RTCMEM
  echo ""
  echo "PDUs ready for cmake packing:"
  ls $VC_ITS_LIB_ROOT_DIR
  echo ""
  ;;

"all")
  # compile all available messages (including experimental and custom)
  compile_DENM
  compile_CAM
  compile_CPM
  compile_POI
  compile_SPATEM
  compile_MAPEM
  compile_IVIM
  compile_EVRSR
  compile_TISTPGTRANSACTION
  compile_SREM
  compile_SSEM
  compile_EVCSN
  compile_SAEM
  compile_RTCMEM
  compile_VCContainer
  echo ""
  echo "PDUs ready for cmake packing:"
  ls $VC_ITS_LIB_ROOT_DIR
  echo ""
  ;;

"cmake")
  # create cmake package
  pack_cmake
  ;;

"clean")
  # remove build and lib folder
  clean_build
  ;;

"clean-all")
  # remove build and lib folder
  clean_all
  ;;

*)
  echo "invalid choice"
  ;;
esac

echo "++++++++++++++++++++++++"
echo "+++ Done"
echo "++++++++++++++++++++++++"


//
// Created by christophpilz on 19.05.2021.
//
// Possible Improvements:
// - refactor C++ style
//

#ifndef VIF_ITS_LIB_ENCODER_H
#define VIF_ITS_LIB_ENCODER_H

extern "C" {
#include "asn_application.h"
}

class Encoder {
public:
    /// validate the given V2X message struct against the constraints defined for the message type
    /// \param [in] type_descriptor V2X message type
    /// \param [in] struct_ptr V2X message struct
    /// \return [out] true on success
    static bool validate_constraints(asn_TYPE_descriptor_t *type_descriptor, const void *struct_ptr);

    /// encode a V2X message struct into an asn1 bitstream
    /// \param [in] type_descriptor V2X message type
    /// \param [in] constraints V2X message constraints
    /// \param [in] struct_ptr V2X message struct
    /// \param [out] buffer V2X message as asn1 bitstream
    /// \return [out] the number of bytes in the buffer
    static ssize_t encode(const asn_TYPE_descriptor_t *type_descriptor, const asn_per_constraints_t *constraints,
                          const void *struct_ptr, void **buffer);

private:
    Encoder() {};
};


#endif //VIF_ITS_LIB_ENCODER_H

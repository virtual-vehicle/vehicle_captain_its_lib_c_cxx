//
// Created by christophpilz on 19.05.2021.
//
// Possible Improvements:
// - have a decode method without type descriptor -> automatically find out which type of message it is and decode the right one
// - refactor C++ style
//

#ifndef VIF_ITS_LIB_DECODER_H
#define VIF_ITS_LIB_DECODER_H

extern "C" {
#include "asn_application.h"
}

class Decoder {
public:
    /// decode an asn1 bitstream to receive a V2X message object
    /// \param [in] type_descriptor V2X message type
    /// \param [in] buffer V2X message as asn1 bitstream
    /// \param [in] buffer_size the number of bytes in the buffer
    /// \return [out] the V2X message struct
    static void *decode(const asn_TYPE_descriptor_t *type_descriptor, const void *buffer, size_t buffer_size);

private:
    Decoder() {};
};


#endif //VIF_ITS_LIB_DECODER_H

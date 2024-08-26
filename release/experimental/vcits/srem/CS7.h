/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_CS7_H_
#define	_CS7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreightContainerData.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CS7 */
typedef FreightContainerData_t	 CS7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS7;
asn_struct_free_f CS7_free;
asn_struct_print_f CS7_print;
asn_constr_check_f CS7_constraint;
ber_type_decoder_f CS7_decode_ber;
der_type_encoder_f CS7_encode_der;
xer_type_decoder_f CS7_decode_xer;
xer_type_encoder_f CS7_encode_xer;
jer_type_encoder_f CS7_encode_jer;
oer_type_decoder_f CS7_decode_oer;
oer_type_encoder_f CS7_encode_oer;
per_type_decoder_f CS7_decode_uper;
per_type_encoder_f CS7_encode_uper;
per_type_decoder_f CS7_decode_aper;
per_type_encoder_f CS7_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CS7_H_ */
#include <asn_internal.h>

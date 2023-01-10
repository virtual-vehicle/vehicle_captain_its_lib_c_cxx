/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_StopTime_H_
#define	_StopTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AviEriDateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* StopTime */
typedef AviEriDateTime_t	 StopTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StopTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StopTime;
asn_struct_free_f StopTime_free;
asn_struct_print_f StopTime_print;
asn_constr_check_f StopTime_constraint;
ber_type_decoder_f StopTime_decode_ber;
der_type_encoder_f StopTime_encode_der;
xer_type_decoder_f StopTime_decode_xer;
xer_type_encoder_f StopTime_encode_xer;
oer_type_decoder_f StopTime_decode_oer;
oer_type_encoder_f StopTime_encode_oer;
per_type_decoder_f StopTime_decode_uper;
per_type_encoder_f StopTime_encode_uper;
per_type_decoder_f StopTime_decode_aper;
per_type_encoder_f StopTime_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _StopTime_H_ */
#include <asn_internal.h>

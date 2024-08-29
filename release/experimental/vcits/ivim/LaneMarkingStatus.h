/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_LaneMarkingStatus_H_
#define	_LaneMarkingStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneMarkingStatus */
typedef BOOLEAN_t	 LaneMarkingStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneMarkingStatus;
asn_struct_free_f LaneMarkingStatus_free;
asn_struct_print_f LaneMarkingStatus_print;
asn_constr_check_f LaneMarkingStatus_constraint;
ber_type_decoder_f LaneMarkingStatus_decode_ber;
der_type_encoder_f LaneMarkingStatus_encode_der;
xer_type_decoder_f LaneMarkingStatus_decode_xer;
xer_type_encoder_f LaneMarkingStatus_encode_xer;
jer_type_encoder_f LaneMarkingStatus_encode_jer;
oer_type_decoder_f LaneMarkingStatus_decode_oer;
oer_type_encoder_f LaneMarkingStatus_encode_oer;
per_type_decoder_f LaneMarkingStatus_decode_uper;
per_type_encoder_f LaneMarkingStatus_encode_uper;
per_type_decoder_f LaneMarkingStatus_decode_aper;
per_type_encoder_f LaneMarkingStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneMarkingStatus_H_ */
#include <asn_internal.h>

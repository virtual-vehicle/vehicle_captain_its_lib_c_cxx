/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#ifndef	_SpecialTransportType_H_
#define	_SpecialTransportType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpecialTransportType {
	SpecialTransportType_heavyLoad	= 0,
	SpecialTransportType_excessWidth	= 1,
	SpecialTransportType_excessLength	= 2,
	SpecialTransportType_excessHeight	= 3
} e_SpecialTransportType;

/* SpecialTransportType */
typedef BIT_STRING_t	 SpecialTransportType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialTransportType;
asn_struct_free_f SpecialTransportType_free;
asn_struct_print_f SpecialTransportType_print;
asn_constr_check_f SpecialTransportType_constraint;
ber_type_decoder_f SpecialTransportType_decode_ber;
der_type_encoder_f SpecialTransportType_encode_der;
xer_type_decoder_f SpecialTransportType_decode_xer;
xer_type_encoder_f SpecialTransportType_encode_xer;
oer_type_decoder_f SpecialTransportType_decode_oer;
oer_type_encoder_f SpecialTransportType_encode_oer;
per_type_decoder_f SpecialTransportType_decode_uper;
per_type_encoder_f SpecialTransportType_encode_uper;
per_type_decoder_f SpecialTransportType_decode_aper;
per_type_encoder_f SpecialTransportType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpecialTransportType_H_ */
#include <asn_internal.h>

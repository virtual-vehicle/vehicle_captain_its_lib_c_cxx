/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_LightBarSirenInUse_H_
#define	_LightBarSirenInUse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LightBarSirenInUse {
	LightBarSirenInUse_lightBarActivated	= 0,
	LightBarSirenInUse_sirenActivated	= 1
} e_LightBarSirenInUse;

/* LightBarSirenInUse */
typedef BIT_STRING_t	 LightBarSirenInUse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LightBarSirenInUse;
asn_struct_free_f LightBarSirenInUse_free;
asn_struct_print_f LightBarSirenInUse_print;
asn_constr_check_f LightBarSirenInUse_constraint;
ber_type_decoder_f LightBarSirenInUse_decode_ber;
der_type_encoder_f LightBarSirenInUse_encode_der;
xer_type_decoder_f LightBarSirenInUse_decode_xer;
xer_type_encoder_f LightBarSirenInUse_encode_xer;
jer_type_encoder_f LightBarSirenInUse_encode_jer;
oer_type_decoder_f LightBarSirenInUse_decode_oer;
oer_type_encoder_f LightBarSirenInUse_encode_oer;
per_type_decoder_f LightBarSirenInUse_decode_uper;
per_type_encoder_f LightBarSirenInUse_encode_uper;
per_type_decoder_f LightBarSirenInUse_decode_aper;
per_type_encoder_f LightBarSirenInUse_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LightBarSirenInUse_H_ */
#include <asn_internal.h>

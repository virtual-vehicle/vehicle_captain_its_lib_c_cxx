/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VC-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/custom/VC-Container-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage`
 */

#ifndef	_AreaType_H_
#define	_AreaType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaType {
	AreaType_circle	= 0,
	AreaType_rectangle	= 1,
	AreaType_ellipse	= 2
} e_AreaType;

/* AreaType */
typedef long	 AreaType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AreaType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AreaType;
extern const asn_INTEGER_specifics_t asn_SPC_AreaType_specs_1;
asn_struct_free_f AreaType_free;
asn_struct_print_f AreaType_print;
asn_constr_check_f AreaType_constraint;
ber_type_decoder_f AreaType_decode_ber;
der_type_encoder_f AreaType_encode_der;
xer_type_decoder_f AreaType_decode_xer;
xer_type_encoder_f AreaType_encode_xer;
jer_type_encoder_f AreaType_encode_jer;
oer_type_decoder_f AreaType_decode_oer;
oer_type_encoder_f AreaType_encode_oer;
per_type_decoder_f AreaType_decode_uper;
per_type_encoder_f AreaType_encode_uper;
per_type_decoder_f AreaType_decode_aper;
per_type_encoder_f AreaType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaType_H_ */
#include <asn_internal.h>

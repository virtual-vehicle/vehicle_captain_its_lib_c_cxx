/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_MarkingColour_H_
#define	_MarkingColour_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MarkingColour {
	MarkingColour_white	= 0,
	MarkingColour_yellow	= 1,
	MarkingColour_orange	= 2,
	MarkingColour_red	= 3,
	MarkingColour_blue	= 4,
	MarkingColour_unavailable	= 7
} e_MarkingColour;

/* MarkingColour */
typedef long	 MarkingColour_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MarkingColour_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MarkingColour;
asn_struct_free_f MarkingColour_free;
asn_struct_print_f MarkingColour_print;
asn_constr_check_f MarkingColour_constraint;
ber_type_decoder_f MarkingColour_decode_ber;
der_type_encoder_f MarkingColour_encode_der;
xer_type_decoder_f MarkingColour_decode_xer;
xer_type_encoder_f MarkingColour_encode_xer;
oer_type_decoder_f MarkingColour_decode_oer;
oer_type_encoder_f MarkingColour_encode_oer;
per_type_decoder_f MarkingColour_decode_uper;
per_type_encoder_f MarkingColour_encode_uper;
per_type_decoder_f MarkingColour_decode_aper;
per_type_encoder_f MarkingColour_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MarkingColour_H_ */
#include <asn_internal.h>

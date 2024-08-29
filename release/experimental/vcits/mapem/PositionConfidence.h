/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_PositionConfidence_H_
#define	_PositionConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PositionConfidence {
	PositionConfidence_unavailable	= 0,
	PositionConfidence_a500m	= 1,
	PositionConfidence_a200m	= 2,
	PositionConfidence_a100m	= 3,
	PositionConfidence_a50m	= 4,
	PositionConfidence_a20m	= 5,
	PositionConfidence_a10m	= 6,
	PositionConfidence_a5m	= 7,
	PositionConfidence_a2m	= 8,
	PositionConfidence_a1m	= 9,
	PositionConfidence_a50cm	= 10,
	PositionConfidence_a20cm	= 11,
	PositionConfidence_a10cm	= 12,
	PositionConfidence_a5cm	= 13,
	PositionConfidence_a2cm	= 14,
	PositionConfidence_a1cm	= 15
} e_PositionConfidence;

/* PositionConfidence */
typedef long	 PositionConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PositionConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PositionConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_PositionConfidence_specs_1;
asn_struct_free_f PositionConfidence_free;
asn_struct_print_f PositionConfidence_print;
asn_constr_check_f PositionConfidence_constraint;
ber_type_decoder_f PositionConfidence_decode_ber;
der_type_encoder_f PositionConfidence_encode_der;
xer_type_decoder_f PositionConfidence_decode_xer;
xer_type_encoder_f PositionConfidence_encode_xer;
jer_type_encoder_f PositionConfidence_encode_jer;
oer_type_decoder_f PositionConfidence_decode_oer;
oer_type_encoder_f PositionConfidence_encode_oer;
per_type_decoder_f PositionConfidence_decode_uper;
per_type_encoder_f PositionConfidence_encode_uper;
per_type_decoder_f PositionConfidence_decode_aper;
per_type_encoder_f PositionConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionConfidence_H_ */
#include <asn_internal.h>

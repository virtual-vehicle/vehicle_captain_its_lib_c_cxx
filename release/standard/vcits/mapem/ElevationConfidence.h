/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_ElevationConfidence_H_
#define	_ElevationConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ElevationConfidence {
	ElevationConfidence_unavailable	= 0,
	ElevationConfidence_elev_500_00	= 1,
	ElevationConfidence_elev_200_00	= 2,
	ElevationConfidence_elev_100_00	= 3,
	ElevationConfidence_elev_050_00	= 4,
	ElevationConfidence_elev_020_00	= 5,
	ElevationConfidence_elev_010_00	= 6,
	ElevationConfidence_elev_005_00	= 7,
	ElevationConfidence_elev_002_00	= 8,
	ElevationConfidence_elev_001_00	= 9,
	ElevationConfidence_elev_000_50	= 10,
	ElevationConfidence_elev_000_20	= 11,
	ElevationConfidence_elev_000_10	= 12,
	ElevationConfidence_elev_000_05	= 13,
	ElevationConfidence_elev_000_02	= 14,
	ElevationConfidence_elev_000_01	= 15
} e_ElevationConfidence;

/* ElevationConfidence */
typedef long	 ElevationConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ElevationConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ElevationConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_ElevationConfidence_specs_1;
asn_struct_free_f ElevationConfidence_free;
asn_struct_print_f ElevationConfidence_print;
asn_constr_check_f ElevationConfidence_constraint;
ber_type_decoder_f ElevationConfidence_decode_ber;
der_type_encoder_f ElevationConfidence_encode_der;
xer_type_decoder_f ElevationConfidence_decode_xer;
xer_type_encoder_f ElevationConfidence_encode_xer;
jer_type_encoder_f ElevationConfidence_encode_jer;
oer_type_decoder_f ElevationConfidence_decode_oer;
oer_type_encoder_f ElevationConfidence_encode_oer;
per_type_decoder_f ElevationConfidence_decode_uper;
per_type_encoder_f ElevationConfidence_encode_uper;
per_type_decoder_f ElevationConfidence_decode_aper;
per_type_encoder_f ElevationConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ElevationConfidence_H_ */
#include <asn_internal.h>

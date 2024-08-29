/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_TimeConfidence_H_
#define	_TimeConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeConfidence {
	TimeConfidence_unavailable	= 0,
	TimeConfidence_time_100_000	= 1,
	TimeConfidence_time_050_000	= 2,
	TimeConfidence_time_020_000	= 3,
	TimeConfidence_time_010_000	= 4,
	TimeConfidence_time_002_000	= 5,
	TimeConfidence_time_001_000	= 6,
	TimeConfidence_time_000_500	= 7,
	TimeConfidence_time_000_200	= 8,
	TimeConfidence_time_000_100	= 9,
	TimeConfidence_time_000_050	= 10,
	TimeConfidence_time_000_020	= 11,
	TimeConfidence_time_000_010	= 12,
	TimeConfidence_time_000_005	= 13,
	TimeConfidence_time_000_002	= 14,
	TimeConfidence_time_000_001	= 15,
	TimeConfidence_time_000_000_5	= 16,
	TimeConfidence_time_000_000_2	= 17,
	TimeConfidence_time_000_000_1	= 18,
	TimeConfidence_time_000_000_05	= 19,
	TimeConfidence_time_000_000_02	= 20,
	TimeConfidence_time_000_000_01	= 21,
	TimeConfidence_time_000_000_005	= 22,
	TimeConfidence_time_000_000_002	= 23,
	TimeConfidence_time_000_000_001	= 24,
	TimeConfidence_time_000_000_000_5	= 25,
	TimeConfidence_time_000_000_000_2	= 26,
	TimeConfidence_time_000_000_000_1	= 27,
	TimeConfidence_time_000_000_000_05	= 28,
	TimeConfidence_time_000_000_000_02	= 29,
	TimeConfidence_time_000_000_000_01	= 30,
	TimeConfidence_time_000_000_000_005	= 31,
	TimeConfidence_time_000_000_000_002	= 32,
	TimeConfidence_time_000_000_000_001	= 33,
	TimeConfidence_time_000_000_000_000_5	= 34,
	TimeConfidence_time_000_000_000_000_2	= 35,
	TimeConfidence_time_000_000_000_000_1	= 36,
	TimeConfidence_time_000_000_000_000_05	= 37,
	TimeConfidence_time_000_000_000_000_02	= 38,
	TimeConfidence_time_000_000_000_000_01	= 39
} e_TimeConfidence;

/* TimeConfidence */
typedef long	 TimeConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_TimeConfidence_specs_1;
asn_struct_free_f TimeConfidence_free;
asn_struct_print_f TimeConfidence_print;
asn_constr_check_f TimeConfidence_constraint;
ber_type_decoder_f TimeConfidence_decode_ber;
der_type_encoder_f TimeConfidence_encode_der;
xer_type_decoder_f TimeConfidence_decode_xer;
xer_type_encoder_f TimeConfidence_encode_xer;
jer_type_encoder_f TimeConfidence_encode_jer;
oer_type_decoder_f TimeConfidence_decode_oer;
oer_type_encoder_f TimeConfidence_encode_oer;
per_type_decoder_f TimeConfidence_decode_uper;
per_type_encoder_f TimeConfidence_encode_uper;
per_type_decoder_f TimeConfidence_decode_aper;
per_type_encoder_f TimeConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeConfidence_H_ */
#include <asn_internal.h>

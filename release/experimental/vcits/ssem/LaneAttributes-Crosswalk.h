/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_LaneAttributes_Crosswalk_H_
#define	_LaneAttributes_Crosswalk_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneAttributes_Crosswalk {
	LaneAttributes_Crosswalk_crosswalkRevocableLane	= 0,
	LaneAttributes_Crosswalk_bicyleUseAllowed	= 1,
	LaneAttributes_Crosswalk_isXwalkFlyOverLane	= 2,
	LaneAttributes_Crosswalk_fixedCycleTime	= 3,
	LaneAttributes_Crosswalk_biDirectionalCycleTimes	= 4,
	LaneAttributes_Crosswalk_hasPushToWalkButton	= 5,
	LaneAttributes_Crosswalk_audioSupport	= 6,
	LaneAttributes_Crosswalk_rfSignalRequestPresent	= 7,
	LaneAttributes_Crosswalk_unsignalizedSegmentsPresent	= 8
} e_LaneAttributes_Crosswalk;

/* LaneAttributes-Crosswalk */
typedef BIT_STRING_t	 LaneAttributes_Crosswalk_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LaneAttributes_Crosswalk_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_Crosswalk;
asn_struct_free_f LaneAttributes_Crosswalk_free;
asn_struct_print_f LaneAttributes_Crosswalk_print;
asn_constr_check_f LaneAttributes_Crosswalk_constraint;
ber_type_decoder_f LaneAttributes_Crosswalk_decode_ber;
der_type_encoder_f LaneAttributes_Crosswalk_encode_der;
xer_type_decoder_f LaneAttributes_Crosswalk_decode_xer;
xer_type_encoder_f LaneAttributes_Crosswalk_encode_xer;
oer_type_decoder_f LaneAttributes_Crosswalk_decode_oer;
oer_type_encoder_f LaneAttributes_Crosswalk_encode_oer;
per_type_decoder_f LaneAttributes_Crosswalk_decode_uper;
per_type_encoder_f LaneAttributes_Crosswalk_encode_uper;
per_type_decoder_f LaneAttributes_Crosswalk_decode_aper;
per_type_encoder_f LaneAttributes_Crosswalk_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_Crosswalk_H_ */
#include <asn_internal.h>

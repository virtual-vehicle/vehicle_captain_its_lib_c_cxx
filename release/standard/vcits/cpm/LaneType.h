/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_LaneType_H_
#define	_LaneType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneType {
	LaneType_traffic	= 0,
	LaneType_through	= 1,
	LaneType_reversible	= 2,
	LaneType_acceleration	= 3,
	LaneType_deceleration	= 4,
	LaneType_leftHandTurning	= 5,
	LaneType_rightHandTurning	= 6,
	LaneType_dedicatedVehicle	= 7,
	LaneType_bus	= 8,
	LaneType_taxi	= 9,
	LaneType_hov	= 10,
	LaneType_hot	= 11,
	LaneType_pedestrian	= 12,
	LaneType_cycleLane	= 13,
	LaneType_median	= 14,
	LaneType_striping	= 15,
	LaneType_trackedVehicle	= 16,
	LaneType_parking	= 17,
	LaneType_emergency	= 18,
	LaneType_verge	= 19,
	LaneType_minimumRiskManoeuvre	= 20,
	LaneType_unknown	= 31
} e_LaneType;

/* LaneType */
typedef long	 LaneType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LaneType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LaneType;
asn_struct_free_f LaneType_free;
asn_struct_print_f LaneType_print;
asn_constr_check_f LaneType_constraint;
ber_type_decoder_f LaneType_decode_ber;
der_type_encoder_f LaneType_encode_der;
xer_type_decoder_f LaneType_decode_xer;
xer_type_encoder_f LaneType_encode_xer;
jer_type_encoder_f LaneType_encode_jer;
oer_type_decoder_f LaneType_decode_oer;
oer_type_encoder_f LaneType_encode_oer;
per_type_decoder_f LaneType_decode_uper;
per_type_encoder_f LaneType_encode_uper;
per_type_decoder_f LaneType_decode_aper;
per_type_encoder_f LaneType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneType_H_ */
#include <asn_internal.h>

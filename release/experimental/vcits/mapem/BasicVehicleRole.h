/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_BasicVehicleRole_H_
#define	_BasicVehicleRole_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BasicVehicleRole {
	BasicVehicleRole_basicVehicle	= 0,
	BasicVehicleRole_publicTransport	= 1,
	BasicVehicleRole_specialTransport	= 2,
	BasicVehicleRole_dangerousGoods	= 3,
	BasicVehicleRole_roadWork	= 4,
	BasicVehicleRole_roadRescue	= 5,
	BasicVehicleRole_emergency	= 6,
	BasicVehicleRole_safetyCar	= 7,
	BasicVehicleRole_none_unknown	= 8,
	BasicVehicleRole_truck	= 9,
	BasicVehicleRole_motorcycle	= 10,
	BasicVehicleRole_roadSideSource	= 11,
	BasicVehicleRole_police	= 12,
	BasicVehicleRole_fire	= 13,
	BasicVehicleRole_ambulance	= 14,
	BasicVehicleRole_dot	= 15,
	BasicVehicleRole_transit	= 16,
	BasicVehicleRole_slowMoving	= 17,
	BasicVehicleRole_stopNgo	= 18,
	BasicVehicleRole_cyclist	= 19,
	BasicVehicleRole_pedestrian	= 20,
	BasicVehicleRole_nonMotorized	= 21,
	BasicVehicleRole_military	= 22
	/*
	 * Enumeration is extensible
	 */
} e_BasicVehicleRole;

/* BasicVehicleRole */
typedef long	 BasicVehicleRole_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BasicVehicleRole_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BasicVehicleRole;
extern const asn_INTEGER_specifics_t asn_SPC_BasicVehicleRole_specs_1;
asn_struct_free_f BasicVehicleRole_free;
asn_struct_print_f BasicVehicleRole_print;
asn_constr_check_f BasicVehicleRole_constraint;
ber_type_decoder_f BasicVehicleRole_decode_ber;
der_type_encoder_f BasicVehicleRole_encode_der;
xer_type_decoder_f BasicVehicleRole_decode_xer;
xer_type_encoder_f BasicVehicleRole_encode_xer;
jer_type_encoder_f BasicVehicleRole_encode_jer;
oer_type_decoder_f BasicVehicleRole_decode_oer;
oer_type_encoder_f BasicVehicleRole_encode_oer;
per_type_decoder_f BasicVehicleRole_decode_uper;
per_type_encoder_f BasicVehicleRole_encode_uper;
per_type_decoder_f BasicVehicleRole_decode_aper;
per_type_encoder_f BasicVehicleRole_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BasicVehicleRole_H_ */
#include <asn_internal.h>

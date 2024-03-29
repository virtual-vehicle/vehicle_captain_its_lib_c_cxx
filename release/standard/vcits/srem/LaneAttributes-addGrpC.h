/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_LaneAttributes_addGrpC_H_
#define	_LaneAttributes_addGrpC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VehicleHeight.h"
#include "VehicleMass.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneAttributes-addGrpC */
typedef struct LaneAttributes_addGrpC {
	VehicleHeight_t	*maxVehicleHeight;	/* OPTIONAL */
	VehicleMass_t	*maxVehicleWeight;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneAttributes_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_addGrpC;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_addGrpC_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneAttributes_addGrpC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_addGrpC_H_ */
#include <asn_internal.h>

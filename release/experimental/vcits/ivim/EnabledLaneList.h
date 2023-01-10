/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_EnabledLaneList_H_
#define	_EnabledLaneList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EnabledLaneList */
typedef struct EnabledLaneList {
	A_SEQUENCE_OF(LaneID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EnabledLaneList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EnabledLaneList;
extern asn_SET_OF_specifics_t asn_SPC_EnabledLaneList_specs_1;
extern asn_TYPE_member_t asn_MBR_EnabledLaneList_1[1];
extern asn_per_constraints_t asn_PER_type_EnabledLaneList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EnabledLaneList_H_ */
#include <asn_internal.h>
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_MovementState_H_
#define	_MovementState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DescriptiveName.h"
#include "SignalGroupID.h"
#include "MovementEventList.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ManeuverAssistList;
struct Reg_MovementState;

/* MovementState */
typedef struct MovementState {
	DescriptiveName_t	*movementName;	/* OPTIONAL */
	SignalGroupID_t	 signalGroup;
	MovementEventList_t	 state_time_speed;
	struct ManeuverAssistList	*maneuverAssistList;	/* OPTIONAL */
	struct MovementState__regional {
		A_SEQUENCE_OF(struct Reg_MovementState) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MovementState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MovementState;
extern asn_SEQUENCE_specifics_t asn_SPC_MovementState_specs_1;
extern asn_TYPE_member_t asn_MBR_MovementState_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _MovementState_H_ */
#include <asn_internal.h>

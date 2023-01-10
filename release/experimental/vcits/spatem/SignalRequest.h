/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_SignalRequest_H_
#define	_SignalRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntersectionReferenceID.h"
#include "RequestID.h"
#include "PriorityRequestType.h"
#include "IntersectionAccessPoint.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntersectionAccessPoint;
struct Reg_SignalRequest;

/* SignalRequest */
typedef struct SignalRequest {
	IntersectionReferenceID_t	 id;
	RequestID_t	 requestID;
	PriorityRequestType_t	 requestType;
	IntersectionAccessPoint_t	 inBoundLane;
	struct IntersectionAccessPoint	*outBoundLane;	/* OPTIONAL */
	struct SignalRequest__regional {
		A_SEQUENCE_OF(struct Reg_SignalRequest) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_SignalRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalRequest_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SignalRequest_H_ */
#include <asn_internal.h>

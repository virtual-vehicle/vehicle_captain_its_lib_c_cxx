/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_NodeXY_H_
#define	_NodeXY_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeOffsetPointXY.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeAttributeSetXY;

/* NodeXY */
typedef struct NodeXY {
	NodeOffsetPointXY_t	 delta;
	struct NodeAttributeSetXY	*attributes;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeXY_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeXY;
extern asn_SEQUENCE_specifics_t asn_SPC_NodeXY_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeXY_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NodeXY_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_ItsStationPositionList_H_
#define	_ItsStationPositionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ItsStationPosition;

/* ItsStationPositionList */
typedef struct ItsStationPositionList {
	A_SEQUENCE_OF(struct ItsStationPosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ItsStationPositionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ItsStationPositionList;
extern asn_SET_OF_specifics_t asn_SPC_ItsStationPositionList_specs_1;
extern asn_TYPE_member_t asn_MBR_ItsStationPositionList_1[1];
extern asn_per_constraints_t asn_PER_type_ItsStationPositionList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ItsStationPositionList_H_ */
#include <asn_internal.h>

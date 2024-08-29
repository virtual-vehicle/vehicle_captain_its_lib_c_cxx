/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PathPoint_H_
#define	_PathPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaReferencePosition.h"
#include "PathDeltaTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PathPoint */
typedef struct PathPoint {
	DeltaReferencePosition_t	 pathPosition;
	PathDeltaTime_t	*pathDeltaTime;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PathPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathPoint;
extern asn_SEQUENCE_specifics_t asn_SPC_PathPoint_specs_1;
extern asn_TYPE_member_t asn_MBR_PathPoint_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PathPoint_H_ */
#include <asn_internal.h>

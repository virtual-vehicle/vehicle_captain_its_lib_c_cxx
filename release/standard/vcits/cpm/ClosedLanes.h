/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ClosedLanes_H_
#define	_ClosedLanes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HardShoulderStatus.h"
#include "DrivingLaneStatus.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ClosedLanes */
typedef struct ClosedLanes {
	HardShoulderStatus_t	*innerhardShoulderStatus;	/* OPTIONAL */
	HardShoulderStatus_t	*outerhardShoulderStatus;	/* OPTIONAL */
	DrivingLaneStatus_t	*drivingLaneStatus;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ClosedLanes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClosedLanes;

#ifdef __cplusplus
}
#endif

#endif	/* _ClosedLanes_H_ */
#include <asn_internal.h>
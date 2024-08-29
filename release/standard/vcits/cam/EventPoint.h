/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#ifndef	_EventPoint_H_
#define	_EventPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaReferencePosition.h"
#include "PathDeltaTime.h"
#include "InformationQuality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EventPoint */
typedef struct EventPoint {
	DeltaReferencePosition_t	 eventPosition;
	PathDeltaTime_t	*eventDeltaTime;	/* OPTIONAL */
	InformationQuality_t	 informationQuality;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventPoint;
extern asn_SEQUENCE_specifics_t asn_SPC_EventPoint_specs_1;
extern asn_TYPE_member_t asn_MBR_EventPoint_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EventPoint_H_ */
#include <asn_internal.h>

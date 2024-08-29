/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InterferenceManagementZone_H_
#define	_InterferenceManagementZone_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterferenceManagementZoneDefinition.h"
#include "InterferenceManagementInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterferenceManagementZone */
typedef struct InterferenceManagementZone {
	InterferenceManagementZoneDefinition_t	 zoneDefinition;
	InterferenceManagementInfo_t	 managementInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterferenceManagementZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterferenceManagementZone;
extern asn_SEQUENCE_specifics_t asn_SPC_InterferenceManagementZone_specs_1;
extern asn_TYPE_member_t asn_MBR_InterferenceManagementZone_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterferenceManagementZone_H_ */
#include <asn_internal.h>

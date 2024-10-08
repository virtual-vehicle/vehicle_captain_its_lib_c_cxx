/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VruClusterInformation_H_
#define	_VruClusterInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Identifier1B.h"
#include "CardinalNumber1B.h"
#include "VruClusterProfiles.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Shape;

/* VruClusterInformation */
typedef struct VruClusterInformation {
	Identifier1B_t	*clusterId;	/* OPTIONAL */
	struct Shape	*clusterBoundingBoxShape;	/* OPTIONAL */
	CardinalNumber1B_t	 clusterCardinalitySize;
	VruClusterProfiles_t	*clusterProfiles;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VruClusterInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VruClusterInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_VruClusterInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_VruClusterInformation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _VruClusterInformation_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VruExteriorLights_H_
#define	_VruExteriorLights_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ExteriorLights.h"
#include "VruSpecificExteriorLights.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VruExteriorLights */
typedef struct VruExteriorLights {
	ExteriorLights_t	 vehicular;
	VruSpecificExteriorLights_t	 vruSpecific;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VruExteriorLights_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VruExteriorLights;

#ifdef __cplusplus
}
#endif

#endif	/* _VruExteriorLights_H_ */
#include <asn_internal.h>

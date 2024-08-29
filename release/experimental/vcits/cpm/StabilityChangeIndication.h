/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_StabilityChangeIndication_H_
#define	_StabilityChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StabilityLossProbability.h"
#include "DeltaTimeTenthOfSecond.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* StabilityChangeIndication */
typedef struct StabilityChangeIndication {
	StabilityLossProbability_t	 lossProbability;
	DeltaTimeTenthOfSecond_t	 actionDeltaTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StabilityChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StabilityChangeIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _StabilityChangeIndication_H_ */
#include <asn_internal.h>

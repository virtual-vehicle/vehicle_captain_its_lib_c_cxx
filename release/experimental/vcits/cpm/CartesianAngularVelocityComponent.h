/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CartesianAngularVelocityComponent_H_
#define	_CartesianAngularVelocityComponent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CartesianAngularVelocityComponentValue.h"
#include "AngularSpeedConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CartesianAngularVelocityComponent */
typedef struct CartesianAngularVelocityComponent {
	CartesianAngularVelocityComponentValue_t	 value;
	AngularSpeedConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CartesianAngularVelocityComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CartesianAngularVelocityComponent;
extern asn_SEQUENCE_specifics_t asn_SPC_CartesianAngularVelocityComponent_specs_1;
extern asn_TYPE_member_t asn_MBR_CartesianAngularVelocityComponent_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CartesianAngularVelocityComponent_H_ */
#include <asn_internal.h>

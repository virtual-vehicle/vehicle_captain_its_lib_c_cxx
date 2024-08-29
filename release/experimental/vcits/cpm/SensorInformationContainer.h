/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-SensorInformationContainer"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/CPM-SensorInformationContainer.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SensorInformationContainer_H_
#define	_SensorInformationContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SensorInformation;

/* SensorInformationContainer */
typedef struct SensorInformationContainer {
	A_SEQUENCE_OF(struct SensorInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SensorInformationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SensorInformationContainer;
extern asn_SET_OF_specifics_t asn_SPC_SensorInformationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_SensorInformationContainer_1[1];
extern asn_per_constraints_t asn_PER_type_SensorInformationContainer_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SensorInformationContainer_H_ */
#include <asn_internal.h>

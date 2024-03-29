/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_VehicleCharacteristicsRangesList_H_
#define	_VehicleCharacteristicsRangesList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleCharacteristicsRanges;

/* VehicleCharacteristicsRangesList */
typedef struct VehicleCharacteristicsRangesList {
	A_SEQUENCE_OF(struct VehicleCharacteristicsRanges) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleCharacteristicsRangesList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleCharacteristicsRangesList;
extern asn_SET_OF_specifics_t asn_SPC_VehicleCharacteristicsRangesList_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleCharacteristicsRangesList_1[1];
extern asn_per_constraints_t asn_PER_type_VehicleCharacteristicsRangesList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleCharacteristicsRangesList_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-OriginatingStationContainers"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_OriginatingVehicleContainer_H_
#define	_OriginatingVehicleContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Wgs84Angle.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CartesianAngle;
struct TrailerDataSet;

/* OriginatingVehicleContainer */
typedef struct OriginatingVehicleContainer {
	Wgs84Angle_t	 orientationAngle;
	struct CartesianAngle	*pitchAngle;	/* OPTIONAL */
	struct CartesianAngle	*rollAngle;	/* OPTIONAL */
	struct TrailerDataSet	*trailerDataSet;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OriginatingVehicleContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OriginatingVehicleContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_OriginatingVehicleContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_OriginatingVehicleContainer_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _OriginatingVehicleContainer_H_ */
#include <asn_internal.h>

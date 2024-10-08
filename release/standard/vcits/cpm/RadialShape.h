/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RadialShape_H_
#define	_RadialShape_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StandardLength12b.h"
#include "Wgs84AngleValue.h"
#include "CartesianAngleValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CartesianPosition3d;

/* RadialShape */
typedef struct RadialShape {
	struct CartesianPosition3d	*shapeReferencePoint;	/* OPTIONAL */
	StandardLength12b_t	 range;
	Wgs84AngleValue_t	 stationaryHorizontalOpeningAngleStart;
	Wgs84AngleValue_t	 stationaryHorizontalOpeningAngleEnd;
	CartesianAngleValue_t	*verticalOpeningAngleStart;	/* OPTIONAL */
	CartesianAngleValue_t	*verticalOpeningAngleEnd;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadialShape_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadialShape;
extern asn_SEQUENCE_specifics_t asn_SPC_RadialShape_specs_1;
extern asn_TYPE_member_t asn_MBR_RadialShape_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RadialShape_H_ */
#include <asn_internal.h>

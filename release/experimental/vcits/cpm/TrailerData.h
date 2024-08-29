/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_TrailerData_H_
#define	_TrailerData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Identifier1B.h"
#include "StandardLength1B.h"
#include "VehicleWidth.h"
#include "CartesianAngle.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrailerData */
typedef struct TrailerData {
	Identifier1B_t	 refPointId;
	StandardLength1B_t	 hitchPointOffset;
	StandardLength1B_t	*frontOverhang;	/* OPTIONAL */
	StandardLength1B_t	*rearOverhang;	/* OPTIONAL */
	VehicleWidth_t	*trailerWidth;	/* OPTIONAL */
	CartesianAngle_t	 hitchAngle;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrailerData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrailerData;
extern asn_SEQUENCE_specifics_t asn_SPC_TrailerData_specs_1;
extern asn_TYPE_member_t asn_MBR_TrailerData_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _TrailerData_H_ */
#include <asn_internal.h>

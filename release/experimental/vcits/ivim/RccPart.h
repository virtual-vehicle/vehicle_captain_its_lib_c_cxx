/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_RccPart_H_
#define	_RccPart_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ZoneIds.h"
#include "RoadType.h"
#include "LaneConfiguration.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RccPart */
typedef struct RccPart {
	ZoneIds_t	 relevanceZoneIds;
	RoadType_t	 roadType;
	LaneConfiguration_t	 laneConfiguration;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RccPart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RccPart;
extern asn_SEQUENCE_specifics_t asn_SPC_RccPart_specs_1;
extern asn_TYPE_member_t asn_MBR_RccPart_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RccPart_H_ */
#include <asn_internal.h>

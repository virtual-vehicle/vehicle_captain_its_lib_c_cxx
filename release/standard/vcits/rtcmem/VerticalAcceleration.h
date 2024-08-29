/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#ifndef	_VerticalAcceleration_H_
#define	_VerticalAcceleration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VerticalAccelerationValue.h"
#include "AccelerationConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VerticalAcceleration */
typedef struct VerticalAcceleration {
	VerticalAccelerationValue_t	 verticalAccelerationValue;
	AccelerationConfidence_t	 verticalAccelerationConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VerticalAcceleration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VerticalAcceleration;

#ifdef __cplusplus
}
#endif

#endif	/* _VerticalAcceleration_H_ */
#include <asn_internal.h>

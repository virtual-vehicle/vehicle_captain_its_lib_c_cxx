/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#ifndef	_ItineraryPath_H_
#define	_ItineraryPath_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferencePosition;

/* ItineraryPath */
typedef struct ItineraryPath {
	A_SEQUENCE_OF(struct ReferencePosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ItineraryPath_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ItineraryPath;

#ifdef __cplusplus
}
#endif

#endif	/* _ItineraryPath_H_ */
#include <asn_internal.h>

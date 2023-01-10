/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_PosConfidenceEllipse_H_
#define	_PosConfidenceEllipse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SemiAxisLength.h"
#include "HeadingValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PosConfidenceEllipse */
typedef struct PosConfidenceEllipse {
	SemiAxisLength_t	 semiMajorConfidence;
	SemiAxisLength_t	 semiMinorConfidence;
	HeadingValue_t	 semiMajorOrientation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosConfidenceEllipse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosConfidenceEllipse;
extern asn_SEQUENCE_specifics_t asn_SPC_PosConfidenceEllipse_specs_1;
extern asn_TYPE_member_t asn_MBR_PosConfidenceEllipse_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PosConfidenceEllipse_H_ */
#include <asn_internal.h>

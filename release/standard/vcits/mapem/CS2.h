/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_CS2_H_
#define	_CS2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ManufacturerIdentifier.h"
#include "ServiceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CS2 */
typedef struct CS2 {
	ManufacturerIdentifier_t	 manufacturerIdentifier;
	ServiceNumber_t	 serviceNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS2;

#ifdef __cplusplus
}
#endif

#endif	/* _CS2_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VC-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/custom/VC-Container-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage`
 */

#ifndef	_TimeVal_H_
#define	_TimeVal_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeVal */
typedef struct TimeVal {
	long	 sec;
	long	 usec;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeVal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeVal;
extern asn_SEQUENCE_specifics_t asn_SPC_TimeVal_specs_1;
extern asn_TYPE_member_t asn_MBR_TimeVal_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TimeVal_H_ */
#include <asn_internal.h>

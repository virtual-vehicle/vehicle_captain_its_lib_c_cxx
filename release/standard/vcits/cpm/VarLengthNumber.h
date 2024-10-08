/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VarLengthNumber_H_
#define	_VarLengthNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Ext1.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarLengthNumber_PR {
	VarLengthNumber_PR_NOTHING,	/* No components present */
	VarLengthNumber_PR_content,
	VarLengthNumber_PR_extension
} VarLengthNumber_PR;

/* VarLengthNumber */
typedef struct VarLengthNumber {
	VarLengthNumber_PR present;
	union VarLengthNumber_u {
		long	 content;
		Ext1_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLengthNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLengthNumber;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLengthNumber_H_ */
#include <asn_internal.h>

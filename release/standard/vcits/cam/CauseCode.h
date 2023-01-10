/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#ifndef	_CauseCode_H_
#define	_CauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CauseCodeType.h"
#include "SubCauseCodeType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CauseCode */
typedef struct CauseCode {
	CauseCodeType_t	 causeCode;
	SubCauseCodeType_t	 subCauseCode;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CauseCode;
extern asn_SEQUENCE_specifics_t asn_SPC_CauseCode_specs_1;
extern asn_TYPE_member_t asn_MBR_CauseCode_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CauseCode_H_ */
#include <asn_internal.h>

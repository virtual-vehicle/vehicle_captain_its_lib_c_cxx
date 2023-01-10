/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_TrailerDetails_H_
#define	_TrailerDetails_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "TrailerAxles.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrailerDetails__trailerType {
	TrailerDetails__trailerType_notPresent	= 0,
	TrailerDetails__trailerType_trailer	= 1,
	TrailerDetails__trailerType_semitrailer	= 2
} e_TrailerDetails__trailerType;

/* TrailerDetails */
typedef struct TrailerDetails {
	long	 trailerType;
	TrailerAxles_t	 trailerAxles;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrailerDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrailerDetails;
extern asn_SEQUENCE_specifics_t asn_SPC_TrailerDetails_specs_1;
extern asn_TYPE_member_t asn_MBR_TrailerDetails_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrailerDetails_H_ */
#include <asn_internal.h>

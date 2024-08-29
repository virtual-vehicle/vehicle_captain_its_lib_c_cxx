/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_RegionId_H_
#define	_RegionId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RegionId */
typedef long	 RegionId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RegionId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RegionId;
asn_struct_free_f RegionId_free;
asn_struct_print_f RegionId_print;
asn_constr_check_f RegionId_constraint;
ber_type_decoder_f RegionId_decode_ber;
der_type_encoder_f RegionId_encode_der;
xer_type_decoder_f RegionId_decode_xer;
xer_type_encoder_f RegionId_encode_xer;
jer_type_encoder_f RegionId_encode_jer;
oer_type_decoder_f RegionId_decode_oer;
oer_type_encoder_f RegionId_encode_oer;
per_type_decoder_f RegionId_decode_uper;
per_type_encoder_f RegionId_encode_uper;
per_type_decoder_f RegionId_decode_aper;
per_type_encoder_f RegionId_encode_aper;
#define RegionId_noRegion	((RegionId_t)0)
#define RegionId_addGrpA	((RegionId_t)1)
#define RegionId_addGrpB	((RegionId_t)2)
#define RegionId_addGrpC	((RegionId_t)3)

#ifdef __cplusplus
}
#endif

#endif	/* _RegionId_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_WearLevel_H_
#define	_WearLevel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WearLevel {
	WearLevel_new	= 0,
	WearLevel_good	= 1,
	WearLevel_bad	= 2,
	WearLevel_hasPotholes	= 3,
	WearLevel_unavailable	= 7
} e_WearLevel;

/* WearLevel */
typedef long	 WearLevel_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_WearLevel_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_WearLevel;
asn_struct_free_f WearLevel_free;
asn_struct_print_f WearLevel_print;
asn_constr_check_f WearLevel_constraint;
ber_type_decoder_f WearLevel_decode_ber;
der_type_encoder_f WearLevel_encode_der;
xer_type_decoder_f WearLevel_decode_xer;
xer_type_encoder_f WearLevel_encode_xer;
jer_type_encoder_f WearLevel_encode_jer;
oer_type_decoder_f WearLevel_decode_oer;
oer_type_encoder_f WearLevel_encode_oer;
per_type_decoder_f WearLevel_decode_uper;
per_type_encoder_f WearLevel_encode_uper;
per_type_decoder_f WearLevel_decode_aper;
per_type_encoder_f WearLevel_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _WearLevel_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_ReceiptText_H_
#define	_ReceiptText_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReceiptText */
typedef OCTET_STRING_t	 ReceiptText_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReceiptText;
asn_struct_free_f ReceiptText_free;
asn_struct_print_f ReceiptText_print;
asn_constr_check_f ReceiptText_constraint;
ber_type_decoder_f ReceiptText_decode_ber;
der_type_encoder_f ReceiptText_encode_der;
xer_type_decoder_f ReceiptText_decode_xer;
xer_type_encoder_f ReceiptText_encode_xer;
jer_type_encoder_f ReceiptText_encode_jer;
oer_type_decoder_f ReceiptText_decode_oer;
oer_type_encoder_f ReceiptText_encode_oer;
per_type_decoder_f ReceiptText_decode_uper;
per_type_encoder_f ReceiptText_encode_uper;
per_type_decoder_f ReceiptText_decode_aper;
per_type_encoder_f ReceiptText_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReceiptText_H_ */
#include <asn_internal.h>

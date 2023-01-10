/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VC-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/custom/VC-Container-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage`
 */

#ifndef	_MACAddress_H_
#define	_MACAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MACAddress */
typedef OCTET_STRING_t	 MACAddress_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MACAddress_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MACAddress;
asn_struct_free_f MACAddress_free;
asn_struct_print_f MACAddress_print;
asn_constr_check_f MACAddress_constraint;
ber_type_decoder_f MACAddress_decode_ber;
der_type_encoder_f MACAddress_encode_der;
xer_type_decoder_f MACAddress_decode_xer;
xer_type_encoder_f MACAddress_encode_xer;
oer_type_decoder_f MACAddress_decode_oer;
oer_type_encoder_f MACAddress_encode_oer;
per_type_decoder_f MACAddress_decode_uper;
per_type_encoder_f MACAddress_encode_uper;
per_type_decoder_f MACAddress_decode_aper;
per_type_encoder_f MACAddress_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MACAddress_H_ */
#include <asn_internal.h>

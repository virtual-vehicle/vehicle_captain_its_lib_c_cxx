/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_EquipmentOBUId_H_
#define	_EquipmentOBUId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EquipmentOBUId */
typedef OCTET_STRING_t	 EquipmentOBUId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EquipmentOBUId;
asn_struct_free_f EquipmentOBUId_free;
asn_struct_print_f EquipmentOBUId_print;
asn_constr_check_f EquipmentOBUId_constraint;
ber_type_decoder_f EquipmentOBUId_decode_ber;
der_type_encoder_f EquipmentOBUId_encode_der;
xer_type_decoder_f EquipmentOBUId_decode_xer;
xer_type_encoder_f EquipmentOBUId_encode_xer;
jer_type_encoder_f EquipmentOBUId_encode_jer;
oer_type_decoder_f EquipmentOBUId_decode_oer;
oer_type_encoder_f EquipmentOBUId_encode_oer;
per_type_decoder_f EquipmentOBUId_decode_uper;
per_type_encoder_f EquipmentOBUId_encode_uper;
per_type_decoder_f EquipmentOBUId_decode_aper;
per_type_encoder_f EquipmentOBUId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EquipmentOBUId_H_ */
#include <asn_internal.h>

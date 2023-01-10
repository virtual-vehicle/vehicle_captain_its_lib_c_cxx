/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#ifndef	_PtActivationData_H_
#define	_PtActivationData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PtActivationData */
typedef OCTET_STRING_t	 PtActivationData_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PtActivationData_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PtActivationData;
asn_struct_free_f PtActivationData_free;
asn_struct_print_f PtActivationData_print;
asn_constr_check_f PtActivationData_constraint;
ber_type_decoder_f PtActivationData_decode_ber;
der_type_encoder_f PtActivationData_encode_der;
xer_type_decoder_f PtActivationData_decode_xer;
xer_type_encoder_f PtActivationData_encode_xer;
oer_type_decoder_f PtActivationData_decode_oer;
oer_type_encoder_f PtActivationData_encode_oer;
per_type_decoder_f PtActivationData_decode_uper;
per_type_encoder_f PtActivationData_encode_uper;
per_type_decoder_f PtActivationData_decode_aper;
per_type_encoder_f PtActivationData_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PtActivationData_H_ */
#include <asn_internal.h>

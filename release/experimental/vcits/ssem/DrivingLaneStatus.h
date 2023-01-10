/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_DrivingLaneStatus_H_
#define	_DrivingLaneStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DrivingLaneStatus */
typedef BIT_STRING_t	 DrivingLaneStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DrivingLaneStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DrivingLaneStatus;
asn_struct_free_f DrivingLaneStatus_free;
asn_struct_print_f DrivingLaneStatus_print;
asn_constr_check_f DrivingLaneStatus_constraint;
ber_type_decoder_f DrivingLaneStatus_decode_ber;
der_type_encoder_f DrivingLaneStatus_encode_der;
xer_type_decoder_f DrivingLaneStatus_decode_xer;
xer_type_encoder_f DrivingLaneStatus_encode_xer;
oer_type_decoder_f DrivingLaneStatus_decode_oer;
oer_type_encoder_f DrivingLaneStatus_encode_oer;
per_type_decoder_f DrivingLaneStatus_decode_uper;
per_type_encoder_f DrivingLaneStatus_encode_uper;
per_type_decoder_f DrivingLaneStatus_decode_aper;
per_type_encoder_f DrivingLaneStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DrivingLaneStatus_H_ */
#include <asn_internal.h>

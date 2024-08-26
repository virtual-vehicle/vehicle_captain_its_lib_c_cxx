/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/denm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=DENM`
 */

#ifndef	_VerticalAccelerationValue_H_
#define	_VerticalAccelerationValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VerticalAccelerationValue {
	VerticalAccelerationValue_pointOneMeterPerSecSquaredUp	= 1,
	VerticalAccelerationValue_pointOneMeterPerSecSquaredDown	= -1,
	VerticalAccelerationValue_unavailable	= 161
} e_VerticalAccelerationValue;

/* VerticalAccelerationValue */
typedef long	 VerticalAccelerationValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VerticalAccelerationValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VerticalAccelerationValue;
asn_struct_free_f VerticalAccelerationValue_free;
asn_struct_print_f VerticalAccelerationValue_print;
asn_constr_check_f VerticalAccelerationValue_constraint;
ber_type_decoder_f VerticalAccelerationValue_decode_ber;
der_type_encoder_f VerticalAccelerationValue_encode_der;
xer_type_decoder_f VerticalAccelerationValue_decode_xer;
xer_type_encoder_f VerticalAccelerationValue_encode_xer;
jer_type_encoder_f VerticalAccelerationValue_encode_jer;
oer_type_decoder_f VerticalAccelerationValue_decode_oer;
oer_type_encoder_f VerticalAccelerationValue_encode_oer;
per_type_decoder_f VerticalAccelerationValue_decode_uper;
per_type_encoder_f VerticalAccelerationValue_encode_uper;
per_type_decoder_f VerticalAccelerationValue_decode_aper;
per_type_encoder_f VerticalAccelerationValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VerticalAccelerationValue_H_ */
#include <asn_internal.h>

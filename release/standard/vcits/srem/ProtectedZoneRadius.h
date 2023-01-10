/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_ProtectedZoneRadius_H_
#define	_ProtectedZoneRadius_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProtectedZoneRadius {
	ProtectedZoneRadius_oneMeter	= 1
} e_ProtectedZoneRadius;

/* ProtectedZoneRadius */
typedef long	 ProtectedZoneRadius_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProtectedZoneRadius_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProtectedZoneRadius;
asn_struct_free_f ProtectedZoneRadius_free;
asn_struct_print_f ProtectedZoneRadius_print;
asn_constr_check_f ProtectedZoneRadius_constraint;
ber_type_decoder_f ProtectedZoneRadius_decode_ber;
der_type_encoder_f ProtectedZoneRadius_encode_der;
xer_type_decoder_f ProtectedZoneRadius_decode_xer;
xer_type_encoder_f ProtectedZoneRadius_encode_xer;
oer_type_decoder_f ProtectedZoneRadius_decode_oer;
oer_type_encoder_f ProtectedZoneRadius_encode_oer;
per_type_decoder_f ProtectedZoneRadius_decode_uper;
per_type_encoder_f ProtectedZoneRadius_encode_uper;
per_type_decoder_f ProtectedZoneRadius_decode_aper;
per_type_encoder_f ProtectedZoneRadius_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtectedZoneRadius_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_HumanPresenceOnTheRoadSubCauseCode_H_
#define	_HumanPresenceOnTheRoadSubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HumanPresenceOnTheRoadSubCauseCode {
	HumanPresenceOnTheRoadSubCauseCode_unavailable	= 0,
	HumanPresenceOnTheRoadSubCauseCode_childrenOnRoadway	= 1,
	HumanPresenceOnTheRoadSubCauseCode_cyclistOnRoadway	= 2,
	HumanPresenceOnTheRoadSubCauseCode_motorcyclistOnRoadway	= 3
} e_HumanPresenceOnTheRoadSubCauseCode;

/* HumanPresenceOnTheRoadSubCauseCode */
typedef long	 HumanPresenceOnTheRoadSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HumanPresenceOnTheRoadSubCauseCode;
asn_struct_free_f HumanPresenceOnTheRoadSubCauseCode_free;
asn_struct_print_f HumanPresenceOnTheRoadSubCauseCode_print;
asn_constr_check_f HumanPresenceOnTheRoadSubCauseCode_constraint;
ber_type_decoder_f HumanPresenceOnTheRoadSubCauseCode_decode_ber;
der_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_der;
xer_type_decoder_f HumanPresenceOnTheRoadSubCauseCode_decode_xer;
xer_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_xer;
jer_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_jer;
oer_type_decoder_f HumanPresenceOnTheRoadSubCauseCode_decode_oer;
oer_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_oer;
per_type_decoder_f HumanPresenceOnTheRoadSubCauseCode_decode_uper;
per_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_uper;
per_type_decoder_f HumanPresenceOnTheRoadSubCauseCode_decode_aper;
per_type_encoder_f HumanPresenceOnTheRoadSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HumanPresenceOnTheRoadSubCauseCode_H_ */
#include <asn_internal.h>

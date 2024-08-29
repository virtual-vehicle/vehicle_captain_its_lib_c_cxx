/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/denm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=DENM`
 */

#ifndef	_PositioningSolutionType_H_
#define	_PositioningSolutionType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PositioningSolutionType {
	PositioningSolutionType_noPositioningSolution	= 0,
	PositioningSolutionType_sGNSS	= 1,
	PositioningSolutionType_dGNSS	= 2,
	PositioningSolutionType_sGNSSplusDR	= 3,
	PositioningSolutionType_dGNSSplusDR	= 4,
	PositioningSolutionType_dR	= 5
	/*
	 * Enumeration is extensible
	 */
} e_PositioningSolutionType;

/* PositioningSolutionType */
typedef long	 PositioningSolutionType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PositioningSolutionType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PositioningSolutionType;
extern const asn_INTEGER_specifics_t asn_SPC_PositioningSolutionType_specs_1;
asn_struct_free_f PositioningSolutionType_free;
asn_struct_print_f PositioningSolutionType_print;
asn_constr_check_f PositioningSolutionType_constraint;
ber_type_decoder_f PositioningSolutionType_decode_ber;
der_type_encoder_f PositioningSolutionType_encode_der;
xer_type_decoder_f PositioningSolutionType_decode_xer;
xer_type_encoder_f PositioningSolutionType_encode_xer;
jer_type_encoder_f PositioningSolutionType_encode_jer;
oer_type_decoder_f PositioningSolutionType_decode_oer;
oer_type_encoder_f PositioningSolutionType_encode_oer;
per_type_decoder_f PositioningSolutionType_decode_uper;
per_type_encoder_f PositioningSolutionType_encode_uper;
per_type_decoder_f PositioningSolutionType_decode_aper;
per_type_encoder_f PositioningSolutionType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PositioningSolutionType_H_ */
#include <asn_internal.h>

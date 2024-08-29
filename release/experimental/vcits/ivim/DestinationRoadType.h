/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14823-missing.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_DestinationRoadType_H_
#define	_DestinationRoadType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DestinationRoadType {
	DestinationRoadType_none	= 0,
	DestinationRoadType_nationalHighway	= 1,
	DestinationRoadType_localHighway	= 2,
	DestinationRoadType_tollExpresswayMotorway	= 3,
	DestinationRoadType_internationalHighway	= 4,
	DestinationRoadType_highway	= 5,
	DestinationRoadType_expressway	= 6,
	DestinationRoadType_nationalRoad	= 7,
	DestinationRoadType_regionalProvincialRoad	= 8,
	DestinationRoadType_localRoad	= 9,
	DestinationRoadType_motorwayJunction	= 10,
	DestinationRoadType_diversion	= 11,
	DestinationRoadType_rfu1	= 12,
	DestinationRoadType_rfu2	= 13,
	DestinationRoadType_rfu3	= 14,
	DestinationRoadType_rfu4	= 15
} e_DestinationRoadType;

/* DestinationRoadType */
typedef long	 DestinationRoadType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DestinationRoadType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DestinationRoadType;
asn_struct_free_f DestinationRoadType_free;
asn_struct_print_f DestinationRoadType_print;
asn_constr_check_f DestinationRoadType_constraint;
ber_type_decoder_f DestinationRoadType_decode_ber;
der_type_encoder_f DestinationRoadType_encode_der;
xer_type_decoder_f DestinationRoadType_decode_xer;
xer_type_encoder_f DestinationRoadType_encode_xer;
jer_type_encoder_f DestinationRoadType_encode_jer;
oer_type_decoder_f DestinationRoadType_decode_oer;
oer_type_encoder_f DestinationRoadType_encode_oer;
per_type_decoder_f DestinationRoadType_decode_uper;
per_type_encoder_f DestinationRoadType_encode_uper;
per_type_decoder_f DestinationRoadType_decode_aper;
per_type_encoder_f DestinationRoadType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DestinationRoadType_H_ */
#include <asn_internal.h>

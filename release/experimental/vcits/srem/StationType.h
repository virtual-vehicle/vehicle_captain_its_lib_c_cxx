/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_StationType_H_
#define	_StationType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StationType {
	StationType_unknown	= 0,
	StationType_pedestrian	= 1,
	StationType_cyclist	= 2,
	StationType_moped	= 3,
	StationType_motorcycle	= 4,
	StationType_passengerCar	= 5,
	StationType_bus	= 6,
	StationType_lightTruck	= 7,
	StationType_heavyTruck	= 8,
	StationType_trailer	= 9,
	StationType_specialVehicles	= 10,
	StationType_tram	= 11,
	StationType_roadSideUnit	= 15
} e_StationType;

/* StationType */
typedef long	 StationType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StationType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StationType;
asn_struct_free_f StationType_free;
asn_struct_print_f StationType_print;
asn_constr_check_f StationType_constraint;
ber_type_decoder_f StationType_decode_ber;
der_type_encoder_f StationType_encode_der;
xer_type_decoder_f StationType_decode_xer;
xer_type_encoder_f StationType_encode_xer;
jer_type_encoder_f StationType_encode_jer;
oer_type_decoder_f StationType_decode_oer;
oer_type_encoder_f StationType_encode_oer;
per_type_decoder_f StationType_decode_uper;
per_type_encoder_f StationType_encode_uper;
per_type_decoder_f StationType_decode_aper;
per_type_encoder_f StationType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _StationType_H_ */
#include <asn_internal.h>

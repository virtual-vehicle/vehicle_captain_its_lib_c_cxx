/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_Temperature_H_
#define	_Temperature_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Temperature {
	Temperature_equalOrSmallerThanMinus60Deg	= -60,
	Temperature_oneDegreeCelsius	= 1,
	Temperature_equalOrGreaterThan67Deg	= 67
} e_Temperature;

/* Temperature */
typedef long	 Temperature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Temperature;
asn_struct_free_f Temperature_free;
asn_struct_print_f Temperature_print;
asn_constr_check_f Temperature_constraint;
ber_type_decoder_f Temperature_decode_ber;
der_type_encoder_f Temperature_encode_der;
xer_type_decoder_f Temperature_decode_xer;
xer_type_encoder_f Temperature_encode_xer;
jer_type_encoder_f Temperature_encode_jer;
oer_type_decoder_f Temperature_decode_oer;
oer_type_encoder_f Temperature_encode_oer;
per_type_decoder_f Temperature_decode_uper;
per_type_encoder_f Temperature_encode_uper;
per_type_decoder_f Temperature_decode_aper;
per_type_encoder_f Temperature_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Temperature_H_ */
#include <asn_internal.h>

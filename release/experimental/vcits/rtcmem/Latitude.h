/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#ifndef	_Latitude_H_
#define	_Latitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Latitude {
	Latitude_oneMicrodegreeNorth	= 10,
	Latitude_oneMicrodegreeSouth	= -10,
	Latitude_unavailable	= 900000001
} e_Latitude;

/* Latitude */
typedef long	 Latitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Latitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Latitude;
asn_struct_free_f Latitude_free;
asn_struct_print_f Latitude_print;
asn_constr_check_f Latitude_constraint;
ber_type_decoder_f Latitude_decode_ber;
der_type_encoder_f Latitude_encode_der;
xer_type_decoder_f Latitude_decode_xer;
xer_type_encoder_f Latitude_encode_xer;
jer_type_encoder_f Latitude_encode_jer;
oer_type_decoder_f Latitude_decode_oer;
oer_type_encoder_f Latitude_encode_oer;
per_type_decoder_f Latitude_decode_uper;
per_type_encoder_f Latitude_encode_uper;
per_type_decoder_f Latitude_decode_aper;
per_type_encoder_f Latitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Latitude_H_ */
#include <asn_internal.h>

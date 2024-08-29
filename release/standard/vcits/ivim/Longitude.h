/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_Longitude_H_
#define	_Longitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Longitude {
	Longitude_oneMicrodegreeEast	= 10,
	Longitude_oneMicrodegreeWest	= -10,
	Longitude_unavailable	= 1800000001
} e_Longitude;

/* Longitude */
typedef long	 Longitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Longitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Longitude;
asn_struct_free_f Longitude_free;
asn_struct_print_f Longitude_print;
asn_constr_check_f Longitude_constraint;
ber_type_decoder_f Longitude_decode_ber;
der_type_encoder_f Longitude_encode_der;
xer_type_decoder_f Longitude_decode_xer;
xer_type_encoder_f Longitude_encode_xer;
jer_type_encoder_f Longitude_encode_jer;
oer_type_decoder_f Longitude_decode_oer;
oer_type_encoder_f Longitude_encode_oer;
per_type_decoder_f Longitude_decode_uper;
per_type_encoder_f Longitude_encode_uper;
per_type_decoder_f Longitude_decode_aper;
per_type_encoder_f Longitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Longitude_H_ */
#include <asn_internal.h>

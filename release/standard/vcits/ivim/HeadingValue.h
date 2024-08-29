/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_HeadingValue_H_
#define	_HeadingValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HeadingValue {
	HeadingValue_wgs84North	= 0,
	HeadingValue_wgs84East	= 900,
	HeadingValue_wgs84South	= 1800,
	HeadingValue_wgs84West	= 2700,
	HeadingValue_unavailable	= 3601
} e_HeadingValue;

/* HeadingValue */
typedef long	 HeadingValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HeadingValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HeadingValue;
asn_struct_free_f HeadingValue_free;
asn_struct_print_f HeadingValue_print;
asn_constr_check_f HeadingValue_constraint;
ber_type_decoder_f HeadingValue_decode_ber;
der_type_encoder_f HeadingValue_encode_der;
xer_type_decoder_f HeadingValue_decode_xer;
xer_type_encoder_f HeadingValue_encode_xer;
jer_type_encoder_f HeadingValue_encode_jer;
oer_type_decoder_f HeadingValue_decode_oer;
oer_type_encoder_f HeadingValue_encode_oer;
per_type_decoder_f HeadingValue_decode_uper;
per_type_encoder_f HeadingValue_encode_uper;
per_type_decoder_f HeadingValue_decode_aper;
per_type_encoder_f HeadingValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HeadingValue_H_ */
#include <asn_internal.h>

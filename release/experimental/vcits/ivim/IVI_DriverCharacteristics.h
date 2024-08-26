/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_IVI_DriverCharacteristics_H_
#define	_IVI_DriverCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IVI_DriverCharacteristics {
	IVI_DriverCharacteristics_unexperiencedDrivers	= 0,
	IVI_DriverCharacteristics_experiencedDrivers	= 1,
	IVI_DriverCharacteristics_rfu1	= 2,
	IVI_DriverCharacteristics_rfu2	= 3
} e_IVI_DriverCharacteristics;

/* IVI_DriverCharacteristics */
typedef long	 IVI_DriverCharacteristics_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IVI_DriverCharacteristics_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IVI_DriverCharacteristics;
asn_struct_free_f IVI_DriverCharacteristics_free;
asn_struct_print_f IVI_DriverCharacteristics_print;
asn_constr_check_f IVI_DriverCharacteristics_constraint;
ber_type_decoder_f IVI_DriverCharacteristics_decode_ber;
der_type_encoder_f IVI_DriverCharacteristics_encode_der;
xer_type_decoder_f IVI_DriverCharacteristics_decode_xer;
xer_type_encoder_f IVI_DriverCharacteristics_encode_xer;
jer_type_encoder_f IVI_DriverCharacteristics_encode_jer;
oer_type_decoder_f IVI_DriverCharacteristics_decode_oer;
oer_type_encoder_f IVI_DriverCharacteristics_encode_oer;
per_type_decoder_f IVI_DriverCharacteristics_decode_uper;
per_type_encoder_f IVI_DriverCharacteristics_encode_uper;
per_type_decoder_f IVI_DriverCharacteristics_decode_aper;
per_type_encoder_f IVI_DriverCharacteristics_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _IVI_DriverCharacteristics_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#ifndef	_CurvatureCalculationMode_H_
#define	_CurvatureCalculationMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CurvatureCalculationMode {
	CurvatureCalculationMode_yawRateUsed	= 0,
	CurvatureCalculationMode_yawRateNotUsed	= 1,
	CurvatureCalculationMode_unavailable	= 2
	/*
	 * Enumeration is extensible
	 */
} e_CurvatureCalculationMode;

/* CurvatureCalculationMode */
typedef long	 CurvatureCalculationMode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CurvatureCalculationMode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CurvatureCalculationMode;
extern const asn_INTEGER_specifics_t asn_SPC_CurvatureCalculationMode_specs_1;
asn_struct_free_f CurvatureCalculationMode_free;
asn_struct_print_f CurvatureCalculationMode_print;
asn_constr_check_f CurvatureCalculationMode_constraint;
ber_type_decoder_f CurvatureCalculationMode_decode_ber;
der_type_encoder_f CurvatureCalculationMode_encode_der;
xer_type_decoder_f CurvatureCalculationMode_decode_xer;
xer_type_encoder_f CurvatureCalculationMode_encode_xer;
jer_type_encoder_f CurvatureCalculationMode_encode_jer;
oer_type_decoder_f CurvatureCalculationMode_decode_oer;
oer_type_encoder_f CurvatureCalculationMode_encode_oer;
per_type_decoder_f CurvatureCalculationMode_decode_uper;
per_type_encoder_f CurvatureCalculationMode_encode_uper;
per_type_decoder_f CurvatureCalculationMode_decode_aper;
per_type_encoder_f CurvatureCalculationMode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CurvatureCalculationMode_H_ */
#include <asn_internal.h>

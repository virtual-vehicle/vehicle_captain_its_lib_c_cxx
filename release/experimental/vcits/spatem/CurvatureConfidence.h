/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_CurvatureConfidence_H_
#define	_CurvatureConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CurvatureConfidence {
	CurvatureConfidence_onePerMeter_0_00002	= 0,
	CurvatureConfidence_onePerMeter_0_0001	= 1,
	CurvatureConfidence_onePerMeter_0_0005	= 2,
	CurvatureConfidence_onePerMeter_0_002	= 3,
	CurvatureConfidence_onePerMeter_0_01	= 4,
	CurvatureConfidence_onePerMeter_0_1	= 5,
	CurvatureConfidence_outOfRange	= 6,
	CurvatureConfidence_unavailable	= 7
} e_CurvatureConfidence;

/* CurvatureConfidence */
typedef long	 CurvatureConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CurvatureConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CurvatureConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_CurvatureConfidence_specs_1;
asn_struct_free_f CurvatureConfidence_free;
asn_struct_print_f CurvatureConfidence_print;
asn_constr_check_f CurvatureConfidence_constraint;
ber_type_decoder_f CurvatureConfidence_decode_ber;
der_type_encoder_f CurvatureConfidence_encode_der;
xer_type_decoder_f CurvatureConfidence_decode_xer;
xer_type_encoder_f CurvatureConfidence_encode_xer;
jer_type_encoder_f CurvatureConfidence_encode_jer;
oer_type_decoder_f CurvatureConfidence_decode_oer;
oer_type_encoder_f CurvatureConfidence_encode_oer;
per_type_decoder_f CurvatureConfidence_decode_uper;
per_type_encoder_f CurvatureConfidence_encode_uper;
per_type_decoder_f CurvatureConfidence_decode_aper;
per_type_encoder_f CurvatureConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CurvatureConfidence_H_ */
#include <asn_internal.h>

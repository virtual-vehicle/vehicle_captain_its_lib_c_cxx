/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_AdverseWeatherCondition_PrecipitationSubCauseCode_H_
#define	_AdverseWeatherCondition_PrecipitationSubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdverseWeatherCondition_PrecipitationSubCauseCode {
	AdverseWeatherCondition_PrecipitationSubCauseCode_unavailable	= 0,
	AdverseWeatherCondition_PrecipitationSubCauseCode_heavyRain	= 1,
	AdverseWeatherCondition_PrecipitationSubCauseCode_heavySnowfall	= 2,
	AdverseWeatherCondition_PrecipitationSubCauseCode_softHail	= 3
} e_AdverseWeatherCondition_PrecipitationSubCauseCode;

/* AdverseWeatherCondition-PrecipitationSubCauseCode */
typedef long	 AdverseWeatherCondition_PrecipitationSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AdverseWeatherCondition_PrecipitationSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AdverseWeatherCondition_PrecipitationSubCauseCode;
asn_struct_free_f AdverseWeatherCondition_PrecipitationSubCauseCode_free;
asn_struct_print_f AdverseWeatherCondition_PrecipitationSubCauseCode_print;
asn_constr_check_f AdverseWeatherCondition_PrecipitationSubCauseCode_constraint;
ber_type_decoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_decode_ber;
der_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_der;
xer_type_decoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_decode_xer;
xer_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_xer;
jer_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_jer;
oer_type_decoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_decode_oer;
oer_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_oer;
per_type_decoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_decode_uper;
per_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_uper;
per_type_decoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_decode_aper;
per_type_encoder_f AdverseWeatherCondition_PrecipitationSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AdverseWeatherCondition_PrecipitationSubCauseCode_H_ */
#include <asn_internal.h>

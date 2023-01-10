/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_AdverseWeatherCondition_VisibilitySubCauseCode_H_
#define	_AdverseWeatherCondition_VisibilitySubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdverseWeatherCondition_VisibilitySubCauseCode {
	AdverseWeatherCondition_VisibilitySubCauseCode_unavailable	= 0,
	AdverseWeatherCondition_VisibilitySubCauseCode_fog	= 1,
	AdverseWeatherCondition_VisibilitySubCauseCode_smoke	= 2,
	AdverseWeatherCondition_VisibilitySubCauseCode_heavySnowfall	= 3,
	AdverseWeatherCondition_VisibilitySubCauseCode_heavyRain	= 4,
	AdverseWeatherCondition_VisibilitySubCauseCode_heavyHail	= 5,
	AdverseWeatherCondition_VisibilitySubCauseCode_lowSunGlare	= 6,
	AdverseWeatherCondition_VisibilitySubCauseCode_sandstorms	= 7,
	AdverseWeatherCondition_VisibilitySubCauseCode_swarmsOfInsects	= 8
} e_AdverseWeatherCondition_VisibilitySubCauseCode;

/* AdverseWeatherCondition-VisibilitySubCauseCode */
typedef long	 AdverseWeatherCondition_VisibilitySubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdverseWeatherCondition_VisibilitySubCauseCode;
asn_struct_free_f AdverseWeatherCondition_VisibilitySubCauseCode_free;
asn_struct_print_f AdverseWeatherCondition_VisibilitySubCauseCode_print;
asn_constr_check_f AdverseWeatherCondition_VisibilitySubCauseCode_constraint;
ber_type_decoder_f AdverseWeatherCondition_VisibilitySubCauseCode_decode_ber;
der_type_encoder_f AdverseWeatherCondition_VisibilitySubCauseCode_encode_der;
xer_type_decoder_f AdverseWeatherCondition_VisibilitySubCauseCode_decode_xer;
xer_type_encoder_f AdverseWeatherCondition_VisibilitySubCauseCode_encode_xer;
oer_type_decoder_f AdverseWeatherCondition_VisibilitySubCauseCode_decode_oer;
oer_type_encoder_f AdverseWeatherCondition_VisibilitySubCauseCode_encode_oer;
per_type_decoder_f AdverseWeatherCondition_VisibilitySubCauseCode_decode_uper;
per_type_encoder_f AdverseWeatherCondition_VisibilitySubCauseCode_encode_uper;
per_type_decoder_f AdverseWeatherCondition_VisibilitySubCauseCode_decode_aper;
per_type_encoder_f AdverseWeatherCondition_VisibilitySubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AdverseWeatherCondition_VisibilitySubCauseCode_H_ */
#include <asn_internal.h>

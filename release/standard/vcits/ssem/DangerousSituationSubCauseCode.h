/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_DangerousSituationSubCauseCode_H_
#define	_DangerousSituationSubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DangerousSituationSubCauseCode {
	DangerousSituationSubCauseCode_unavailable	= 0,
	DangerousSituationSubCauseCode_emergencyElectronicBrakeEngaged	= 1,
	DangerousSituationSubCauseCode_preCrashSystemEngaged	= 2,
	DangerousSituationSubCauseCode_espEngaged	= 3,
	DangerousSituationSubCauseCode_absEngaged	= 4,
	DangerousSituationSubCauseCode_aebEngaged	= 5,
	DangerousSituationSubCauseCode_brakeWarningEngaged	= 6,
	DangerousSituationSubCauseCode_collisionRiskWarningEngaged	= 7
} e_DangerousSituationSubCauseCode;

/* DangerousSituationSubCauseCode */
typedef long	 DangerousSituationSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousSituationSubCauseCode;
asn_struct_free_f DangerousSituationSubCauseCode_free;
asn_struct_print_f DangerousSituationSubCauseCode_print;
asn_constr_check_f DangerousSituationSubCauseCode_constraint;
ber_type_decoder_f DangerousSituationSubCauseCode_decode_ber;
der_type_encoder_f DangerousSituationSubCauseCode_encode_der;
xer_type_decoder_f DangerousSituationSubCauseCode_decode_xer;
xer_type_encoder_f DangerousSituationSubCauseCode_encode_xer;
jer_type_encoder_f DangerousSituationSubCauseCode_encode_jer;
oer_type_decoder_f DangerousSituationSubCauseCode_decode_oer;
oer_type_encoder_f DangerousSituationSubCauseCode_encode_oer;
per_type_decoder_f DangerousSituationSubCauseCode_decode_uper;
per_type_encoder_f DangerousSituationSubCauseCode_encode_uper;
per_type_decoder_f DangerousSituationSubCauseCode_decode_aper;
per_type_encoder_f DangerousSituationSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DangerousSituationSubCauseCode_H_ */
#include <asn_internal.h>

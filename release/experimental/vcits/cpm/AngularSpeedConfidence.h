/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_AngularSpeedConfidence_H_
#define	_AngularSpeedConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AngularSpeedConfidence {
	AngularSpeedConfidence_degSec_01	= 0,
	AngularSpeedConfidence_degSec_02	= 1,
	AngularSpeedConfidence_degSec_05	= 2,
	AngularSpeedConfidence_degSec_10	= 3,
	AngularSpeedConfidence_degSec_20	= 4,
	AngularSpeedConfidence_degSec_50	= 5,
	AngularSpeedConfidence_outOfRange	= 6,
	AngularSpeedConfidence_unavailable	= 7
} e_AngularSpeedConfidence;

/* AngularSpeedConfidence */
typedef long	 AngularSpeedConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AngularSpeedConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AngularSpeedConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_AngularSpeedConfidence_specs_1;
asn_struct_free_f AngularSpeedConfidence_free;
asn_struct_print_f AngularSpeedConfidence_print;
asn_constr_check_f AngularSpeedConfidence_constraint;
ber_type_decoder_f AngularSpeedConfidence_decode_ber;
der_type_encoder_f AngularSpeedConfidence_encode_der;
xer_type_decoder_f AngularSpeedConfidence_decode_xer;
xer_type_encoder_f AngularSpeedConfidence_encode_xer;
jer_type_encoder_f AngularSpeedConfidence_encode_jer;
oer_type_decoder_f AngularSpeedConfidence_decode_oer;
oer_type_encoder_f AngularSpeedConfidence_encode_oer;
per_type_decoder_f AngularSpeedConfidence_decode_uper;
per_type_encoder_f AngularSpeedConfidence_encode_uper;
per_type_decoder_f AngularSpeedConfidence_decode_aper;
per_type_encoder_f AngularSpeedConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AngularSpeedConfidence_H_ */
#include <asn_internal.h>

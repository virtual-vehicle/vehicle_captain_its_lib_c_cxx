/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VruEnvironment_H_
#define	_VruEnvironment_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VruEnvironment {
	VruEnvironment_unavailable	= 0,
	VruEnvironment_intersectionCrossing	= 1,
	VruEnvironment_zebraCrossing	= 2,
	VruEnvironment_sidewalk	= 3,
	VruEnvironment_onVehicleRoad	= 4,
	VruEnvironment_protectedGeographicArea	= 5,
	VruEnvironment_max	= 255
} e_VruEnvironment;

/* VruEnvironment */
typedef long	 VruEnvironment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VruEnvironment;
asn_struct_free_f VruEnvironment_free;
asn_struct_print_f VruEnvironment_print;
asn_constr_check_f VruEnvironment_constraint;
ber_type_decoder_f VruEnvironment_decode_ber;
der_type_encoder_f VruEnvironment_encode_der;
xer_type_decoder_f VruEnvironment_decode_xer;
xer_type_encoder_f VruEnvironment_encode_xer;
jer_type_encoder_f VruEnvironment_encode_jer;
oer_type_decoder_f VruEnvironment_decode_oer;
oer_type_encoder_f VruEnvironment_encode_oer;
per_type_decoder_f VruEnvironment_decode_uper;
per_type_encoder_f VruEnvironment_encode_uper;
per_type_decoder_f VruEnvironment_decode_aper;
per_type_encoder_f VruEnvironment_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VruEnvironment_H_ */
#include <asn_internal.h>

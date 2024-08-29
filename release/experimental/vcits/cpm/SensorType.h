/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SensorType_H_
#define	_SensorType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SensorType {
	SensorType_undefined	= 0,
	SensorType_radar	= 1,
	SensorType_lidar	= 2,
	SensorType_monovideo	= 3,
	SensorType_stereovision	= 4,
	SensorType_nightvision	= 5,
	SensorType_ultrasonic	= 6,
	SensorType_pmd	= 7,
	SensorType_inductionLoop	= 8,
	SensorType_sphericalCamera	= 9,
	SensorType_uwb	= 10,
	SensorType_acoustic	= 11,
	SensorType_localAggregation	= 12,
	SensorType_itsAggregation	= 13
} e_SensorType;

/* SensorType */
typedef long	 SensorType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SensorType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SensorType;
asn_struct_free_f SensorType_free;
asn_struct_print_f SensorType_print;
asn_constr_check_f SensorType_constraint;
ber_type_decoder_f SensorType_decode_ber;
der_type_encoder_f SensorType_encode_der;
xer_type_decoder_f SensorType_decode_xer;
xer_type_encoder_f SensorType_encode_xer;
jer_type_encoder_f SensorType_encode_jer;
oer_type_decoder_f SensorType_decode_oer;
oer_type_encoder_f SensorType_encode_oer;
per_type_decoder_f SensorType_decode_uper;
per_type_encoder_f SensorType_encode_uper;
per_type_decoder_f SensorType_decode_aper;
per_type_encoder_f SensorType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SensorType_H_ */
#include <asn_internal.h>

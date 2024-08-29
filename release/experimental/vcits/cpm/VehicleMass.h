/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VehicleMass_H_
#define	_VehicleMass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleMass {
	VehicleMass_outOfRange	= 1023,
	VehicleMass_unavailable	= 1024
} e_VehicleMass;

/* VehicleMass */
typedef long	 VehicleMass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleMass;
asn_struct_free_f VehicleMass_free;
asn_struct_print_f VehicleMass_print;
asn_constr_check_f VehicleMass_constraint;
ber_type_decoder_f VehicleMass_decode_ber;
der_type_encoder_f VehicleMass_encode_der;
xer_type_decoder_f VehicleMass_decode_xer;
xer_type_encoder_f VehicleMass_encode_xer;
jer_type_encoder_f VehicleMass_encode_jer;
oer_type_decoder_f VehicleMass_decode_oer;
oer_type_encoder_f VehicleMass_encode_oer;
per_type_decoder_f VehicleMass_decode_uper;
per_type_encoder_f VehicleMass_encode_uper;
per_type_decoder_f VehicleMass_decode_aper;
per_type_encoder_f VehicleMass_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleMass_H_ */
#include <asn_internal.h>

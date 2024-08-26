/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_VehicleLicencePlateNumber_H_
#define	_VehicleLicencePlateNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPN.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleLicencePlateNumber */
typedef LPN_t	 VehicleLicencePlateNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleLicencePlateNumber;
asn_struct_free_f VehicleLicencePlateNumber_free;
asn_struct_print_f VehicleLicencePlateNumber_print;
asn_constr_check_f VehicleLicencePlateNumber_constraint;
ber_type_decoder_f VehicleLicencePlateNumber_decode_ber;
der_type_encoder_f VehicleLicencePlateNumber_encode_der;
xer_type_decoder_f VehicleLicencePlateNumber_decode_xer;
xer_type_encoder_f VehicleLicencePlateNumber_encode_xer;
jer_type_encoder_f VehicleLicencePlateNumber_encode_jer;
oer_type_decoder_f VehicleLicencePlateNumber_decode_oer;
oer_type_encoder_f VehicleLicencePlateNumber_encode_oer;
per_type_decoder_f VehicleLicencePlateNumber_decode_uper;
per_type_encoder_f VehicleLicencePlateNumber_encode_uper;
per_type_decoder_f VehicleLicencePlateNumber_decode_aper;
per_type_encoder_f VehicleLicencePlateNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleLicencePlateNumber_H_ */
#include <asn_internal.h>

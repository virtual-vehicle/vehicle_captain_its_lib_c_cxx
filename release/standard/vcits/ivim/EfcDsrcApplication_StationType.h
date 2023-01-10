/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_EfcDsrcApplication_StationType_H_
#define	_EfcDsrcApplication_StationType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EfcDsrcApplication_StationType {
	EfcDsrcApplication_StationType_unspecified	= 0,
	EfcDsrcApplication_StationType_closedEntryWithPayment	= 1,
	EfcDsrcApplication_StationType_closedEntryWithoutPayment	= 2,
	EfcDsrcApplication_StationType_closedTransit	= 3,
	EfcDsrcApplication_StationType_closedExit	= 4,
	EfcDsrcApplication_StationType_closedCredit	= 5,
	EfcDsrcApplication_StationType_mixed	= 6,
	EfcDsrcApplication_StationType_passage	= 7,
	EfcDsrcApplication_StationType_checkpoint	= 8,
	EfcDsrcApplication_StationType_reload	= 9,
	EfcDsrcApplication_StationType_reservedForFutureCENUse1	= 10,
	EfcDsrcApplication_StationType_reservedForFutureCENUse2	= 11,
	EfcDsrcApplication_StationType_reservedForFutureCENUse3	= 12,
	EfcDsrcApplication_StationType_reservedForFutureCENUse4	= 13,
	EfcDsrcApplication_StationType_privateUse5	= 14,
	EfcDsrcApplication_StationType_privateUse6	= 15
} e_EfcDsrcApplication_StationType;

/* EfcDsrcApplication_StationType */
typedef long	 EfcDsrcApplication_StationType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EfcDsrcApplication_StationType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EfcDsrcApplication_StationType;
extern const asn_INTEGER_specifics_t asn_SPC_EfcDsrcApplication_StationType_specs_1;
asn_struct_free_f EfcDsrcApplication_StationType_free;
asn_struct_print_f EfcDsrcApplication_StationType_print;
asn_constr_check_f EfcDsrcApplication_StationType_constraint;
ber_type_decoder_f EfcDsrcApplication_StationType_decode_ber;
der_type_encoder_f EfcDsrcApplication_StationType_encode_der;
xer_type_decoder_f EfcDsrcApplication_StationType_decode_xer;
xer_type_encoder_f EfcDsrcApplication_StationType_encode_xer;
oer_type_decoder_f EfcDsrcApplication_StationType_decode_oer;
oer_type_encoder_f EfcDsrcApplication_StationType_encode_oer;
per_type_decoder_f EfcDsrcApplication_StationType_decode_uper;
per_type_encoder_f EfcDsrcApplication_StationType_encode_uper;
per_type_decoder_f EfcDsrcApplication_StationType_decode_aper;
per_type_encoder_f EfcDsrcApplication_StationType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EfcDsrcApplication_StationType_H_ */
#include <asn_internal.h>
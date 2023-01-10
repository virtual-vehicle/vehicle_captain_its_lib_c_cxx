/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#ifndef	_PriorityRequestType_H_
#define	_PriorityRequestType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PriorityRequestType {
	PriorityRequestType_priorityRequestTypeReserved	= 0,
	PriorityRequestType_priorityRequest	= 1,
	PriorityRequestType_priorityRequestUpdate	= 2,
	PriorityRequestType_priorityCancellation	= 3
	/*
	 * Enumeration is extensible
	 */
} e_PriorityRequestType;

/* PriorityRequestType */
typedef long	 PriorityRequestType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PriorityRequestType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PriorityRequestType;
extern const asn_INTEGER_specifics_t asn_SPC_PriorityRequestType_specs_1;
asn_struct_free_f PriorityRequestType_free;
asn_struct_print_f PriorityRequestType_print;
asn_constr_check_f PriorityRequestType_constraint;
ber_type_decoder_f PriorityRequestType_decode_ber;
der_type_encoder_f PriorityRequestType_encode_der;
xer_type_decoder_f PriorityRequestType_decode_xer;
xer_type_encoder_f PriorityRequestType_encode_xer;
oer_type_decoder_f PriorityRequestType_decode_oer;
oer_type_encoder_f PriorityRequestType_encode_oer;
per_type_decoder_f PriorityRequestType_decode_uper;
per_type_encoder_f PriorityRequestType_encode_uper;
per_type_decoder_f PriorityRequestType_decode_aper;
per_type_encoder_f PriorityRequestType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PriorityRequestType_H_ */
#include <asn_internal.h>

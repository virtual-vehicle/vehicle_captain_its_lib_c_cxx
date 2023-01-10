/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_AlphabetIndicator_H_
#define	_AlphabetIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AlphabetIndicator {
	AlphabetIndicator_latinAlphabetNo1	= 0,
	AlphabetIndicator_latinAlphabetNo2	= 1,
	AlphabetIndicator_latinAlphabetNo3	= 2,
	AlphabetIndicator_latinAlphabetNo4	= 3,
	AlphabetIndicator_latinCyrillicAlphabet	= 4,
	AlphabetIndicator_latinArabicAlphabet	= 5,
	AlphabetIndicator_latinGreekAlphabet	= 6,
	AlphabetIndicator_latinHebrewAlphabet	= 7,
	AlphabetIndicator_latinAlphabetNo5	= 8,
	AlphabetIndicator_latinAlphabetNo6	= 9,
	AlphabetIndicator_twoOctetBMP	= 10,
	AlphabetIndicator_fourOctetCanonical	= 11
} e_AlphabetIndicator;

/* AlphabetIndicator */
typedef long	 AlphabetIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AlphabetIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AlphabetIndicator;
asn_struct_free_f AlphabetIndicator_free;
asn_struct_print_f AlphabetIndicator_print;
asn_constr_check_f AlphabetIndicator_constraint;
ber_type_decoder_f AlphabetIndicator_decode_ber;
der_type_encoder_f AlphabetIndicator_encode_der;
xer_type_decoder_f AlphabetIndicator_decode_xer;
xer_type_encoder_f AlphabetIndicator_encode_xer;
oer_type_decoder_f AlphabetIndicator_decode_oer;
oer_type_encoder_f AlphabetIndicator_encode_oer;
per_type_decoder_f AlphabetIndicator_decode_uper;
per_type_encoder_f AlphabetIndicator_encode_uper;
per_type_decoder_f AlphabetIndicator_decode_aper;
per_type_encoder_f AlphabetIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AlphabetIndicator_H_ */
#include <asn_internal.h>

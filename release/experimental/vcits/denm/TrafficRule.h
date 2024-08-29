/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/denm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=DENM`
 */

#ifndef	_TrafficRule_H_
#define	_TrafficRule_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficRule {
	TrafficRule_noPassing	= 0,
	TrafficRule_noPassingForTrucks	= 1,
	TrafficRule_passToRight	= 2,
	TrafficRule_passToLeft	= 3
	/*
	 * Enumeration is extensible
	 */
} e_TrafficRule;

/* TrafficRule */
typedef long	 TrafficRule_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrafficRule_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrafficRule;
extern const asn_INTEGER_specifics_t asn_SPC_TrafficRule_specs_1;
asn_struct_free_f TrafficRule_free;
asn_struct_print_f TrafficRule_print;
asn_constr_check_f TrafficRule_constraint;
ber_type_decoder_f TrafficRule_decode_ber;
der_type_encoder_f TrafficRule_encode_der;
xer_type_decoder_f TrafficRule_decode_xer;
xer_type_encoder_f TrafficRule_encode_xer;
jer_type_encoder_f TrafficRule_encode_jer;
oer_type_decoder_f TrafficRule_decode_oer;
oer_type_encoder_f TrafficRule_encode_oer;
per_type_decoder_f TrafficRule_decode_uper;
per_type_encoder_f TrafficRule_encode_uper;
per_type_decoder_f TrafficRule_decode_aper;
per_type_encoder_f TrafficRule_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficRule_H_ */
#include <asn_internal.h>

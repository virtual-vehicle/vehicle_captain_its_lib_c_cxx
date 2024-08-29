/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MessageId_H_
#define	_MessageId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MessageId {
	MessageId_denm	= 1,
	MessageId_cam	= 2,
	MessageId_poi	= 3,
	MessageId_spatem	= 4,
	MessageId_mapem	= 5,
	MessageId_ivim	= 6,
	MessageId_ev_rsr	= 7,
	MessageId_tistpgtransaction	= 8,
	MessageId_srem	= 9,
	MessageId_ssem	= 10,
	MessageId_evcsn	= 11,
	MessageId_saem	= 12,
	MessageId_rtcmem	= 13,
	MessageId_cpm	= 14,
	MessageId_imzm	= 15,
	MessageId_vam	= 16,
	MessageId_dsm	= 17,
	MessageId_pcim	= 18,
	MessageId_pcvm	= 19,
	MessageId_mcm	= 20,
	MessageId_pam	= 21
} e_MessageId;

/* MessageId */
typedef long	 MessageId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MessageId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MessageId;
asn_struct_free_f MessageId_free;
asn_struct_print_f MessageId_print;
asn_constr_check_f MessageId_constraint;
ber_type_decoder_f MessageId_decode_ber;
der_type_encoder_f MessageId_encode_der;
xer_type_decoder_f MessageId_decode_xer;
xer_type_encoder_f MessageId_encode_xer;
jer_type_encoder_f MessageId_encode_jer;
oer_type_decoder_f MessageId_decode_oer;
oer_type_encoder_f MessageId_encode_oer;
per_type_decoder_f MessageId_decode_uper;
per_type_encoder_f MessageId_encode_uper;
per_type_decoder_f MessageId_decode_aper;
per_type_encoder_f MessageId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageId_H_ */
#include <asn_internal.h>

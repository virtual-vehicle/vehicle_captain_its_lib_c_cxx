/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_DSRCmsgID_H_
#define	_DSRCmsgID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DSRCmsgID */
typedef long	 DSRCmsgID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DSRCmsgID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DSRCmsgID;
asn_struct_free_f DSRCmsgID_free;
asn_struct_print_f DSRCmsgID_print;
asn_constr_check_f DSRCmsgID_constraint;
ber_type_decoder_f DSRCmsgID_decode_ber;
der_type_encoder_f DSRCmsgID_encode_der;
xer_type_decoder_f DSRCmsgID_decode_xer;
xer_type_encoder_f DSRCmsgID_encode_xer;
jer_type_encoder_f DSRCmsgID_encode_jer;
oer_type_decoder_f DSRCmsgID_decode_oer;
oer_type_encoder_f DSRCmsgID_encode_oer;
per_type_decoder_f DSRCmsgID_decode_uper;
per_type_encoder_f DSRCmsgID_encode_uper;
per_type_decoder_f DSRCmsgID_decode_aper;
per_type_encoder_f DSRCmsgID_encode_aper;
#define DSRCmsgID_mapData	((DSRCmsgID_t)18)
#define DSRCmsgID_rtcmCorrections	((DSRCmsgID_t)28)
#define DSRCmsgID_signalPhaseAndTimingMessage	((DSRCmsgID_t)19)
#define DSRCmsgID_signalRequestMessage	((DSRCmsgID_t)29)
#define DSRCmsgID_signalStatusMessage	((DSRCmsgID_t)30)

#ifdef __cplusplus
}
#endif

#endif	/* _DSRCmsgID_H_ */
#include <asn_internal.h>

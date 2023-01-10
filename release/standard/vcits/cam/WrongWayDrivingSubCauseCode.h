/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#ifndef	_WrongWayDrivingSubCauseCode_H_
#define	_WrongWayDrivingSubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WrongWayDrivingSubCauseCode {
	WrongWayDrivingSubCauseCode_unavailable	= 0,
	WrongWayDrivingSubCauseCode_wrongLane	= 1,
	WrongWayDrivingSubCauseCode_wrongDirection	= 2
} e_WrongWayDrivingSubCauseCode;

/* WrongWayDrivingSubCauseCode */
typedef long	 WrongWayDrivingSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WrongWayDrivingSubCauseCode;
asn_struct_free_f WrongWayDrivingSubCauseCode_free;
asn_struct_print_f WrongWayDrivingSubCauseCode_print;
asn_constr_check_f WrongWayDrivingSubCauseCode_constraint;
ber_type_decoder_f WrongWayDrivingSubCauseCode_decode_ber;
der_type_encoder_f WrongWayDrivingSubCauseCode_encode_der;
xer_type_decoder_f WrongWayDrivingSubCauseCode_decode_xer;
xer_type_encoder_f WrongWayDrivingSubCauseCode_encode_xer;
oer_type_decoder_f WrongWayDrivingSubCauseCode_decode_oer;
oer_type_encoder_f WrongWayDrivingSubCauseCode_encode_oer;
per_type_decoder_f WrongWayDrivingSubCauseCode_decode_uper;
per_type_encoder_f WrongWayDrivingSubCauseCode_encode_uper;
per_type_decoder_f WrongWayDrivingSubCauseCode_decode_aper;
per_type_encoder_f WrongWayDrivingSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _WrongWayDrivingSubCauseCode_H_ */
#include <asn_internal.h>

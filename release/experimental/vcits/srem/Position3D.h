/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_Position3D_H_
#define	_Position3D_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Reg_Position3D;

/* Position3D */
typedef struct Position3D {
	Latitude_t	 lat;
	Longitude_t	 Long;
	Elevation_t	*elevation;	/* OPTIONAL */
	struct Position3D__regional {
		A_SEQUENCE_OF(struct Reg_Position3D) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Position3D_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Position3D;
extern asn_SEQUENCE_specifics_t asn_SPC_Position3D_specs_1;
extern asn_TYPE_member_t asn_MBR_Position3D_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Position3D_H_ */
#include <asn_internal.h>
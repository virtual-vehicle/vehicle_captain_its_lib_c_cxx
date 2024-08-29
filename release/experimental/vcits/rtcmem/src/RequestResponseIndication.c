/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#include "RequestResponseIndication.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_RequestResponseIndication_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_RequestResponseIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_RequestResponseIndication_value2enum_1[] = {
	{ 0,	7,	"request" },
	{ 1,	8,	"response" }
};
static const unsigned int asn_MAP_RequestResponseIndication_enum2value_1[] = {
	0,	/* request(0) */
	1	/* response(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_RequestResponseIndication_specs_1 = {
	asn_MAP_RequestResponseIndication_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RequestResponseIndication_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RequestResponseIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RequestResponseIndication = {
	"RequestResponseIndication",
	"RequestResponseIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_RequestResponseIndication_tags_1,
	sizeof(asn_DEF_RequestResponseIndication_tags_1)
		/sizeof(asn_DEF_RequestResponseIndication_tags_1[0]), /* 1 */
	asn_DEF_RequestResponseIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_RequestResponseIndication_tags_1)
		/sizeof(asn_DEF_RequestResponseIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_RequestResponseIndication_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RequestResponseIndication_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RequestResponseIndication_specs_1	/* Additional specs */
};


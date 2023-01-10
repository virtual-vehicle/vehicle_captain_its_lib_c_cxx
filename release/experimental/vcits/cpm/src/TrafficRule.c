/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#include "TrafficRule.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TrafficRule_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TrafficRule_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TrafficRule_value2enum_1[] = {
	{ 0,	9,	"noPassing" },
	{ 1,	18,	"noPassingForTrucks" },
	{ 2,	11,	"passToRight" },
	{ 3,	10,	"passToLeft" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_TrafficRule_enum2value_1[] = {
	0,	/* noPassing(0) */
	1,	/* noPassingForTrucks(1) */
	3,	/* passToLeft(3) */
	2	/* passToRight(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_TrafficRule_specs_1 = {
	asn_MAP_TrafficRule_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TrafficRule_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TrafficRule_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TrafficRule = {
	"TrafficRule",
	"TrafficRule",
	&asn_OP_NativeEnumerated,
	asn_DEF_TrafficRule_tags_1,
	sizeof(asn_DEF_TrafficRule_tags_1)
		/sizeof(asn_DEF_TrafficRule_tags_1[0]), /* 1 */
	asn_DEF_TrafficRule_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficRule_tags_1)
		/sizeof(asn_DEF_TrafficRule_tags_1[0]), /* 1 */
	{ &asn_OER_type_TrafficRule_constr_1, &asn_PER_type_TrafficRule_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TrafficRule_specs_1	/* Additional specs */
};


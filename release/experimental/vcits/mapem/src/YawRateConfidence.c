/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#include "YawRateConfidence.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_YawRateConfidence_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_YawRateConfidence_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_YawRateConfidence_value2enum_1[] = {
	{ 0,	13,	"degSec-000-01" },
	{ 1,	13,	"degSec-000-05" },
	{ 2,	13,	"degSec-000-10" },
	{ 3,	13,	"degSec-001-00" },
	{ 4,	13,	"degSec-005-00" },
	{ 5,	13,	"degSec-010-00" },
	{ 6,	13,	"degSec-100-00" },
	{ 7,	10,	"outOfRange" },
	{ 8,	11,	"unavailable" }
};
static const unsigned int asn_MAP_YawRateConfidence_enum2value_1[] = {
	0,	/* degSec-000-01(0) */
	1,	/* degSec-000-05(1) */
	2,	/* degSec-000-10(2) */
	3,	/* degSec-001-00(3) */
	4,	/* degSec-005-00(4) */
	5,	/* degSec-010-00(5) */
	6,	/* degSec-100-00(6) */
	7,	/* outOfRange(7) */
	8	/* unavailable(8) */
};
const asn_INTEGER_specifics_t asn_SPC_YawRateConfidence_specs_1 = {
	asn_MAP_YawRateConfidence_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_YawRateConfidence_enum2value_1,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_YawRateConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_YawRateConfidence = {
	"YawRateConfidence",
	"YawRateConfidence",
	&asn_OP_NativeEnumerated,
	asn_DEF_YawRateConfidence_tags_1,
	sizeof(asn_DEF_YawRateConfidence_tags_1)
		/sizeof(asn_DEF_YawRateConfidence_tags_1[0]), /* 1 */
	asn_DEF_YawRateConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_YawRateConfidence_tags_1)
		/sizeof(asn_DEF_YawRateConfidence_tags_1[0]), /* 1 */
	{ &asn_OER_type_YawRateConfidence_constr_1, &asn_PER_type_YawRateConfidence_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_YawRateConfidence_specs_1	/* Additional specs */
};


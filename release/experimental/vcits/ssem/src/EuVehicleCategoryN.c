/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ElectronicRegistrationIdentificationVehicleDataModule"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#include "EuVehicleCategoryN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_EuVehicleCategoryN_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EuVehicleCategoryN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_EuVehicleCategoryN_value2enum_1[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" }
};
static const unsigned int asn_MAP_EuVehicleCategoryN_enum2value_1[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2	/* n3(2) */
};
const asn_INTEGER_specifics_t asn_SPC_EuVehicleCategoryN_specs_1 = {
	asn_MAP_EuVehicleCategoryN_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EuVehicleCategoryN_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EuVehicleCategoryN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EuVehicleCategoryN = {
	"EuVehicleCategoryN",
	"EuVehicleCategoryN",
	&asn_OP_NativeEnumerated,
	asn_DEF_EuVehicleCategoryN_tags_1,
	sizeof(asn_DEF_EuVehicleCategoryN_tags_1)
		/sizeof(asn_DEF_EuVehicleCategoryN_tags_1[0]), /* 1 */
	asn_DEF_EuVehicleCategoryN_tags_1,	/* Same as above */
	sizeof(asn_DEF_EuVehicleCategoryN_tags_1)
		/sizeof(asn_DEF_EuVehicleCategoryN_tags_1[0]), /* 1 */
	{ &asn_OER_type_EuVehicleCategoryN_constr_1, &asn_PER_type_EuVehicleCategoryN_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EuVehicleCategoryN_specs_1	/* Additional specs */
};


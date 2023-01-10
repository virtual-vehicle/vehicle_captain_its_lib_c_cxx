/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/experimental/CPM-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#include "VehicleSensorPropertyList.h"

#include "VehicleSensorProperties.h"
static asn_oer_constraints_t asn_OER_type_VehicleSensorPropertyList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..10)) */};
asn_per_constraints_t asn_PER_type_VehicleSensorPropertyList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_VehicleSensorPropertyList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VehicleSensorProperties,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_VehicleSensorPropertyList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_VehicleSensorPropertyList_specs_1 = {
	sizeof(struct VehicleSensorPropertyList),
	offsetof(struct VehicleSensorPropertyList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_VehicleSensorPropertyList = {
	"VehicleSensorPropertyList",
	"VehicleSensorPropertyList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_VehicleSensorPropertyList_tags_1,
	sizeof(asn_DEF_VehicleSensorPropertyList_tags_1)
		/sizeof(asn_DEF_VehicleSensorPropertyList_tags_1[0]), /* 1 */
	asn_DEF_VehicleSensorPropertyList_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleSensorPropertyList_tags_1)
		/sizeof(asn_DEF_VehicleSensorPropertyList_tags_1[0]), /* 1 */
	{ &asn_OER_type_VehicleSensorPropertyList_constr_1, &asn_PER_type_VehicleSensorPropertyList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_VehicleSensorPropertyList_1,
	1,	/* Single element */
	&asn_SPC_VehicleSensorPropertyList_specs_1	/* Additional specs */
};


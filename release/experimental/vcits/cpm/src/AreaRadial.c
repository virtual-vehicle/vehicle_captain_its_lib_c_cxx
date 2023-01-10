/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/experimental/CPM-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#include "AreaRadial.h"

#include "OffsetPoint.h"
asn_TYPE_member_t asn_MBR_AreaRadial_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AreaRadial, range),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"range"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AreaRadial, stationaryHorizontalOpeningAngleStart),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WGS84AngleValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stationaryHorizontalOpeningAngleStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AreaRadial, stationaryHorizontalOpeningAngleEnd),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WGS84AngleValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stationaryHorizontalOpeningAngleEnd"
		},
	{ ATF_POINTER, 4, offsetof(struct AreaRadial, verticalOpeningAngleStart),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngleValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"verticalOpeningAngleStart"
		},
	{ ATF_POINTER, 3, offsetof(struct AreaRadial, verticalOpeningAngleEnd),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngleValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"verticalOpeningAngleEnd"
		},
	{ ATF_POINTER, 2, offsetof(struct AreaRadial, sensorPositionOffset),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorPositionOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct AreaRadial, sensorHeight),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SensorHeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorHeight"
		},
};
static const int asn_MAP_AreaRadial_oms_1[] = { 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_AreaRadial_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AreaRadial_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* range */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stationaryHorizontalOpeningAngleStart */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* stationaryHorizontalOpeningAngleEnd */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* verticalOpeningAngleStart */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* verticalOpeningAngleEnd */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sensorPositionOffset */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* sensorHeight */
};
asn_SEQUENCE_specifics_t asn_SPC_AreaRadial_specs_1 = {
	sizeof(struct AreaRadial),
	offsetof(struct AreaRadial, _asn_ctx),
	asn_MAP_AreaRadial_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_AreaRadial_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AreaRadial = {
	"AreaRadial",
	"AreaRadial",
	&asn_OP_SEQUENCE,
	asn_DEF_AreaRadial_tags_1,
	sizeof(asn_DEF_AreaRadial_tags_1)
		/sizeof(asn_DEF_AreaRadial_tags_1[0]), /* 1 */
	asn_DEF_AreaRadial_tags_1,	/* Same as above */
	sizeof(asn_DEF_AreaRadial_tags_1)
		/sizeof(asn_DEF_AreaRadial_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AreaRadial_1,
	7,	/* Elements count */
	&asn_SPC_AreaRadial_specs_1	/* Additional specs */
};

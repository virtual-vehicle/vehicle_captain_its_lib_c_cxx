/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "AutomatedVehicleRule.h"

#include "RoadSignCodes.h"
#include "ConstraintTextLines2.h"
asn_TYPE_member_t asn_MBR_AutomatedVehicleRule_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AutomatedVehicleRule, priority),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AutomatedVehicleRule, allowedSaeAutomationLevels),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SaeAutomationLevels,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedSaeAutomationLevels"
		},
	{ ATF_POINTER, 7, offsetof(struct AutomatedVehicleRule, minGapBetweenVehicles),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GapBetweenVehicles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minGapBetweenVehicles"
		},
	{ ATF_POINTER, 6, offsetof(struct AutomatedVehicleRule, recGapBetweenVehicles),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GapBetweenVehicles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recGapBetweenVehicles"
		},
	{ ATF_POINTER, 5, offsetof(struct AutomatedVehicleRule, automatedVehicleMaxSpeedLimit),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"automatedVehicleMaxSpeedLimit"
		},
	{ ATF_POINTER, 4, offsetof(struct AutomatedVehicleRule, automatedVehicleMinSpeedLimit),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"automatedVehicleMinSpeedLimit"
		},
	{ ATF_POINTER, 3, offsetof(struct AutomatedVehicleRule, automatedVehicleSpeedRecommendation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"automatedVehicleSpeedRecommendation"
		},
	{ ATF_POINTER, 2, offsetof(struct AutomatedVehicleRule, roadSignCodes),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSignCodes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"roadSignCodes"
		},
	{ ATF_POINTER, 1, offsetof(struct AutomatedVehicleRule, extraText),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstraintTextLines2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extraText"
		},
};
static const int asn_MAP_AutomatedVehicleRule_oms_1[] = { 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_AutomatedVehicleRule_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AutomatedVehicleRule_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priority */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedSaeAutomationLevels */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* minGapBetweenVehicles */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* recGapBetweenVehicles */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* automatedVehicleMaxSpeedLimit */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* automatedVehicleMinSpeedLimit */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* automatedVehicleSpeedRecommendation */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* roadSignCodes */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* extraText */
};
asn_SEQUENCE_specifics_t asn_SPC_AutomatedVehicleRule_specs_1 = {
	sizeof(struct AutomatedVehicleRule),
	offsetof(struct AutomatedVehicleRule, _asn_ctx),
	asn_MAP_AutomatedVehicleRule_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_AutomatedVehicleRule_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AutomatedVehicleRule = {
	"AutomatedVehicleRule",
	"AutomatedVehicleRule",
	&asn_OP_SEQUENCE,
	asn_DEF_AutomatedVehicleRule_tags_1,
	sizeof(asn_DEF_AutomatedVehicleRule_tags_1)
		/sizeof(asn_DEF_AutomatedVehicleRule_tags_1[0]), /* 1 */
	asn_DEF_AutomatedVehicleRule_tags_1,	/* Same as above */
	sizeof(asn_DEF_AutomatedVehicleRule_tags_1)
		/sizeof(asn_DEF_AutomatedVehicleRule_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AutomatedVehicleRule_1,
	9,	/* Elements count */
	&asn_SPC_AutomatedVehicleRule_specs_1	/* Additional specs */
};

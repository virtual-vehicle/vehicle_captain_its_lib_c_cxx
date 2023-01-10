/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cam_en302637_2/CAM-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#include "CAM.h"

static asn_TYPE_member_t asn_MBR_CAM_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CAM, header),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ItsPduHeader,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"header"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CAM, cam),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CoopAwareness,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cam"
		},
};
static const ber_tlv_tag_t asn_DEF_CAM_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CAM_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* header */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cam */
};
static asn_SEQUENCE_specifics_t asn_SPC_CAM_specs_1 = {
	sizeof(struct CAM),
	offsetof(struct CAM, _asn_ctx),
	asn_MAP_CAM_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CAM = {
	"CAM",
	"CAM",
	&asn_OP_SEQUENCE,
	asn_DEF_CAM_tags_1,
	sizeof(asn_DEF_CAM_tags_1)
		/sizeof(asn_DEF_CAM_tags_1[0]), /* 1 */
	asn_DEF_CAM_tags_1,	/* Same as above */
	sizeof(asn_DEF_CAM_tags_1)
		/sizeof(asn_DEF_CAM_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CAM_1,
	2,	/* Elements count */
	&asn_SPC_CAM_specs_1	/* Additional specs */
};


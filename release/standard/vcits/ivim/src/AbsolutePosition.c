/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "AbsolutePosition.h"

asn_TYPE_member_t asn_MBR_AbsolutePosition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AbsolutePosition, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AbsolutePosition, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longitude"
		},
};
static const ber_tlv_tag_t asn_DEF_AbsolutePosition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AbsolutePosition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* longitude */
};
asn_SEQUENCE_specifics_t asn_SPC_AbsolutePosition_specs_1 = {
	sizeof(struct AbsolutePosition),
	offsetof(struct AbsolutePosition, _asn_ctx),
	asn_MAP_AbsolutePosition_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AbsolutePosition = {
	"AbsolutePosition",
	"AbsolutePosition",
	&asn_OP_SEQUENCE,
	asn_DEF_AbsolutePosition_tags_1,
	sizeof(asn_DEF_AbsolutePosition_tags_1)
		/sizeof(asn_DEF_AbsolutePosition_tags_1[0]), /* 1 */
	asn_DEF_AbsolutePosition_tags_1,	/* Same as above */
	sizeof(asn_DEF_AbsolutePosition_tags_1)
		/sizeof(asn_DEF_AbsolutePosition_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AbsolutePosition_1,
	2,	/* Elements count */
	&asn_SPC_AbsolutePosition_specs_1	/* Additional specs */
};


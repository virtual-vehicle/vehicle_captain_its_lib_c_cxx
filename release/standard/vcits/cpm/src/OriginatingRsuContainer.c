/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-OriginatingStationContainers"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "OriginatingRsuContainer.h"

#include "MapReference.h"
asn_TYPE_member_t asn_MBR_OriginatingRsuContainer_1[] = {
	{ ATF_POINTER, 1, offsetof(struct OriginatingRsuContainer, mapReference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MapReference,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"mapReference"
		},
};
static const int asn_MAP_OriginatingRsuContainer_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_OriginatingRsuContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OriginatingRsuContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mapReference */
};
asn_SEQUENCE_specifics_t asn_SPC_OriginatingRsuContainer_specs_1 = {
	sizeof(struct OriginatingRsuContainer),
	offsetof(struct OriginatingRsuContainer, _asn_ctx),
	asn_MAP_OriginatingRsuContainer_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_OriginatingRsuContainer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OriginatingRsuContainer = {
	"OriginatingRsuContainer",
	"OriginatingRsuContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_OriginatingRsuContainer_tags_1,
	sizeof(asn_DEF_OriginatingRsuContainer_tags_1)
		/sizeof(asn_DEF_OriginatingRsuContainer_tags_1[0]), /* 1 */
	asn_DEF_OriginatingRsuContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_OriginatingRsuContainer_tags_1)
		/sizeof(asn_DEF_OriginatingRsuContainer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_OriginatingRsuContainer_1,
	1,	/* Elements count */
	&asn_SPC_OriginatingRsuContainer_specs_1	/* Additional specs */
};

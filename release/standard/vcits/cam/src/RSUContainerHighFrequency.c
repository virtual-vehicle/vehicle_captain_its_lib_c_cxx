/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cam_en302637_2/CAM-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cam -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CAM`
 */

#include "RSUContainerHighFrequency.h"

#include "ProtectedCommunicationZonesRSU.h"
asn_TYPE_member_t asn_MBR_RSUContainerHighFrequency_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RSUContainerHighFrequency, protectedCommunicationZonesRSU),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtectedCommunicationZonesRSU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedCommunicationZonesRSU"
		},
};
static const int asn_MAP_RSUContainerHighFrequency_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RSUContainerHighFrequency_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RSUContainerHighFrequency_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protectedCommunicationZonesRSU */
};
asn_SEQUENCE_specifics_t asn_SPC_RSUContainerHighFrequency_specs_1 = {
	sizeof(struct RSUContainerHighFrequency),
	offsetof(struct RSUContainerHighFrequency, _asn_ctx),
	asn_MAP_RSUContainerHighFrequency_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RSUContainerHighFrequency_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RSUContainerHighFrequency = {
	"RSUContainerHighFrequency",
	"RSUContainerHighFrequency",
	&asn_OP_SEQUENCE,
	asn_DEF_RSUContainerHighFrequency_tags_1,
	sizeof(asn_DEF_RSUContainerHighFrequency_tags_1)
		/sizeof(asn_DEF_RSUContainerHighFrequency_tags_1[0]), /* 1 */
	asn_DEF_RSUContainerHighFrequency_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSUContainerHighFrequency_tags_1)
		/sizeof(asn_DEF_RSUContainerHighFrequency_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RSUContainerHighFrequency_1,
	1,	/* Elements count */
	&asn_SPC_RSUContainerHighFrequency_specs_1	/* Additional specs */
};


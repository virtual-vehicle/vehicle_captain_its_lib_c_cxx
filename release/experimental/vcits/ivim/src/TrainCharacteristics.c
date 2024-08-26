/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "TrainCharacteristics.h"

/*
 * This type is implemented using TractorCharacteristics,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_TrainCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TrainCharacteristics = {
	"TrainCharacteristics",
	"TrainCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_TrainCharacteristics_tags_1,
	sizeof(asn_DEF_TrainCharacteristics_tags_1)
		/sizeof(asn_DEF_TrainCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_TrainCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrainCharacteristics_tags_1)
		/sizeof(asn_DEF_TrainCharacteristics_tags_1[0]), /* 1 */
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
	asn_MBR_TractorCharacteristics_1,
	3,	/* Elements count */
	&asn_SPC_TractorCharacteristics_specs_1	/* Additional specs */
};


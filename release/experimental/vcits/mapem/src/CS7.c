/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#include "CS7.h"

/*
 * This type is implemented using FreightContainerData,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_CS7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CS7 = {
	"CS7",
	"CS7",
	&asn_OP_SEQUENCE,
	asn_DEF_CS7_tags_1,
	sizeof(asn_DEF_CS7_tags_1)
		/sizeof(asn_DEF_CS7_tags_1[0]), /* 1 */
	asn_DEF_CS7_tags_1,	/* Same as above */
	sizeof(asn_DEF_CS7_tags_1)
		/sizeof(asn_DEF_CS7_tags_1[0]), /* 1 */
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
	asn_MBR_FreightContainerData_1,
	10,	/* Elements count */
	&asn_SPC_FreightContainerData_specs_1	/* Additional specs */
};


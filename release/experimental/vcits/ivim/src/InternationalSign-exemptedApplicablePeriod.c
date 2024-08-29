/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14823-missing.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "InternationalSign-exemptedApplicablePeriod.h"

/*
 * This type is implemented using InternationalSign_applicablePeriod,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_InternationalSign_exemptedApplicablePeriod = {
	"InternationalSign-exemptedApplicablePeriod",
	"InternationalSign-exemptedApplicablePeriod",
	&asn_OP_SEQUENCE,
	asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1,
	sizeof(asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1)
		/sizeof(asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1[0]), /* 1 */
	asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1,	/* Same as above */
	sizeof(asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1)
		/sizeof(asn_DEF_InternationalSign_exemptedApplicablePeriod_tags_1[0]), /* 1 */
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
	asn_MBR_InternationalSign_applicablePeriod_1,
	6,	/* Elements count */
	&asn_SPC_InternationalSign_applicablePeriod_specs_1	/* Additional specs */
};


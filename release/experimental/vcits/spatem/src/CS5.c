/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#include "CS5.h"

static int
memb_fill_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_fill_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	9	/* (SIZE(9..9)) */};
static asn_per_constraints_t asn_PER_memb_fill_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CS5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CS5, vin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS5, fill),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_fill_constr_3, &asn_PER_memb_fill_constr_3,  memb_fill_constraint_1 },
		0, 0, /* No default value */
		"fill"
		},
};
static const ber_tlv_tag_t asn_DEF_CS5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CS5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fill */
};
static asn_SEQUENCE_specifics_t asn_SPC_CS5_specs_1 = {
	sizeof(struct CS5),
	offsetof(struct CS5, _asn_ctx),
	asn_MAP_CS5_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CS5 = {
	"CS5",
	"CS5",
	&asn_OP_SEQUENCE,
	asn_DEF_CS5_tags_1,
	sizeof(asn_DEF_CS5_tags_1)
		/sizeof(asn_DEF_CS5_tags_1[0]), /* 1 */
	asn_DEF_CS5_tags_1,	/* Same as above */
	sizeof(asn_DEF_CS5_tags_1)
		/sizeof(asn_DEF_CS5_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CS5_1,
	2,	/* Elements count */
	&asn_SPC_CS5_specs_1	/* Additional specs */
};


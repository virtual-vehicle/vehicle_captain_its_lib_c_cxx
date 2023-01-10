/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "LayoutComponent.h"

static int
memb_layoutComponentId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_height_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 73)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_width_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 265)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_x_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 265)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_y_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 73)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_textScripting_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_layoutComponentId_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_layoutComponentId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (1..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_height_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (10..73) */,
	-1};
static asn_per_constraints_t asn_PER_memb_height_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  10,  73 }	/* (10..73) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_width_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (10..265) */,
	-1};
static asn_per_constraints_t asn_PER_memb_width_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  10,  265 }	/* (10..265) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_x_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (10..265) */,
	-1};
static asn_per_constraints_t asn_PER_memb_x_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  10,  265 }	/* (10..265) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_y_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (10..73) */,
	-1};
static asn_per_constraints_t asn_PER_memb_y_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  10,  73 }	/* (10..73) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_textScripting_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_textScripting_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LayoutComponent_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, layoutComponentId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_layoutComponentId_constr_2, &asn_PER_memb_layoutComponentId_constr_2,  memb_layoutComponentId_constraint_1 },
		0, 0, /* No default value */
		"layoutComponentId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, height),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_height_constr_3, &asn_PER_memb_height_constr_3,  memb_height_constraint_1 },
		0, 0, /* No default value */
		"height"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, width),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_width_constr_4, &asn_PER_memb_width_constr_4,  memb_width_constraint_1 },
		0, 0, /* No default value */
		"width"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, x),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_x_constr_5, &asn_PER_memb_x_constr_5,  memb_x_constraint_1 },
		0, 0, /* No default value */
		"x"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, y),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_y_constr_6, &asn_PER_memb_y_constr_6,  memb_y_constraint_1 },
		0, 0, /* No default value */
		"y"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LayoutComponent, textScripting),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_textScripting_constr_7, &asn_PER_memb_textScripting_constr_7,  memb_textScripting_constraint_1 },
		0, 0, /* No default value */
		"textScripting"
		},
};
static const ber_tlv_tag_t asn_DEF_LayoutComponent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LayoutComponent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* layoutComponentId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* height */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* width */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* x */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* y */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* textScripting */
};
asn_SEQUENCE_specifics_t asn_SPC_LayoutComponent_specs_1 = {
	sizeof(struct LayoutComponent),
	offsetof(struct LayoutComponent, _asn_ctx),
	asn_MAP_LayoutComponent_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LayoutComponent = {
	"LayoutComponent",
	"LayoutComponent",
	&asn_OP_SEQUENCE,
	asn_DEF_LayoutComponent_tags_1,
	sizeof(asn_DEF_LayoutComponent_tags_1)
		/sizeof(asn_DEF_LayoutComponent_tags_1[0]), /* 1 */
	asn_DEF_LayoutComponent_tags_1,	/* Same as above */
	sizeof(asn_DEF_LayoutComponent_tags_1)
		/sizeof(asn_DEF_LayoutComponent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LayoutComponent_1,
	6,	/* Elements count */
	&asn_SPC_LayoutComponent_specs_1	/* Additional specs */
};


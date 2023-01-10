/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/mapem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=MAPEM`
 */

#include "SignalStatusPackageList.h"

#include "SignalStatusPackage.h"
static asn_oer_constraints_t asn_OER_type_SignalStatusPackageList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
asn_per_constraints_t asn_PER_type_SignalStatusPackageList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SignalStatusPackageList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SignalStatusPackage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SignalStatusPackageList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SignalStatusPackageList_specs_1 = {
	sizeof(struct SignalStatusPackageList),
	offsetof(struct SignalStatusPackageList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatusPackageList = {
	"SignalStatusPackageList",
	"SignalStatusPackageList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SignalStatusPackageList_tags_1,
	sizeof(asn_DEF_SignalStatusPackageList_tags_1)
		/sizeof(asn_DEF_SignalStatusPackageList_tags_1[0]), /* 1 */
	asn_DEF_SignalStatusPackageList_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatusPackageList_tags_1)
		/sizeof(asn_DEF_SignalStatusPackageList_tags_1[0]), /* 1 */
	{ &asn_OER_type_SignalStatusPackageList_constr_1, &asn_PER_type_SignalStatusPackageList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SignalStatusPackageList_1,
	1,	/* Single element */
	&asn_SPC_SignalStatusPackageList_specs_1	/* Additional specs */
};


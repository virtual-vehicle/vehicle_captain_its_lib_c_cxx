/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/denm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=DENM`
 */

#include "OpeningDaysHours.h"

/*
 * This type is implemented using UTF8String,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_OpeningDaysHours_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (12 << 2))
};
asn_TYPE_descriptor_t asn_DEF_OpeningDaysHours = {
	"OpeningDaysHours",
	"OpeningDaysHours",
	&asn_OP_UTF8String,
	asn_DEF_OpeningDaysHours_tags_1,
	sizeof(asn_DEF_OpeningDaysHours_tags_1)
		/sizeof(asn_DEF_OpeningDaysHours_tags_1[0]), /* 1 */
	asn_DEF_OpeningDaysHours_tags_1,	/* Same as above */
	sizeof(asn_DEF_OpeningDaysHours_tags_1)
		/sizeof(asn_DEF_OpeningDaysHours_tags_1[0]), /* 1 */
	{ 0, 0, UTF8String_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};


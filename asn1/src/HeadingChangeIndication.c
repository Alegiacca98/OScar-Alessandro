/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 */

#include "HeadingChangeIndication.h"

asn_TYPE_member_t asn_MBR_HeadingChangeIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HeadingChangeIndication, direction),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TurningDirection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"direction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HeadingChangeIndication, actionDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTimeTenthOfSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"actionDeltaTime"
		},
};
static const ber_tlv_tag_t asn_DEF_HeadingChangeIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HeadingChangeIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* actionDeltaTime */
};
asn_SEQUENCE_specifics_t asn_SPC_HeadingChangeIndication_specs_1 = {
	sizeof(struct HeadingChangeIndication),
	offsetof(struct HeadingChangeIndication, _asn_ctx),
	asn_MAP_HeadingChangeIndication_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HeadingChangeIndication = {
	"HeadingChangeIndication",
	"HeadingChangeIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_HeadingChangeIndication_tags_1,
	sizeof(asn_DEF_HeadingChangeIndication_tags_1)
		/sizeof(asn_DEF_HeadingChangeIndication_tags_1[0]), /* 1 */
	asn_DEF_HeadingChangeIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_HeadingChangeIndication_tags_1)
		/sizeof(asn_DEF_HeadingChangeIndication_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HeadingChangeIndication_1,
	2,	/* Elements count */
	&asn_SPC_HeadingChangeIndication_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "./ASNfiles/ETSI CAM v1.4.1enh.asn"
 */

#include "CoopAwarenessEnhanced.h"

asn_TYPE_member_t asn_MBR_CoopAwarenessEnhanced_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CoopAwarenessEnhanced, generationDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenerationDeltaTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generationDeltaTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CoopAwarenessEnhanced, camParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CamParametersEnhanced,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"camParameters"
		},
};
static const ber_tlv_tag_t asn_DEF_CoopAwarenessEnhanced_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CoopAwarenessEnhanced_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* generationDeltaTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* camParameters */
};
asn_SEQUENCE_specifics_t asn_SPC_CoopAwarenessEnhanced_specs_1 = {
	sizeof(struct CoopAwarenessEnhanced),
	offsetof(struct CoopAwarenessEnhanced, _asn_ctx),
	asn_MAP_CoopAwarenessEnhanced_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CoopAwarenessEnhanced = {
	"CoopAwarenessEnhanced",
	"CoopAwarenessEnhanced",
	&asn_OP_SEQUENCE,
	asn_DEF_CoopAwarenessEnhanced_tags_1,
	sizeof(asn_DEF_CoopAwarenessEnhanced_tags_1)
		/sizeof(asn_DEF_CoopAwarenessEnhanced_tags_1[0]), /* 1 */
	asn_DEF_CoopAwarenessEnhanced_tags_1,	/* Same as above */
	sizeof(asn_DEF_CoopAwarenessEnhanced_tags_1)
		/sizeof(asn_DEF_CoopAwarenessEnhanced_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CoopAwarenessEnhanced_1,
	2,	/* Elements count */
	&asn_SPC_CoopAwarenessEnhanced_specs_1	/* Additional specs */
};

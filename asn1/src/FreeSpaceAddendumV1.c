/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "FreeSpaceAddendumV1.h"

static int asn_DFL_5_cmp_1(const void *sptr) {
	const ShadowingAppliesV1_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_5_set_1(void **sptr) {
	ShadowingAppliesV1_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
asn_TYPE_member_t asn_MBR_FreeSpaceAddendumV1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceAddendumV1, freeSpaceConfidence),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreeSpaceConfidenceV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"freeSpaceConfidence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceAddendumV1, freeSpaceArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FreeSpaceAreaV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"freeSpaceArea"
		},
	{ ATF_POINTER, 2, offsetof(struct FreeSpaceAddendumV1, sensorIDList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SensorIdListV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"sensorIDList"
		},
	{ ATF_POINTER, 1, offsetof(struct FreeSpaceAddendumV1, shadowingApplies),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShadowingAppliesV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		&asn_DFL_5_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_5_set_1,	/* Set DEFAULT 1 */
		"shadowingApplies"
		},
};
static const int asn_MAP_FreeSpaceAddendumV1_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_FreeSpaceAddendumV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FreeSpaceAddendumV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freeSpaceConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freeSpaceArea */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sensorIDList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* shadowingApplies */
};
asn_SEQUENCE_specifics_t asn_SPC_FreeSpaceAddendumV1_specs_1 = {
	sizeof(struct FreeSpaceAddendumV1),
	offsetof(struct FreeSpaceAddendumV1, _asn_ctx),
	asn_MAP_FreeSpaceAddendumV1_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_FreeSpaceAddendumV1_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FreeSpaceAddendumV1 = {
	"FreeSpaceAddendumV1",
	"FreeSpaceAddendumV1",
	&asn_OP_SEQUENCE,
	asn_DEF_FreeSpaceAddendumV1_tags_1,
	sizeof(asn_DEF_FreeSpaceAddendumV1_tags_1)
		/sizeof(asn_DEF_FreeSpaceAddendumV1_tags_1[0]), /* 1 */
	asn_DEF_FreeSpaceAddendumV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreeSpaceAddendumV1_tags_1)
		/sizeof(asn_DEF_FreeSpaceAddendumV1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FreeSpaceAddendumV1_1,
	4,	/* Elements count */
	&asn_SPC_FreeSpaceAddendumV1_specs_1	/* Additional specs */
};

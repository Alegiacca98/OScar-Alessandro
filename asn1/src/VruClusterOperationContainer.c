/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VAM-PDU-Descriptions"
 * 	found in "VAM-PDU-Descriptions.asn"
 */

#include "VruClusterOperationContainer.h"

asn_TYPE_member_t asn_MBR_VruClusterOperationContainer_1[] = {
	{ ATF_POINTER, 4, offsetof(struct VruClusterOperationContainer, clusterJoinInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ClusterJoinInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterJoinInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct VruClusterOperationContainer, clusterLeaveInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ClusterLeaveInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterLeaveInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct VruClusterOperationContainer, clusterBreakupInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ClusterBreakupInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterBreakupInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct VruClusterOperationContainer, clusterIdChangeTimeInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTimeQuarterSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterIdChangeTimeInfo"
		},
};
static const int asn_MAP_VruClusterOperationContainer_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_VruClusterOperationContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VruClusterOperationContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* clusterJoinInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* clusterLeaveInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* clusterBreakupInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* clusterIdChangeTimeInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_VruClusterOperationContainer_specs_1 = {
	sizeof(struct VruClusterOperationContainer),
	offsetof(struct VruClusterOperationContainer, _asn_ctx),
	asn_MAP_VruClusterOperationContainer_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_VruClusterOperationContainer_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VruClusterOperationContainer = {
	"VruClusterOperationContainer",
	"VruClusterOperationContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_VruClusterOperationContainer_tags_1,
	sizeof(asn_DEF_VruClusterOperationContainer_tags_1)
		/sizeof(asn_DEF_VruClusterOperationContainer_tags_1[0]), /* 1 */
	asn_DEF_VruClusterOperationContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_VruClusterOperationContainer_tags_1)
		/sizeof(asn_DEF_VruClusterOperationContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VruClusterOperationContainer_1,
	4,	/* Elements count */
	&asn_SPC_VruClusterOperationContainer_specs_1	/* Additional specs */
};


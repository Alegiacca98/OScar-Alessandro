/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "EuVehicleCategoryL.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_EuVehicleCategoryL_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_EuVehicleCategoryL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_EuVehicleCategoryL_value2enum_1[] = {
	{ 0,	2,	"l1" },
	{ 1,	2,	"l2" },
	{ 2,	2,	"l3" },
	{ 3,	2,	"l4" },
	{ 4,	2,	"l5" },
	{ 5,	2,	"l6" },
	{ 6,	2,	"l7" }
};
static const unsigned int asn_MAP_EuVehicleCategoryL_enum2value_1[] = {
	0,	/* l1(0) */
	1,	/* l2(1) */
	2,	/* l3(2) */
	3,	/* l4(3) */
	4,	/* l5(4) */
	5,	/* l6(5) */
	6	/* l7(6) */
};
const asn_INTEGER_specifics_t asn_SPC_EuVehicleCategoryL_specs_1 = {
	asn_MAP_EuVehicleCategoryL_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EuVehicleCategoryL_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EuVehicleCategoryL_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EuVehicleCategoryL = {
	"EuVehicleCategoryL",
	"EuVehicleCategoryL",
	&asn_OP_NativeEnumerated,
	asn_DEF_EuVehicleCategoryL_tags_1,
	sizeof(asn_DEF_EuVehicleCategoryL_tags_1)
		/sizeof(asn_DEF_EuVehicleCategoryL_tags_1[0]), /* 1 */
	asn_DEF_EuVehicleCategoryL_tags_1,	/* Same as above */
	sizeof(asn_DEF_EuVehicleCategoryL_tags_1)
		/sizeof(asn_DEF_EuVehicleCategoryL_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_EuVehicleCategoryL_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_EuVehicleCategoryL_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EuVehicleCategoryL_specs_1	/* Additional specs */
};


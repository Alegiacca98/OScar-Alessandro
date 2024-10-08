/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "Ieee1609Dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_ContributedExtensionBlocks_H_
#define	_ContributedExtensionBlocks_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ContributedExtensionBlock;

/* ContributedExtensionBlocks */
typedef struct ContributedExtensionBlocks {
	A_SEQUENCE_OF(struct ContributedExtensionBlock) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContributedExtensionBlocks_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContributedExtensionBlocks;
extern asn_SET_OF_specifics_t asn_SPC_ContributedExtensionBlocks_specs_1;
extern asn_TYPE_member_t asn_MBR_ContributedExtensionBlocks_1[1];
extern asn_per_constraints_t asn_PER_type_ContributedExtensionBlocks_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ContributedExtensionBlock.h"

#endif	/* _ContributedExtensionBlocks_H_ */
#include "asn_internal.h"

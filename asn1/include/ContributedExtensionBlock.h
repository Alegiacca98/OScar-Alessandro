/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "Ieee1609Dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_ContributedExtensionBlock_H_
#define	_ContributedExtensionBlock_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HeaderInfoContributorId.h"
#include "asn_ioc.h"
#include "EtsiOriginatingHeaderInfoExtension.h"
#include "ANY.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ContributedExtensionBlock */
typedef struct ContributedExtensionBlock {
	HeaderInfoContributorId_t	 contributorId;
	struct ContributedExtensionBlock__extns {
		A_SEQUENCE_OF(ANY_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extns;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContributedExtensionBlock_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContributedExtensionBlock;
extern asn_SEQUENCE_specifics_t asn_SPC_ContributedExtensionBlock_specs_1;
extern asn_TYPE_member_t asn_MBR_ContributedExtensionBlock_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ContributedExtensionBlock_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "Ieee1609Dot2CrlBaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_SequenceOfJMaxGroup_H_
#define	_SequenceOfJMaxGroup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct JMaxGroup;

/* SequenceOfJMaxGroup */
typedef struct SequenceOfJMaxGroup {
	A_SEQUENCE_OF(struct JMaxGroup) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfJMaxGroup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfJMaxGroup;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfJMaxGroup_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfJMaxGroup_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "JMaxGroup.h"

#endif	/* _SequenceOfJMaxGroup_H_ */
#include "asn_internal.h"
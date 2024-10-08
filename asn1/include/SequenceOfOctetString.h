/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_SequenceOfOctetString_H_
#define	_SequenceOfOctetString_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceOfOctetString */
typedef struct SequenceOfOctetString {
	A_SEQUENCE_OF(OCTET_STRING_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfOctetString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfOctetString;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfOctetString_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfOctetString_1[1];
extern asn_per_constraints_t asn_PER_type_SequenceOfOctetString_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceOfOctetString_H_ */
#include "asn_internal.h"

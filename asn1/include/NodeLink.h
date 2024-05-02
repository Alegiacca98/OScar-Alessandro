/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/mnt/EVO/ASN1-C-ITS/DSRC.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_NodeLink_H_
#define	_NodeLink_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeITS;

/* NodeLink */
typedef struct NodeLink {
	A_SEQUENCE_OF(struct NodeITS) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeLink_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeLink;
extern asn_SET_OF_specifics_t asn_SPC_NodeLink_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeLink_1[1];
extern asn_per_constraints_t asn_PER_type_NodeLink_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeITS.h"

#endif	/* _NodeLink_H_ */
#include "asn_internal.h"

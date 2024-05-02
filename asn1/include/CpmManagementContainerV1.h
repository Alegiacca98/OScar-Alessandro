/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CpmManagementContainerV1_H_
#define	_CpmManagementContainerV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StationType.h"
#include "ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PerceivedObjectContainerSegmentInfoV1;

/* CpmManagementContainerV1 */
typedef struct CpmManagementContainerV1 {
	StationType_t	 stationType;
	struct PerceivedObjectContainerSegmentInfoV1	*perceivedObjectContainerSegmentInfo;	/* OPTIONAL */
	ReferencePosition_t	 referencePosition;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CpmManagementContainerV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CpmManagementContainerV1;
extern asn_SEQUENCE_specifics_t asn_SPC_CpmManagementContainerV1_specs_1;
extern asn_TYPE_member_t asn_MBR_CpmManagementContainerV1_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PerceivedObjectContainerSegmentInfoV1.h"

#endif	/* _CpmManagementContainerV1_H_ */
#include "asn_internal.h"

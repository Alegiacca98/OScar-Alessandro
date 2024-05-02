/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ClusterBreakupInfo_H_
#define	_ClusterBreakupInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ClusterBreakupReason.h"
#include "DeltaTimeQuarterSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ClusterBreakupInfo */
typedef struct ClusterBreakupInfo {
	ClusterBreakupReason_t	 clusterBreakupReason;
	DeltaTimeQuarterSecond_t	 breakupTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ClusterBreakupInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClusterBreakupInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _ClusterBreakupInfo_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "DENM-PDU-Descriptions-1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_RoadWorksContainerExtendedV1_H_
#define	_RoadWorksContainerExtendedV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LightBarSirenInUseV1.h"
#include "SpeedLimitV1.h"
#include "TrafficRuleV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ClosedLanesV1;
struct RestrictedTypesV1;
struct CauseCodeV1;
struct ItineraryPathV1;
struct DeltaReferencePositionV1;
struct ReferenceDenmsV1;

/* RoadWorksContainerExtendedV1 */
typedef struct RoadWorksContainerExtendedV1 {
	LightBarSirenInUseV1_t	*lightBarSirenInUse	/* OPTIONAL */;
	struct ClosedLanesV1	*closedLanes	/* OPTIONAL */;
	struct RestrictedTypesV1	*restriction	/* OPTIONAL */;
	SpeedLimitV1_t	*speedLimit	/* OPTIONAL */;
	struct CauseCodeV1	*incidentIndication	/* OPTIONAL */;
	struct ItineraryPathV1	*recommendedPath	/* OPTIONAL */;
	struct DeltaReferencePositionV1	*startingPointSpeedLimit	/* OPTIONAL */;
	TrafficRuleV1_t	*trafficFlowRule	/* OPTIONAL */;
	struct ReferenceDenmsV1	*referenceDenms	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadWorksContainerExtendedV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadWorksContainerExtendedV1;
extern asn_SEQUENCE_specifics_t asn_SPC_RoadWorksContainerExtendedV1_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadWorksContainerExtendedV1_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ClosedLanesV1.h"
#include "RestrictedTypesV1.h"
#include "CauseCodeV1.h"
#include "ItineraryPathV1.h"
#include "DeltaReferencePositionV1.h"
#include "ReferenceDenmsV1.h"

#endif	/* _RoadWorksContainerExtendedV1_H_ */
#include "asn_internal.h"

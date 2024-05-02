/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CenDsrcTollingZoneV1_H_
#define	_CenDsrcTollingZoneV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LatitudeV1.h"
#include "LongitudeV1.h"
#include "CenDsrcTollingZoneIDV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CenDsrcTollingZoneV1 */
typedef struct CenDsrcTollingZoneV1 {
	LatitudeV1_t	 protectedZoneLatitude;
	LongitudeV1_t	 protectedZoneLongitude;
	CenDsrcTollingZoneIDV1_t	*cenDsrcTollingZoneID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CenDsrcTollingZoneV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CenDsrcTollingZoneV1;
extern asn_SEQUENCE_specifics_t asn_SPC_CenDsrcTollingZoneV1_specs_1;
extern asn_TYPE_member_t asn_MBR_CenDsrcTollingZoneV1_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CenDsrcTollingZoneV1_H_ */
#include "asn_internal.h"

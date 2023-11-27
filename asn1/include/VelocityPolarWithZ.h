/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 */

#ifndef	_VelocityPolarWithZ_H_
#define	_VelocityPolarWithZ_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Speed.h"
#include "CartesianAngle.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VelocityComponent;

/* VelocityPolarWithZ */
typedef struct VelocityPolarWithZ {
	Speed_t	 velocityMagnitude;
	CartesianAngle_t	 velocityDirection;
	struct VelocityComponent	*zVelocity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VelocityPolarWithZ_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VelocityPolarWithZ;
extern asn_SEQUENCE_specifics_t asn_SPC_VelocityPolarWithZ_specs_1;
extern asn_TYPE_member_t asn_MBR_VelocityPolarWithZ_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VelocityComponent.h"

#endif	/* _VelocityPolarWithZ_H_ */
#include "asn_internal.h"

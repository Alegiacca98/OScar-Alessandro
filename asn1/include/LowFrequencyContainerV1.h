/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-C-ITS/CAM-PDU-Descriptions-1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_LowFrequencyContainerV1_H_
#define	_LowFrequencyContainerV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BasicVehicleContainerLowFrequencyV1.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LowFrequencyContainerV1_PR {
	LowFrequencyContainerV1_PR_NOTHING,	/* No components present */
	LowFrequencyContainerV1_PR_basicVehicleContainerLowFrequency
	/* Extensions may appear below */
	
} LowFrequencyContainerV1_PR;

/* LowFrequencyContainerV1 */
typedef struct LowFrequencyContainerV1 {
	LowFrequencyContainerV1_PR present;
	union LowFrequencyContainerV1_u {
		BasicVehicleContainerLowFrequencyV1_t	 basicVehicleContainerLowFrequency;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LowFrequencyContainerV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LowFrequencyContainerV1;
extern asn_CHOICE_specifics_t asn_SPC_LowFrequencyContainerV1_specs_1;
extern asn_TYPE_member_t asn_MBR_LowFrequencyContainerV1_1[1];
extern asn_per_constraints_t asn_PER_type_LowFrequencyContainerV1_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LowFrequencyContainerV1_H_ */
#include "asn_internal.h"

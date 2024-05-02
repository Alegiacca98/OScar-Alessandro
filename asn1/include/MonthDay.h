/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/mnt/EVO/ASN1-C-ITS/GDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_MonthDay_H_
#define	_MonthDay_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MonthDay */
typedef struct MonthDay {
	long	 month;
	long	 day;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MonthDay_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MonthDay;
extern asn_SEQUENCE_specifics_t asn_SPC_MonthDay_specs_1;
extern asn_TYPE_member_t asn_MBR_MonthDay_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MonthDay_H_ */
#include "asn_internal.h"

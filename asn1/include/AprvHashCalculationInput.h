/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Acpc"
 * 	found in "Ieee1609Dot2Dot1Acpc.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_AprvHashCalculationInput_H_
#define	_AprvHashCalculationInput_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Uint8.h"
#include "AcpcTreeId.h"
#include "IValue.h"
#include "BIT_STRING.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AprvHashCalculationInput */
typedef struct AprvHashCalculationInput {
	Uint8_t	 version;
	AcpcTreeId_t	 acpcTreeId;
	IValue_t	 acpcPeriod;
	BIT_STRING_t	 childNodeId;
	OCTET_STRING_t	 parentNodeValue;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AprvHashCalculationInput_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AprvHashCalculationInput;

#ifdef __cplusplus
}
#endif

#endif	/* _AprvHashCalculationInput_H_ */
#include "asn_internal.h"

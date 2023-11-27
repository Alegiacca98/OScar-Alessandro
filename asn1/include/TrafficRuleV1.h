/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_TrafficRuleV1_H_
#define	_TrafficRuleV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficRuleV1 {
	TrafficRuleV1_noPassing	= 0,
	TrafficRuleV1_noPassingForTrucks	= 1,
	TrafficRuleV1_passToRight	= 2,
	TrafficRuleV1_passToLeft	= 3
	/*
	 * Enumeration is extensible
	 */
} e_TrafficRuleV1;

/* TrafficRuleV1 */
typedef long	 TrafficRuleV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrafficRuleV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrafficRuleV1;
extern const asn_INTEGER_specifics_t asn_SPC_TrafficRuleV1_specs_1;
asn_struct_free_f TrafficRuleV1_free;
asn_struct_print_f TrafficRuleV1_print;
asn_constr_check_f TrafficRuleV1_constraint;
ber_type_decoder_f TrafficRuleV1_decode_ber;
der_type_encoder_f TrafficRuleV1_encode_der;
xer_type_decoder_f TrafficRuleV1_decode_xer;
xer_type_encoder_f TrafficRuleV1_encode_xer;
oer_type_decoder_f TrafficRuleV1_decode_oer;
oer_type_encoder_f TrafficRuleV1_encode_oer;
per_type_decoder_f TrafficRuleV1_decode_uper;
per_type_encoder_f TrafficRuleV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficRuleV1_H_ */
#include "asn_internal.h"

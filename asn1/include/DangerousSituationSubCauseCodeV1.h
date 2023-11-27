/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_DangerousSituationSubCauseCodeV1_H_
#define	_DangerousSituationSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DangerousSituationSubCauseCodeV1 {
	DangerousSituationSubCauseCodeV1_unavailable	= 0,
	DangerousSituationSubCauseCodeV1_emergencyElectronicBrakeEngaged	= 1,
	DangerousSituationSubCauseCodeV1_preCrashSystemEngaged	= 2,
	DangerousSituationSubCauseCodeV1_espEngaged	= 3,
	DangerousSituationSubCauseCodeV1_absEngaged	= 4,
	DangerousSituationSubCauseCodeV1_aebEngaged	= 5,
	DangerousSituationSubCauseCodeV1_brakeWarningEngaged	= 6,
	DangerousSituationSubCauseCodeV1_collisionRiskWarningEngaged	= 7
} e_DangerousSituationSubCauseCodeV1;

/* DangerousSituationSubCauseCodeV1 */
typedef long	 DangerousSituationSubCauseCodeV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousSituationSubCauseCodeV1;
asn_struct_free_f DangerousSituationSubCauseCodeV1_free;
asn_struct_print_f DangerousSituationSubCauseCodeV1_print;
asn_constr_check_f DangerousSituationSubCauseCodeV1_constraint;
ber_type_decoder_f DangerousSituationSubCauseCodeV1_decode_ber;
der_type_encoder_f DangerousSituationSubCauseCodeV1_encode_der;
xer_type_decoder_f DangerousSituationSubCauseCodeV1_decode_xer;
xer_type_encoder_f DangerousSituationSubCauseCodeV1_encode_xer;
oer_type_decoder_f DangerousSituationSubCauseCodeV1_decode_oer;
oer_type_encoder_f DangerousSituationSubCauseCodeV1_encode_oer;
per_type_decoder_f DangerousSituationSubCauseCodeV1_decode_uper;
per_type_encoder_f DangerousSituationSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DangerousSituationSubCauseCodeV1_H_ */
#include "asn_internal.h"

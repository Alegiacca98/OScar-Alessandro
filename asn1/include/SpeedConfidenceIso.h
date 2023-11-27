/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in asn1/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SpeedConfidenceIso_H_
#define	_SpeedConfidenceIso_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedConfidenceIso {
	SpeedConfidenceIso_unavailable	= 0,
	SpeedConfidenceIso_prec100ms	= 1,
	SpeedConfidenceIso_prec10ms	= 2,
	SpeedConfidenceIso_prec5ms	= 3,
	SpeedConfidenceIso_prec1ms	= 4,
	SpeedConfidenceIso_prec0_1ms	= 5,
	SpeedConfidenceIso_prec0_05ms	= 6,
	SpeedConfidenceIso_prec0_01ms	= 7
} e_SpeedConfidenceIso;

/* SpeedConfidenceIso */
typedef long	 SpeedConfidenceIso_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedConfidenceIso_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedConfidenceIso;
extern const asn_INTEGER_specifics_t asn_SPC_SpeedConfidenceIso_specs_1;
asn_struct_free_f SpeedConfidenceIso_free;
asn_struct_print_f SpeedConfidenceIso_print;
asn_constr_check_f SpeedConfidenceIso_constraint;
ber_type_decoder_f SpeedConfidenceIso_decode_ber;
der_type_encoder_f SpeedConfidenceIso_encode_der;
xer_type_decoder_f SpeedConfidenceIso_decode_xer;
xer_type_encoder_f SpeedConfidenceIso_encode_xer;
jer_type_encoder_f SpeedConfidenceIso_encode_jer;
oer_type_decoder_f SpeedConfidenceIso_decode_oer;
oer_type_encoder_f SpeedConfidenceIso_encode_oer;
per_type_decoder_f SpeedConfidenceIso_decode_uper;
per_type_encoder_f SpeedConfidenceIso_encode_uper;
per_type_decoder_f SpeedConfidenceIso_decode_aper;
per_type_encoder_f SpeedConfidenceIso_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedConfidenceIso_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RailwayLevelCrossingSubCauseCode_H_
#define	_RailwayLevelCrossingSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RailwayLevelCrossingSubCauseCode {
	RailwayLevelCrossingSubCauseCode_unavailable	= 0,
	RailwayLevelCrossingSubCauseCode_doNotCrossAbnormalSituation	= 1,
	RailwayLevelCrossingSubCauseCode_closed	= 2,
	RailwayLevelCrossingSubCauseCode_unguarded	= 3,
	RailwayLevelCrossingSubCauseCode_nominal	= 4
} e_RailwayLevelCrossingSubCauseCode;

/* RailwayLevelCrossingSubCauseCode */
typedef long	 RailwayLevelCrossingSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RailwayLevelCrossingSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RailwayLevelCrossingSubCauseCode;
asn_struct_free_f RailwayLevelCrossingSubCauseCode_free;
asn_struct_print_f RailwayLevelCrossingSubCauseCode_print;
asn_constr_check_f RailwayLevelCrossingSubCauseCode_constraint;
ber_type_decoder_f RailwayLevelCrossingSubCauseCode_decode_ber;
der_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_der;
xer_type_decoder_f RailwayLevelCrossingSubCauseCode_decode_xer;
xer_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_xer;
jer_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_jer;
oer_type_decoder_f RailwayLevelCrossingSubCauseCode_decode_oer;
oer_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_oer;
per_type_decoder_f RailwayLevelCrossingSubCauseCode_decode_uper;
per_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_uper;
per_type_decoder_f RailwayLevelCrossingSubCauseCode_decode_aper;
per_type_encoder_f RailwayLevelCrossingSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RailwayLevelCrossingSubCauseCode_H_ */
#include "asn_internal.h"

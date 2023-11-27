/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 */

#ifndef	_TrajectoryInterceptionProbability_H_
#define	_TrajectoryInterceptionProbability_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrajectoryInterceptionProbability {
	TrajectoryInterceptionProbability_unavailable	= 63
} e_TrajectoryInterceptionProbability;

/* TrajectoryInterceptionProbability */
typedef long	 TrajectoryInterceptionProbability_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrajectoryInterceptionProbability_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrajectoryInterceptionProbability;
asn_struct_free_f TrajectoryInterceptionProbability_free;
asn_struct_print_f TrajectoryInterceptionProbability_print;
asn_constr_check_f TrajectoryInterceptionProbability_constraint;
ber_type_decoder_f TrajectoryInterceptionProbability_decode_ber;
der_type_encoder_f TrajectoryInterceptionProbability_encode_der;
xer_type_decoder_f TrajectoryInterceptionProbability_decode_xer;
xer_type_encoder_f TrajectoryInterceptionProbability_encode_xer;
oer_type_decoder_f TrajectoryInterceptionProbability_decode_oer;
oer_type_encoder_f TrajectoryInterceptionProbability_encode_oer;
per_type_decoder_f TrajectoryInterceptionProbability_decode_uper;
per_type_encoder_f TrajectoryInterceptionProbability_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrajectoryInterceptionProbability_H_ */
#include "asn_internal.h"

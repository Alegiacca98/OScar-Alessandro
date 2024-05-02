/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TrafficConditionSubCauseCodeV1_H_
#define	_TrafficConditionSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficConditionSubCauseCodeV1 {
	TrafficConditionSubCauseCodeV1_unavailable	= 0,
	TrafficConditionSubCauseCodeV1_increasedVolumeOfTraffic	= 1,
	TrafficConditionSubCauseCodeV1_trafficJamSlowlyIncreasing	= 2,
	TrafficConditionSubCauseCodeV1_trafficJamIncreasing	= 3,
	TrafficConditionSubCauseCodeV1_trafficJamStronglyIncreasing	= 4,
	TrafficConditionSubCauseCodeV1_trafficStationary	= 5,
	TrafficConditionSubCauseCodeV1_trafficJamSlightlyDecreasing	= 6,
	TrafficConditionSubCauseCodeV1_trafficJamDecreasing	= 7,
	TrafficConditionSubCauseCodeV1_trafficJamStronglyDecreasing	= 8
} e_TrafficConditionSubCauseCodeV1;

/* TrafficConditionSubCauseCodeV1 */
typedef long	 TrafficConditionSubCauseCodeV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficConditionSubCauseCodeV1;
asn_struct_free_f TrafficConditionSubCauseCodeV1_free;
asn_struct_print_f TrafficConditionSubCauseCodeV1_print;
asn_constr_check_f TrafficConditionSubCauseCodeV1_constraint;
ber_type_decoder_f TrafficConditionSubCauseCodeV1_decode_ber;
der_type_encoder_f TrafficConditionSubCauseCodeV1_encode_der;
xer_type_decoder_f TrafficConditionSubCauseCodeV1_decode_xer;
xer_type_encoder_f TrafficConditionSubCauseCodeV1_encode_xer;
oer_type_decoder_f TrafficConditionSubCauseCodeV1_decode_oer;
oer_type_encoder_f TrafficConditionSubCauseCodeV1_encode_oer;
per_type_decoder_f TrafficConditionSubCauseCodeV1_decode_uper;
per_type_encoder_f TrafficConditionSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficConditionSubCauseCodeV1_H_ */
#include "asn_internal.h"

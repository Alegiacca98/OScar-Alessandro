/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AdverseWeatherCondition_AdhesionSubCauseCodeV1_H_
#define	_AdverseWeatherCondition_AdhesionSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdverseWeatherCondition_AdhesionSubCauseCodeV1 {
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_unavailable	= 0,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_heavyFrostOnRoad	= 1,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_fuelOnRoad	= 2,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_mudOnRoad	= 3,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_snowOnRoad	= 4,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_iceOnRoad	= 5,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_blackIceOnRoad	= 6,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_oilOnRoad	= 7,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_looseChippings	= 8,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_instantBlackIce	= 9,
	AdverseWeatherCondition_AdhesionSubCauseCodeV1_roadsSalted	= 10
} e_AdverseWeatherCondition_AdhesionSubCauseCodeV1;

/* AdverseWeatherCondition-AdhesionSubCauseCodeV1 */
typedef long	 AdverseWeatherCondition_AdhesionSubCauseCodeV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdverseWeatherCondition_AdhesionSubCauseCodeV1;
asn_struct_free_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_free;
asn_struct_print_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_print;
asn_constr_check_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_constraint;
ber_type_decoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_decode_ber;
der_type_encoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_encode_der;
xer_type_decoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_decode_xer;
xer_type_encoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_encode_xer;
oer_type_decoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_decode_oer;
oer_type_encoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_encode_oer;
per_type_decoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_decode_uper;
per_type_encoder_f AdverseWeatherCondition_AdhesionSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AdverseWeatherCondition_AdhesionSubCauseCodeV1_H_ */
#include "asn_internal.h"

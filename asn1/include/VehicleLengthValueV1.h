/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VehicleLengthValueV1_H_
#define	_VehicleLengthValueV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleLengthValueV1 {
	VehicleLengthValueV1_tenCentimeters	= 1,
	VehicleLengthValueV1_outOfRange	= 1022,
	VehicleLengthValueV1_unavailable	= 1023
} e_VehicleLengthValueV1;

/* VehicleLengthValueV1 */
typedef long	 VehicleLengthValueV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VehicleLengthValueV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VehicleLengthValueV1;
asn_struct_free_f VehicleLengthValueV1_free;
asn_struct_print_f VehicleLengthValueV1_print;
asn_constr_check_f VehicleLengthValueV1_constraint;
ber_type_decoder_f VehicleLengthValueV1_decode_ber;
der_type_encoder_f VehicleLengthValueV1_encode_der;
xer_type_decoder_f VehicleLengthValueV1_decode_xer;
xer_type_encoder_f VehicleLengthValueV1_encode_xer;
oer_type_decoder_f VehicleLengthValueV1_decode_oer;
oer_type_encoder_f VehicleLengthValueV1_encode_oer;
per_type_decoder_f VehicleLengthValueV1_decode_uper;
per_type_encoder_f VehicleLengthValueV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleLengthValueV1_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Acpc"
 * 	found in "Ieee1609Dot2Dot1Acpc.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_AcpcTreeId_H_
#define	_AcpcTreeId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AcpcTreeId */
typedef OCTET_STRING_t	 AcpcTreeId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AcpcTreeId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AcpcTreeId;
asn_struct_free_f AcpcTreeId_free;
asn_struct_print_f AcpcTreeId_print;
asn_constr_check_f AcpcTreeId_constraint;
ber_type_decoder_f AcpcTreeId_decode_ber;
der_type_encoder_f AcpcTreeId_encode_der;
xer_type_decoder_f AcpcTreeId_decode_xer;
xer_type_encoder_f AcpcTreeId_encode_xer;
jer_type_encoder_f AcpcTreeId_encode_jer;
oer_type_decoder_f AcpcTreeId_decode_oer;
oer_type_encoder_f AcpcTreeId_encode_oer;
per_type_decoder_f AcpcTreeId_decode_uper;
per_type_encoder_f AcpcTreeId_encode_uper;
per_type_decoder_f AcpcTreeId_decode_aper;
per_type_encoder_f AcpcTreeId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AcpcTreeId_H_ */
#include "asn_internal.h"

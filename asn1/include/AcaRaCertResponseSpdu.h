/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_AcaRaCertResponseSpdu_H_
#define	_AcaRaCertResponseSpdu_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Ieee1609Dot2Data-Signed.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AcaRaCertResponseSpdu */
typedef Ieee1609Dot2Data_Signed_246P2_t	 AcaRaCertResponseSpdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AcaRaCertResponseSpdu;
asn_struct_free_f AcaRaCertResponseSpdu_free;
asn_struct_print_f AcaRaCertResponseSpdu_print;
asn_constr_check_f AcaRaCertResponseSpdu_constraint;
ber_type_decoder_f AcaRaCertResponseSpdu_decode_ber;
der_type_encoder_f AcaRaCertResponseSpdu_encode_der;
xer_type_decoder_f AcaRaCertResponseSpdu_decode_xer;
xer_type_encoder_f AcaRaCertResponseSpdu_encode_xer;
jer_type_encoder_f AcaRaCertResponseSpdu_encode_jer;
oer_type_decoder_f AcaRaCertResponseSpdu_decode_oer;
oer_type_encoder_f AcaRaCertResponseSpdu_encode_oer;
per_type_decoder_f AcaRaCertResponseSpdu_decode_uper;
per_type_encoder_f AcaRaCertResponseSpdu_encode_uper;
per_type_decoder_f AcaRaCertResponseSpdu_decode_aper;
per_type_encoder_f AcaRaCertResponseSpdu_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AcaRaCertResponseSpdu_H_ */
#include "asn_internal.h"
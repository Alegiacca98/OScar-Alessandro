/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_BaseMbrPsid_H_
#define	_BaseMbrPsid_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Psid.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BaseMbrPsid */
typedef Psid_t	 BaseMbrPsid_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BaseMbrPsid;
asn_struct_free_f BaseMbrPsid_free;
asn_struct_print_f BaseMbrPsid_print;
asn_constr_check_f BaseMbrPsid_constraint;
ber_type_decoder_f BaseMbrPsid_decode_ber;
der_type_encoder_f BaseMbrPsid_encode_der;
xer_type_decoder_f BaseMbrPsid_decode_xer;
xer_type_encoder_f BaseMbrPsid_encode_xer;
jer_type_encoder_f BaseMbrPsid_encode_jer;
oer_type_decoder_f BaseMbrPsid_decode_oer;
oer_type_encoder_f BaseMbrPsid_encode_oer;
per_type_decoder_f BaseMbrPsid_decode_uper;
per_type_encoder_f BaseMbrPsid_encode_uper;
per_type_decoder_f BaseMbrPsid_decode_aper;
per_type_encoder_f BaseMbrPsid_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BaseMbrPsid_H_ */
#include "asn_internal.h"
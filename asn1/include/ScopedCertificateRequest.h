/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_ScopedCertificateRequest_H_
#define	_ScopedCertificateRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ScmsPdu.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ScopedCertificateRequest */
typedef ScmsPdu_t	 ScopedCertificateRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ScopedCertificateRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ScopedCertificateRequest;
asn_struct_free_f ScopedCertificateRequest_free;
asn_struct_print_f ScopedCertificateRequest_print;
asn_constr_check_f ScopedCertificateRequest_constraint;
ber_type_decoder_f ScopedCertificateRequest_decode_ber;
der_type_encoder_f ScopedCertificateRequest_encode_der;
xer_type_decoder_f ScopedCertificateRequest_decode_xer;
xer_type_encoder_f ScopedCertificateRequest_encode_xer;
jer_type_encoder_f ScopedCertificateRequest_encode_jer;
oer_type_decoder_f ScopedCertificateRequest_decode_oer;
oer_type_encoder_f ScopedCertificateRequest_encode_oer;
per_type_decoder_f ScopedCertificateRequest_decode_uper;
per_type_encoder_f ScopedCertificateRequest_encode_uper;
per_type_decoder_f ScopedCertificateRequest_decode_aper;
per_type_encoder_f ScopedCertificateRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ScopedCertificateRequest_H_ */
#include "asn_internal.h"

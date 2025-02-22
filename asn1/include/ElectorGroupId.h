/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "Ieee1609Dot2Dot1CertManagement.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_ElectorGroupId_H_
#define	_ElectorGroupId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ElectorGroupId */
typedef OCTET_STRING_t	 ElectorGroupId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ElectorGroupId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ElectorGroupId;
asn_struct_free_f ElectorGroupId_free;
asn_struct_print_f ElectorGroupId_print;
asn_constr_check_f ElectorGroupId_constraint;
ber_type_decoder_f ElectorGroupId_decode_ber;
der_type_encoder_f ElectorGroupId_encode_der;
xer_type_decoder_f ElectorGroupId_decode_xer;
xer_type_encoder_f ElectorGroupId_encode_xer;
jer_type_encoder_f ElectorGroupId_encode_jer;
oer_type_decoder_f ElectorGroupId_decode_oer;
oer_type_encoder_f ElectorGroupId_encode_oer;
per_type_decoder_f ElectorGroupId_decode_uper;
per_type_encoder_f ElectorGroupId_encode_uper;
per_type_decoder_f ElectorGroupId_decode_aper;
per_type_encoder_f ElectorGroupId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ElectorGroupId_H_ */
#include "asn_internal.h"

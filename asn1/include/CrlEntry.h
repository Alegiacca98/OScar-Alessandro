/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "EtsiTs102941TrustLists.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_CrlEntry_H_
#define	_CrlEntry_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HashedId8.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CrlEntry */
typedef HashedId8_t	 CrlEntry_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CrlEntry_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CrlEntry;
asn_struct_free_f CrlEntry_free;
asn_struct_print_f CrlEntry_print;
asn_constr_check_f CrlEntry_constraint;
ber_type_decoder_f CrlEntry_decode_ber;
der_type_encoder_f CrlEntry_encode_der;
xer_type_decoder_f CrlEntry_decode_xer;
xer_type_encoder_f CrlEntry_encode_xer;
jer_type_encoder_f CrlEntry_encode_jer;
oer_type_decoder_f CrlEntry_decode_oer;
oer_type_encoder_f CrlEntry_encode_oer;
per_type_decoder_f CrlEntry_decode_uper;
per_type_encoder_f CrlEntry_encode_uper;
per_type_decoder_f CrlEntry_decode_aper;
per_type_encoder_f CrlEntry_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CrlEntry_H_ */
#include "asn_internal.h"
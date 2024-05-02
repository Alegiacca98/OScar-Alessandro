/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_BogiesCount_H_
#define	_BogiesCount_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BogiesCount {
	BogiesCount_outOfRange	= 100,
	BogiesCount_unavailable	= 101
} e_BogiesCount;

/* BogiesCount */
typedef long	 BogiesCount_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BogiesCount;
asn_struct_free_f BogiesCount_free;
asn_struct_print_f BogiesCount_print;
asn_constr_check_f BogiesCount_constraint;
ber_type_decoder_f BogiesCount_decode_ber;
der_type_encoder_f BogiesCount_encode_der;
xer_type_decoder_f BogiesCount_decode_xer;
xer_type_encoder_f BogiesCount_encode_xer;
jer_type_encoder_f BogiesCount_encode_jer;
oer_type_decoder_f BogiesCount_decode_oer;
oer_type_encoder_f BogiesCount_encode_oer;
per_type_decoder_f BogiesCount_decode_uper;
per_type_encoder_f BogiesCount_encode_uper;
per_type_decoder_f BogiesCount_decode_aper;
per_type_encoder_f BogiesCount_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BogiesCount_H_ */
#include "asn_internal.h"

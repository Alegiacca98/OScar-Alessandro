/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1AcaRaInterface"
 * 	found in "Ieee1609Dot2Dot1AcaRaInterface.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_pki/`
 */

#ifndef	_RaAcaCertRequest_H_
#define	_RaAcaCertRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Uint8.h"
#include "Time32.h"
#include "CertificateType.h"
#include "RaAcaCertRequestFlags.h"
#include "ToBeSignedCertificate.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LinkageInfo;
struct PublicEncryptionKey;

/* RaAcaCertRequest */
typedef struct RaAcaCertRequest {
	Uint8_t	 version;
	Time32_t	 generationTime;
	CertificateType_t	 type;
	RaAcaCertRequestFlags_t	 flags;
	struct LinkageInfo	*linkageInfo;	/* OPTIONAL */
	struct PublicEncryptionKey	*certEncKey;	/* OPTIONAL */
	ToBeSignedCertificate_t	 tbsCert;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RaAcaCertRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RaAcaCertRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RaAcaCertRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RaAcaCertRequest_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LinkageInfo.h"
#include "PublicEncryptionKey.h"

#endif	/* _RaAcaCertRequest_H_ */
#include "asn_internal.h"
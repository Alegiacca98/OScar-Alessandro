/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/mnt/EVO/ASN1-C-ITS/DSRC.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ConnectionManeuverAssist_addGrpC_H_
#define	_ConnectionManeuverAssist_addGrpC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ItsStationPositionList;

/* ConnectionManeuverAssist-addGrpC */
typedef struct ConnectionManeuverAssist_addGrpC {
	struct ItsStationPositionList	*itsStationPosition	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnectionManeuverAssist_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist_addGrpC;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ItsStationPositionList.h"

#endif	/* _ConnectionManeuverAssist_addGrpC_H_ */
#include "asn_internal.h"

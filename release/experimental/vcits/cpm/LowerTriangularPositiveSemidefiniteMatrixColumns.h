/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_LowerTriangularPositiveSemidefiniteMatrixColumns_H_
#define	_LowerTriangularPositiveSemidefiniteMatrixColumns_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CorrelationColumn;

/* LowerTriangularPositiveSemidefiniteMatrixColumns */
typedef struct LowerTriangularPositiveSemidefiniteMatrixColumns {
	A_SEQUENCE_OF(struct CorrelationColumn) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LowerTriangularPositiveSemidefiniteMatrixColumns_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LowerTriangularPositiveSemidefiniteMatrixColumns;
extern asn_SET_OF_specifics_t asn_SPC_LowerTriangularPositiveSemidefiniteMatrixColumns_specs_1;
extern asn_TYPE_member_t asn_MBR_LowerTriangularPositiveSemidefiniteMatrixColumns_1[1];
extern asn_per_constraints_t asn_PER_type_LowerTriangularPositiveSemidefiniteMatrixColumns_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LowerTriangularPositiveSemidefiniteMatrixColumns_H_ */
#include <asn_internal.h>

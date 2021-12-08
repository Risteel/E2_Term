/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "FrequencyInfoDL.h"

#include "SCS-SpecificCarrier.h"
static int
memb_scs_SpecificCarrierList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_scs_SpecificCarrierList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_type_scs_SpecificCarrierList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_scs_SpecificCarrierList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_memb_scs_SpecificCarrierList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_scs_SpecificCarrierList_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SCS_SpecificCarrier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_scs_SpecificCarrierList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_scs_SpecificCarrierList_specs_5 = {
	sizeof(struct FrequencyInfoDL__scs_SpecificCarrierList),
	offsetof(struct FrequencyInfoDL__scs_SpecificCarrierList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_SpecificCarrierList_5 = {
	"scs-SpecificCarrierList",
	"scs-SpecificCarrierList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_scs_SpecificCarrierList_tags_5,
	sizeof(asn_DEF_scs_SpecificCarrierList_tags_5)
		/sizeof(asn_DEF_scs_SpecificCarrierList_tags_5[0]) - 1, /* 1 */
	asn_DEF_scs_SpecificCarrierList_tags_5,	/* Same as above */
	sizeof(asn_DEF_scs_SpecificCarrierList_tags_5)
		/sizeof(asn_DEF_scs_SpecificCarrierList_tags_5[0]), /* 2 */
	{ &asn_OER_type_scs_SpecificCarrierList_constr_5, &asn_PER_type_scs_SpecificCarrierList_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_scs_SpecificCarrierList_5,
	1,	/* Single element */
	&asn_SPC_scs_SpecificCarrierList_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FrequencyInfoDL_1[] = {
	{ ATF_POINTER, 1, offsetof(struct FrequencyInfoDL, absoluteFrequencySSB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteFrequencySSB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL, absoluteFrequencyPointA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteFrequencyPointA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL, scs_SpecificCarrierList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_scs_SpecificCarrierList_5,
		0,
		{ &asn_OER_memb_scs_SpecificCarrierList_constr_5, &asn_PER_memb_scs_SpecificCarrierList_constr_5,  memb_scs_SpecificCarrierList_constraint_1 },
		0, 0, /* No default value */
		"scs-SpecificCarrierList"
		},
};
static const int asn_MAP_FrequencyInfoDL_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_FrequencyInfoDL_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FrequencyInfoDL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteFrequencySSB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* absoluteFrequencyPointA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* scs-SpecificCarrierList */
};
asn_SEQUENCE_specifics_t asn_SPC_FrequencyInfoDL_specs_1 = {
	sizeof(struct FrequencyInfoDL),
	offsetof(struct FrequencyInfoDL, _asn_ctx),
	asn_MAP_FrequencyInfoDL_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_FrequencyInfoDL_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FrequencyInfoDL = {
	"FrequencyInfoDL",
	"FrequencyInfoDL",
	&asn_OP_SEQUENCE,
	asn_DEF_FrequencyInfoDL_tags_1,
	sizeof(asn_DEF_FrequencyInfoDL_tags_1)
		/sizeof(asn_DEF_FrequencyInfoDL_tags_1[0]), /* 1 */
	asn_DEF_FrequencyInfoDL_tags_1,	/* Same as above */
	sizeof(asn_DEF_FrequencyInfoDL_tags_1)
		/sizeof(asn_DEF_FrequencyInfoDL_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FrequencyInfoDL_1,
	4,	/* Elements count */
	&asn_SPC_FrequencyInfoDL_specs_1	/* Additional specs */
};

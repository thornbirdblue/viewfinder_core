# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_shared_icui18n_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(abspath $(LOCAL_PATH)/third_party/shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES :=

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
GYP_TARGET_DEPENDENCIES += $(GYP_GENERATED_OUTPUTS)

LOCAL_GENERATED_SOURCES :=

GYP_COPIED_SOURCE_ORIGIN_DIRS :=

LOCAL_SRC_FILES := \
	third_party/shared/icu/source/i18n/alphaindex.cpp \
	third_party/shared/icu/source/i18n/anytrans.cpp \
	third_party/shared/icu/source/i18n/astro.cpp \
	third_party/shared/icu/source/i18n/basictz.cpp \
	third_party/shared/icu/source/i18n/bocsu.cpp \
	third_party/shared/icu/source/i18n/brktrans.cpp \
	third_party/shared/icu/source/i18n/buddhcal.cpp \
	third_party/shared/icu/source/i18n/calendar.cpp \
	third_party/shared/icu/source/i18n/casetrn.cpp \
	third_party/shared/icu/source/i18n/cecal.cpp \
	third_party/shared/icu/source/i18n/chnsecal.cpp \
	third_party/shared/icu/source/i18n/choicfmt.cpp \
	third_party/shared/icu/source/i18n/coleitr.cpp \
	third_party/shared/icu/source/i18n/coll.cpp \
	third_party/shared/icu/source/i18n/compactdecimalformat.cpp \
	third_party/shared/icu/source/i18n/coptccal.cpp \
	third_party/shared/icu/source/i18n/cpdtrans.cpp \
	third_party/shared/icu/source/i18n/csdetect.cpp \
	third_party/shared/icu/source/i18n/csmatch.cpp \
	third_party/shared/icu/source/i18n/csr2022.cpp \
	third_party/shared/icu/source/i18n/csrecog.cpp \
	third_party/shared/icu/source/i18n/csrmbcs.cpp \
	third_party/shared/icu/source/i18n/csrsbcs.cpp \
	third_party/shared/icu/source/i18n/csrucode.cpp \
	third_party/shared/icu/source/i18n/csrutf8.cpp \
	third_party/shared/icu/source/i18n/curramt.cpp \
	third_party/shared/icu/source/i18n/currfmt.cpp \
	third_party/shared/icu/source/i18n/currpinf.cpp \
	third_party/shared/icu/source/i18n/currunit.cpp \
	third_party/shared/icu/source/i18n/dangical.cpp \
	third_party/shared/icu/source/i18n/datefmt.cpp \
	third_party/shared/icu/source/i18n/dcfmtsym.cpp \
	third_party/shared/icu/source/i18n/decContext.c \
	third_party/shared/icu/source/i18n/decNumber.c \
	third_party/shared/icu/source/i18n/decfmtst.cpp \
	third_party/shared/icu/source/i18n/decimfmt.cpp \
	third_party/shared/icu/source/i18n/digitlst.cpp \
	third_party/shared/icu/source/i18n/dtfmtsym.cpp \
	third_party/shared/icu/source/i18n/dtitvfmt.cpp \
	third_party/shared/icu/source/i18n/dtitvinf.cpp \
	third_party/shared/icu/source/i18n/dtptngen.cpp \
	third_party/shared/icu/source/i18n/dtrule.cpp \
	third_party/shared/icu/source/i18n/esctrn.cpp \
	third_party/shared/icu/source/i18n/ethpccal.cpp \
	third_party/shared/icu/source/i18n/fmtable.cpp \
	third_party/shared/icu/source/i18n/fmtable_cnv.cpp \
	third_party/shared/icu/source/i18n/format.cpp \
	third_party/shared/icu/source/i18n/fphdlimp.cpp \
	third_party/shared/icu/source/i18n/fpositer.cpp \
	third_party/shared/icu/source/i18n/funcrepl.cpp \
	third_party/shared/icu/source/i18n/gender.cpp \
	third_party/shared/icu/source/i18n/gregocal.cpp \
	third_party/shared/icu/source/i18n/gregoimp.cpp \
	third_party/shared/icu/source/i18n/hebrwcal.cpp \
	third_party/shared/icu/source/i18n/identifier_info.cpp \
	third_party/shared/icu/source/i18n/indiancal.cpp \
	third_party/shared/icu/source/i18n/inputext.cpp \
	third_party/shared/icu/source/i18n/islamcal.cpp \
	third_party/shared/icu/source/i18n/japancal.cpp \
	third_party/shared/icu/source/i18n/locdspnm.cpp \
	third_party/shared/icu/source/i18n/measfmt.cpp \
	third_party/shared/icu/source/i18n/measure.cpp \
	third_party/shared/icu/source/i18n/msgfmt.cpp \
	third_party/shared/icu/source/i18n/name2uni.cpp \
	third_party/shared/icu/source/i18n/nfrs.cpp \
	third_party/shared/icu/source/i18n/nfrule.cpp \
	third_party/shared/icu/source/i18n/nfsubs.cpp \
	third_party/shared/icu/source/i18n/nortrans.cpp \
	third_party/shared/icu/source/i18n/nultrans.cpp \
	third_party/shared/icu/source/i18n/numfmt.cpp \
	third_party/shared/icu/source/i18n/numsys.cpp \
	third_party/shared/icu/source/i18n/olsontz.cpp \
	third_party/shared/icu/source/i18n/persncal.cpp \
	third_party/shared/icu/source/i18n/plurfmt.cpp \
	third_party/shared/icu/source/i18n/plurrule.cpp \
	third_party/shared/icu/source/i18n/quant.cpp \
	third_party/shared/icu/source/i18n/rbnf.cpp \
	third_party/shared/icu/source/i18n/rbt.cpp \
	third_party/shared/icu/source/i18n/rbt_data.cpp \
	third_party/shared/icu/source/i18n/rbt_pars.cpp \
	third_party/shared/icu/source/i18n/rbt_rule.cpp \
	third_party/shared/icu/source/i18n/rbt_set.cpp \
	third_party/shared/icu/source/i18n/rbtz.cpp \
	third_party/shared/icu/source/i18n/regexcmp.cpp \
	third_party/shared/icu/source/i18n/regeximp.cpp \
	third_party/shared/icu/source/i18n/regexst.cpp \
	third_party/shared/icu/source/i18n/regextxt.cpp \
	third_party/shared/icu/source/i18n/region.cpp \
	third_party/shared/icu/source/i18n/reldtfmt.cpp \
	third_party/shared/icu/source/i18n/rematch.cpp \
	third_party/shared/icu/source/i18n/remtrans.cpp \
	third_party/shared/icu/source/i18n/repattrn.cpp \
	third_party/shared/icu/source/i18n/scriptset.cpp \
	third_party/shared/icu/source/i18n/search.cpp \
	third_party/shared/icu/source/i18n/selfmt.cpp \
	third_party/shared/icu/source/i18n/simpletz.cpp \
	third_party/shared/icu/source/i18n/smpdtfmt.cpp \
	third_party/shared/icu/source/i18n/smpdtfst.cpp \
	third_party/shared/icu/source/i18n/sortkey.cpp \
	third_party/shared/icu/source/i18n/strmatch.cpp \
	third_party/shared/icu/source/i18n/strrepl.cpp \
	third_party/shared/icu/source/i18n/stsearch.cpp \
	third_party/shared/icu/source/i18n/taiwncal.cpp \
	third_party/shared/icu/source/i18n/tblcoll.cpp \
	third_party/shared/icu/source/i18n/timezone.cpp \
	third_party/shared/icu/source/i18n/titletrn.cpp \
	third_party/shared/icu/source/i18n/tmunit.cpp \
	third_party/shared/icu/source/i18n/tmutamt.cpp \
	third_party/shared/icu/source/i18n/tmutfmt.cpp \
	third_party/shared/icu/source/i18n/tolowtrn.cpp \
	third_party/shared/icu/source/i18n/toupptrn.cpp \
	third_party/shared/icu/source/i18n/translit.cpp \
	third_party/shared/icu/source/i18n/transreg.cpp \
	third_party/shared/icu/source/i18n/tridpars.cpp \
	third_party/shared/icu/source/i18n/tzfmt.cpp \
	third_party/shared/icu/source/i18n/tzgnames.cpp \
	third_party/shared/icu/source/i18n/tznames.cpp \
	third_party/shared/icu/source/i18n/tznames_impl.cpp \
	third_party/shared/icu/source/i18n/tzrule.cpp \
	third_party/shared/icu/source/i18n/tztrans.cpp \
	third_party/shared/icu/source/i18n/ucal.cpp \
	third_party/shared/icu/source/i18n/ucln_in.c \
	third_party/shared/icu/source/i18n/ucol.cpp \
	third_party/shared/icu/source/i18n/ucol_bld.cpp \
	third_party/shared/icu/source/i18n/ucol_cnt.cpp \
	third_party/shared/icu/source/i18n/ucol_elm.cpp \
	third_party/shared/icu/source/i18n/ucol_res.cpp \
	third_party/shared/icu/source/i18n/ucol_sit.cpp \
	third_party/shared/icu/source/i18n/ucol_tok.cpp \
	third_party/shared/icu/source/i18n/ucol_wgt.cpp \
	third_party/shared/icu/source/i18n/ucoleitr.cpp \
	third_party/shared/icu/source/i18n/ucsdet.cpp \
	third_party/shared/icu/source/i18n/ucurr.cpp \
	third_party/shared/icu/source/i18n/udat.cpp \
	third_party/shared/icu/source/i18n/udateintervalformat.cpp \
	third_party/shared/icu/source/i18n/udatpg.cpp \
	third_party/shared/icu/source/i18n/ulocdata.c \
	third_party/shared/icu/source/i18n/umsg.cpp \
	third_party/shared/icu/source/i18n/unesctrn.cpp \
	third_party/shared/icu/source/i18n/uni2name.cpp \
	third_party/shared/icu/source/i18n/unum.cpp \
	third_party/shared/icu/source/i18n/upluralrules.cpp \
	third_party/shared/icu/source/i18n/uregex.cpp \
	third_party/shared/icu/source/i18n/uregexc.cpp \
	third_party/shared/icu/source/i18n/usearch.cpp \
	third_party/shared/icu/source/i18n/uspoof.cpp \
	third_party/shared/icu/source/i18n/uspoof_build.cpp \
	third_party/shared/icu/source/i18n/uspoof_conf.cpp \
	third_party/shared/icu/source/i18n/uspoof_impl.cpp \
	third_party/shared/icu/source/i18n/uspoof_wsconf.cpp \
	third_party/shared/icu/source/i18n/utmscale.c \
	third_party/shared/icu/source/i18n/utrans.cpp \
	third_party/shared/icu/source/i18n/vtzone.cpp \
	third_party/shared/icu/source/i18n/vzone.cpp \
	third_party/shared/icu/source/i18n/windtfmt.cpp \
	third_party/shared/icu/source/i18n/winnmfmt.cpp \
	third_party/shared/icu/source/i18n/wintzimpl.cpp \
	third_party/shared/icu/source/i18n/zonemeta.cpp \
	third_party/shared/icu/source/i18n/zrule.cpp \
	third_party/shared/icu/source/i18n/ztrans.cpp


# Flags passed to both C and C++ files.
MY_CFLAGS_Default := \
	-DU_STATIC_IMPLEMENTATION \
	-DU_USING_ICU_NAMESPACE=0 \
	-DU_CHARSET_IS_UTF8=1 \
	-DU_NO_DEFAULT_INCLUDE_UTF_HEADERS1 \
	-D__ANDROID__ \
	-DU_HAVE_STD_STRING=1 \
	-DU_I18N_IMPLEMENTATION

MY_DEFS_Default := \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Default := \
	$(LOCAL_PATH)/third_party/shared/icu/source/common \
	$(LOCAL_PATH)/third_party/shared/icu/source/i18n \
	$(LOCAL_PATH)/third_party/shared/icu/source/tools/tzcode


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Default := \
	-std=c++11 \
	-stdlib=libc++ \
	-frtti \
	-g \
	-Wno-deprecated-declarations \
	-Wno-logical-op-parentheses \
	-Wno-tautological-compare \
	-Wno-header-hygiene \
	-Wno-return-type-c-linkage \
	-frtti \
	-fno-exceptions


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
### Rules for final target.

LOCAL_LDFLAGS_Default :=


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES :=

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES :=

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_shared_icui18n_gyp

# Alias gyp target name.
.PHONY: icui18n
icui18n: third_party_shared_icui18n_gyp

include $(BUILD_STATIC_LIBRARY)

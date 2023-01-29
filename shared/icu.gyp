# Reference: https://code.google.com/p/chromium-source-browsing/source/browse/icu.gyp?repo=third-party--icu
{
  'target_defaults': {
    'conditions': [
      ['OS=="ios"', {
        'defines': [
          'U_STATIC_IMPLEMENTATION',
          # These options are recommended at http://source.icu-project.org/repos/icu/icu/trunk/readme.html
          'U_USING_ICU_NAMESPACE=0',
          'U_CHARSET_IS_UTF8=1',
          'U_NO_DEFAULT_INCLUDE_UTF_HEADERS1',
        ],
      }],
      ['OS=="android"', {
        'cflags': [
          '-DU_STATIC_IMPLEMENTATION',
          # These options are recommended at http://source.icu-project.org/repos/icu/icu/trunk/readme.html
          '-DU_USING_ICU_NAMESPACE=0',
          '-DU_CHARSET_IS_UTF8=1',
          '-DU_NO_DEFAULT_INCLUDE_UTF_HEADERS1',
          '-D__ANDROID__',
          '-DU_HAVE_STD_STRING=1',
        ],
      }],
    ],
    'include_dirs': [
      'icu/source/common',
      'icu/source/i18n',
      # Time zone database compatibility, needed to build for iOS devices.
      'icu/source/tools/tzcode',
    ],
  },
  'targets': [
    {
      'target_name': 'icudata',
      'type': 'static_library',
      'sources': [
        'icu/source/stubdata/stubdata.c',
      ],
    },
    {
      'target_name': 'icui18n',
      'type': 'static_library',
      'dependencies': [
        'icuuc',
      ],
      'all_dependent_settings': {
        'include_dirs': [
          'icu/source/i18n',
        ],
      },
      'conditions': [
        ['OS=="ios"', {
          'xcode_settings': {
            'GCC_ENABLE_CPP_RTTI': 'YES',       # -frtti
            'WARNING_CFLAGS': [
              # ICU uses its own deprecated functions.
              '-Wno-deprecated-declarations',
              # ICU prefers `a && b || c` over `(a && b) || c`.
              '-Wno-logical-op-parentheses',
              # ICU has some `unsigned < 0` checks.
              '-Wno-tautological-compare',
              # uspoof.h has a U_NAMESPACE_USE macro. That's a bug,
              # the header should use U_NAMESPACE_BEGIN instead.
              # http://bugs.icu-project.org/trac/ticket/9054
              '-Wno-header-hygiene',
              # Looks like a real issue, see http://crbug.com/114660
              '-Wno-return-type-c-linkage',
            ],
          },
          'defines': [
            'U_I18N_IMPLEMENTATION',
          ],
      }, ],
        ['OS=="android"', {
          'cflags_cc': [
            # ICU uses its own deprecated functions.
            '-Wno-deprecated-declarations',
            # ICU prefers `a && b || c` over `(a && b) || c`.
            '-Wno-logical-op-parentheses',
            # ICU has some `unsigned < 0` checks.
            '-Wno-tautological-compare',
            # uspoof.h has a U_NAMESPACE_USE macro. That's a bug,
            # the header should use U_NAMESPACE_BEGIN instead.
            # http://bugs.icu-project.org/trac/ticket/9054
            '-Wno-header-hygiene',
            # Looks like a real issue, see http://crbug.com/114660
            '-Wno-return-type-c-linkage',
            # Enable RTTI.
            '-frtti',
            '-fno-exceptions',
          ],
          'cflags': [
            '-DU_I18N_IMPLEMENTATION',
          ],
        },
      ],
      ],
      'sources': [
        'icu/source/i18n/alphaindex.cpp',
        'icu/source/i18n/anytrans.cpp',
        'icu/source/i18n/astro.cpp',
        'icu/source/i18n/basictz.cpp',
        'icu/source/i18n/bocsu.cpp',
        'icu/source/i18n/brktrans.cpp',
        'icu/source/i18n/buddhcal.cpp',
        'icu/source/i18n/calendar.cpp',
        'icu/source/i18n/casetrn.cpp',
        'icu/source/i18n/cecal.cpp',
        'icu/source/i18n/chnsecal.cpp',
        'icu/source/i18n/choicfmt.cpp',
        'icu/source/i18n/coleitr.cpp',
        'icu/source/i18n/coll.cpp',
        'icu/source/i18n/compactdecimalformat.cpp',
        'icu/source/i18n/coptccal.cpp',
        'icu/source/i18n/cpdtrans.cpp',
        'icu/source/i18n/csdetect.cpp',
        'icu/source/i18n/csmatch.cpp',
        'icu/source/i18n/csr2022.cpp',
        'icu/source/i18n/csrecog.cpp',
        'icu/source/i18n/csrmbcs.cpp',
        'icu/source/i18n/csrsbcs.cpp',
        'icu/source/i18n/csrucode.cpp',
        'icu/source/i18n/csrutf8.cpp',
        'icu/source/i18n/curramt.cpp',
        'icu/source/i18n/currfmt.cpp',
        'icu/source/i18n/currpinf.cpp',
        'icu/source/i18n/currunit.cpp',
        'icu/source/i18n/dangical.cpp',
        'icu/source/i18n/datefmt.cpp',
        'icu/source/i18n/dcfmtsym.cpp',
        'icu/source/i18n/decContext.c',
        'icu/source/i18n/decNumber.c',
        'icu/source/i18n/decfmtst.cpp',
        'icu/source/i18n/decimfmt.cpp',
        'icu/source/i18n/digitlst.cpp',
        'icu/source/i18n/dtfmtsym.cpp',
        'icu/source/i18n/dtitvfmt.cpp',
        'icu/source/i18n/dtitvinf.cpp',
        'icu/source/i18n/dtptngen.cpp',
        'icu/source/i18n/dtrule.cpp',
        'icu/source/i18n/esctrn.cpp',
        'icu/source/i18n/ethpccal.cpp',
        'icu/source/i18n/fmtable.cpp',
        'icu/source/i18n/fmtable_cnv.cpp',
        'icu/source/i18n/format.cpp',
        'icu/source/i18n/fphdlimp.cpp',
        'icu/source/i18n/fpositer.cpp',
        'icu/source/i18n/funcrepl.cpp',
        'icu/source/i18n/gender.cpp',
        'icu/source/i18n/gregocal.cpp',
        'icu/source/i18n/gregoimp.cpp',
        'icu/source/i18n/hebrwcal.cpp',
        'icu/source/i18n/identifier_info.cpp',
        'icu/source/i18n/indiancal.cpp',
        'icu/source/i18n/inputext.cpp',
        'icu/source/i18n/islamcal.cpp',
        'icu/source/i18n/japancal.cpp',
        'icu/source/i18n/locdspnm.cpp',
        'icu/source/i18n/measfmt.cpp',
        'icu/source/i18n/measure.cpp',
        'icu/source/i18n/msgfmt.cpp',
        'icu/source/i18n/name2uni.cpp',
        'icu/source/i18n/nfrs.cpp',
        'icu/source/i18n/nfrule.cpp',
        'icu/source/i18n/nfsubs.cpp',
        'icu/source/i18n/nortrans.cpp',
        'icu/source/i18n/nultrans.cpp',
        'icu/source/i18n/numfmt.cpp',
        'icu/source/i18n/numsys.cpp',
        'icu/source/i18n/olsontz.cpp',
        'icu/source/i18n/persncal.cpp',
        'icu/source/i18n/plurfmt.cpp',
        'icu/source/i18n/plurrule.cpp',
        'icu/source/i18n/quant.cpp',
        'icu/source/i18n/rbnf.cpp',
        'icu/source/i18n/rbt.cpp',
        'icu/source/i18n/rbt_data.cpp',
        'icu/source/i18n/rbt_pars.cpp',
        'icu/source/i18n/rbt_rule.cpp',
        'icu/source/i18n/rbt_set.cpp',
        'icu/source/i18n/rbtz.cpp',
        'icu/source/i18n/regexcmp.cpp',
        'icu/source/i18n/regeximp.cpp',
        'icu/source/i18n/regexst.cpp',
        'icu/source/i18n/regextxt.cpp',
        'icu/source/i18n/region.cpp',
        'icu/source/i18n/reldtfmt.cpp',
        'icu/source/i18n/rematch.cpp',
        'icu/source/i18n/remtrans.cpp',
        'icu/source/i18n/repattrn.cpp',
        'icu/source/i18n/scriptset.cpp',
        'icu/source/i18n/search.cpp',
        'icu/source/i18n/selfmt.cpp',
        'icu/source/i18n/simpletz.cpp',
        'icu/source/i18n/smpdtfmt.cpp',
        'icu/source/i18n/smpdtfst.cpp',
        'icu/source/i18n/sortkey.cpp',
        'icu/source/i18n/strmatch.cpp',
        'icu/source/i18n/strrepl.cpp',
        'icu/source/i18n/stsearch.cpp',
        'icu/source/i18n/taiwncal.cpp',
        'icu/source/i18n/tblcoll.cpp',
        'icu/source/i18n/timezone.cpp',
        'icu/source/i18n/titletrn.cpp',
        'icu/source/i18n/tmunit.cpp',
        'icu/source/i18n/tmutamt.cpp',
        'icu/source/i18n/tmutfmt.cpp',
        'icu/source/i18n/tolowtrn.cpp',
        'icu/source/i18n/toupptrn.cpp',
        'icu/source/i18n/translit.cpp',
        'icu/source/i18n/transreg.cpp',
        'icu/source/i18n/tridpars.cpp',
        'icu/source/i18n/tzfmt.cpp',
        'icu/source/i18n/tzgnames.cpp',
        'icu/source/i18n/tznames.cpp',
        'icu/source/i18n/tznames_impl.cpp',
        'icu/source/i18n/tzrule.cpp',
        'icu/source/i18n/tztrans.cpp',
        'icu/source/i18n/ucal.cpp',
        'icu/source/i18n/ucln_in.c',
        'icu/source/i18n/ucol.cpp',
        'icu/source/i18n/ucol_bld.cpp',
        'icu/source/i18n/ucol_cnt.cpp',
        'icu/source/i18n/ucol_elm.cpp',
        'icu/source/i18n/ucol_res.cpp',
        'icu/source/i18n/ucol_sit.cpp',
        'icu/source/i18n/ucol_tok.cpp',
        'icu/source/i18n/ucol_wgt.cpp',
        'icu/source/i18n/ucoleitr.cpp',
        'icu/source/i18n/ucsdet.cpp',
        'icu/source/i18n/ucurr.cpp',
        'icu/source/i18n/udat.cpp',
        'icu/source/i18n/udateintervalformat.cpp',
        'icu/source/i18n/udatpg.cpp',
        'icu/source/i18n/ulocdata.c',
        'icu/source/i18n/umsg.cpp',
        'icu/source/i18n/unesctrn.cpp',
        'icu/source/i18n/uni2name.cpp',
        'icu/source/i18n/unum.cpp',
        'icu/source/i18n/upluralrules.cpp',
        'icu/source/i18n/uregex.cpp',
        'icu/source/i18n/uregexc.cpp',
        'icu/source/i18n/usearch.cpp',
        'icu/source/i18n/uspoof.cpp',
        'icu/source/i18n/uspoof_build.cpp',
        'icu/source/i18n/uspoof_conf.cpp',
        'icu/source/i18n/uspoof_impl.cpp',
        'icu/source/i18n/uspoof_wsconf.cpp',
        'icu/source/i18n/utmscale.c',
        'icu/source/i18n/utrans.cpp',
        'icu/source/i18n/vtzone.cpp',
        'icu/source/i18n/vzone.cpp',
        'icu/source/i18n/windtfmt.cpp',
        'icu/source/i18n/winnmfmt.cpp',
        'icu/source/i18n/wintzimpl.cpp',
        'icu/source/i18n/zonemeta.cpp',
        'icu/source/i18n/zrule.cpp',
        'icu/source/i18n/ztrans.cpp',
        'icu/source/i18ncpp',
      ],
    },
    {
      'target_name': 'icuuc',
      'type': 'static_library',
      'dependencies': [
        'icudata',
      ],
      'all_dependent_settings': {
        'include_dirs': [
          'icu/source/common',
        ],
      },
      'conditions': [
        ['OS=="ios"', {
          'xcode_settings': {
            'WARNING_CFLAGS': [
              # ICU uses its own deprecated functions.
              '-Wno-deprecated-declarations',
              # ICU prefers `a && b || c` over `(a && b) || c`.
              '-Wno-logical-op-parentheses',
              # ICU has some `unsigned < 0` checks.
              '-Wno-tautological-compare',
              # uresdata.c has switch(RES_GET_TYPE(x)) code. The
              # RES_GET_TYPE macro returns an UResType enum, but some switch
              # statement contains case values that aren't part of that
              # enum (e.g. URES_TABLE32 which is in UResInternalType). This
              # is on purpose.
              '-Wno-switch',
            ],
          },
          'defines': [
            'U_COMMON_IMPLEMENTATION',
          ],
        },],
        ['OS=="android"', {
          'cflags_cc': [
            # ICU uses its own deprecated functions.
            '-Wno-deprecated-declarations',
            # ICU prefers `a && b || c` over `(a && b) || c`.
            '-Wno-logical-op-parentheses',
            # ICU has some `unsigned < 0` checks.
            '-Wno-tautological-compare',
            # uspoof.h has a U_NAMESPACE_USE macro. That's a bug,
            # the header should use U_NAMESPACE_BEGIN instead.
            # http://bugs.icu-project.org/trac/ticket/9054
            '-Wno-header-hygiene',
            # Looks like a real issue, see http://crbug.com/114660
            '-Wno-return-type-c-linkage',
            # Enable RTTI.
            '-frtti',
            '-fno-exceptions',
            # Path relativisation in 'include_dirs' makes this tricky.
            '-I<(DEPTH)/../android-ndk/sources/android/support/include',
          ],
          'cflags': [
            '-DU_COMMON_IMPLEMENTATION',
          ],
        },],
      ],
      'sources': [
        'icu/source/common/appendable.cpp',
        'icu/source/common/bmpset.cpp',
        'icu/source/common/brkeng.cpp',
        'icu/source/common/brkiter.cpp',
        'icu/source/common/bytestream.cpp',
        'icu/source/common/bytestrie.cpp',
        'icu/source/common/bytestriebuilder.cpp',
        'icu/source/common/bytestrieiterator.cpp',
        'icu/source/common/caniter.cpp',
        'icu/source/common/chariter.cpp',
        'icu/source/common/charstr.cpp',
        'icu/source/common/cmemory.c',
        'icu/source/common/cstring.c',
        'icu/source/common/cwchar.c',
        'icu/source/common/dictbe.cpp',
        'icu/source/common/dictionarydata.cpp',
        'icu/source/common/dtintrv.cpp',
        'icu/source/common/errorcode.cpp',
        'icu/source/common/filterednormalizer2.cpp',
        'icu/source/common/icudataver.c',
        'icu/source/common/icuplug.c',
        'icu/source/common/listformatter.cpp',
        'icu/source/common/locavailable.cpp',
        'icu/source/common/locbased.cpp',
        'icu/source/common/locdispnames.cpp',
        'icu/source/common/locid.cpp',
        'icu/source/common/loclikely.cpp',
        'icu/source/common/locmap.c',
        'icu/source/common/locresdata.cpp',
        'icu/source/common/locutil.cpp',
        'icu/source/common/messagepattern.cpp',
        'icu/source/common/mutex.cpp',
        'icu/source/common/normalizer2.cpp',
        'icu/source/common/normalizer2impl.cpp',
        'icu/source/common/normlzr.cpp',
        'icu/source/common/parsepos.cpp',
        'icu/source/common/patternprops.cpp',
        'icu/source/common/propname.cpp',
        'icu/source/common/propsvec.c',
        'icu/source/common/punycode.cpp',
        'icu/source/common/putil.cpp',
        'icu/source/common/rbbi.cpp',
        'icu/source/common/rbbidata.cpp',
        'icu/source/common/rbbinode.cpp',
        'icu/source/common/rbbirb.cpp',
        'icu/source/common/rbbiscan.cpp',
        'icu/source/common/rbbisetb.cpp',
        'icu/source/common/rbbistbl.cpp',
        'icu/source/common/rbbitblb.cpp',
        'icu/source/common/resbund.cpp',
        'icu/source/common/resbund_cnv.cpp',
        'icu/source/common/ruleiter.cpp',
        'icu/source/common/schriter.cpp',
        'icu/source/common/serv.cpp',
        'icu/source/common/servlk.cpp',
        'icu/source/common/servlkf.cpp',
        'icu/source/common/servls.cpp',
        'icu/source/common/servnotf.cpp',
        'icu/source/common/servrbf.cpp',
        'icu/source/common/servslkf.cpp',
        'icu/source/common/stringpiece.cpp',
        'icu/source/common/stringtriebuilder.cpp',
        'icu/source/common/uarrsort.c',
        'icu/source/common/ubidi.c',
        'icu/source/common/ubidi_props.c',
        'icu/source/common/ubidiln.c',
        'icu/source/common/ubidiwrt.c',
        'icu/source/common/ubrk.cpp',
        'icu/source/common/ucase.cpp',
        'icu/source/common/ucasemap.cpp',
        'icu/source/common/ucasemap_titlecase_brkiter.cpp',
        'icu/source/common/ucat.c',
        'icu/source/common/uchar.c',
        'icu/source/common/ucharstrie.cpp',
        'icu/source/common/ucharstriebuilder.cpp',
        'icu/source/common/ucharstrieiterator.cpp',
        'icu/source/common/uchriter.cpp',
        'icu/source/common/ucln_cmn.c',
        'icu/source/common/ucmndata.c',
        'icu/source/common/ucnv.c',
        'icu/source/common/ucnv2022.cpp',
        'icu/source/common/ucnv_bld.cpp',
        'icu/source/common/ucnv_cb.c',
        'icu/source/common/ucnv_cnv.c',
        'icu/source/common/ucnv_ct.c',
        'icu/source/common/ucnv_err.c',
        'icu/source/common/ucnv_ext.cpp',
        'icu/source/common/ucnv_io.cpp',
        'icu/source/common/ucnv_lmb.c',
        'icu/source/common/ucnv_set.c',
        'icu/source/common/ucnv_u16.c',
        'icu/source/common/ucnv_u32.c',
        'icu/source/common/ucnv_u7.c',
        'icu/source/common/ucnv_u8.c',
        'icu/source/common/ucnvbocu.cpp',
        'icu/source/common/ucnvdisp.c',
        'icu/source/common/ucnvhz.c',
        'icu/source/common/ucnvisci.c',
        'icu/source/common/ucnvlat1.c',
        'icu/source/common/ucnvmbcs.c',
        'icu/source/common/ucnvscsu.c',
        'icu/source/common/ucnvsel.cpp',
        'icu/source/common/ucol_swp.cpp',
        'icu/source/common/udata.cpp',
        'icu/source/common/udatamem.c',
        'icu/source/common/udataswp.c',
        'icu/source/common/uenum.c',
        'icu/source/common/uhash.c',
        'icu/source/common/uhash_us.cpp',
        'icu/source/common/uidna.cpp',
        'icu/source/common/uinit.c',
        'icu/source/common/uinvchar.c',
        'icu/source/common/uiter.cpp',
        'icu/source/common/ulist.c',
        'icu/source/common/uloc.cpp',
        'icu/source/common/uloc_tag.c',
        'icu/source/common/umapfile.c',
        'icu/source/common/umath.c',
        'icu/source/common/umutex.cpp',
        'icu/source/common/unames.cpp',
        'icu/source/common/unifilt.cpp',
        'icu/source/common/unifunct.cpp',
        'icu/source/common/uniset.cpp',
        'icu/source/common/uniset_closure.cpp',
        'icu/source/common/uniset_props.cpp',
        'icu/source/common/unisetspan.cpp',
        'icu/source/common/unistr.cpp',
        'icu/source/common/unistr_case.cpp',
        'icu/source/common/unistr_case_locale.cpp',
        'icu/source/common/unistr_cnv.cpp',
        'icu/source/common/unistr_props.cpp',
        'icu/source/common/unistr_titlecase_brkiter.cpp',
        'icu/source/common/unorm.cpp',
        'icu/source/common/unorm_it.c',
        'icu/source/common/unormcmp.cpp',
        'icu/source/common/uobject.cpp',
        'icu/source/common/uprops.cpp',
        'icu/source/common/ures_cnv.c',
        'icu/source/common/uresbund.cpp',
        'icu/source/common/uresdata.c',
        'icu/source/common/usc_impl.c',
        'icu/source/common/uscript.c',
        'icu/source/common/uscript_props.cpp',
        'icu/source/common/uset.cpp',
        'icu/source/common/uset_props.cpp',
        'icu/source/common/usetiter.cpp',
        'icu/source/common/ushape.cpp',
        'icu/source/common/usprep.cpp',
        'icu/source/common/ustack.cpp',
        'icu/source/common/ustr_cnv.c',
        'icu/source/common/ustr_titlecase_brkiter.cpp',
        'icu/source/common/ustr_wcs.cpp',
        'icu/source/common/ustrcase.cpp',
        'icu/source/common/ustrcase_locale.cpp',
        'icu/source/common/ustrenum.cpp',
        'icu/source/common/ustrfmt.c',
        'icu/source/common/ustring.cpp',
        'icu/source/common/ustrtrns.cpp',
        'icu/source/common/utext.cpp',
        'icu/source/common/utf_impl.c',
        'icu/source/common/util.cpp',
        'icu/source/common/util_props.cpp',
        'icu/source/common/utrace.c',
        'icu/source/common/utrie.cpp',
        'icu/source/common/utrie2.cpp',
        'icu/source/common/utrie2_builder.cpp',
        'icu/source/common/uts46.cpp',
        'icu/source/common/utypes.c',
        'icu/source/common/uvector.cpp',
        'icu/source/common/uvectr32.cpp',
        'icu/source/common/uvectr64.cpp',
        'icu/source/common/wintz.c',
      ],
    },
  ],
}

/*
 * cblas_f77.h
 * Written by Keita Teranishi
 *
 * Updated by Jeff Horner
 * Merged cblas_f77.h and cblas_fortran_header.h
 */

#ifndef CBLAS_F77_H
#define CBLAS_f77_H

#ifdef CRAY
   #include <fortran.h>
   #define F77_CHAR _fcd
   #define C2F_CHAR(a) ( _cptofcd( (a), 1 ) )
   #define C2F_STR(a, i) ( _cptofcd( (a), (i) ) )
   #define F77_STRLEN(a) (_fcdlen)
#endif

#ifdef WeirdNEC
   #define F77_INT long
#endif

#ifdef  F77_CHAR
   #define FCHAR F77_CHAR
#else
   #define FCHAR char *
#endif

#ifdef F77_INT
   #define FINT const F77_INT *
   #define FINT2 F77_INT *
#else
   #define FINT const int *
   #define FINT2 int *
#endif

#if defined(ADD_)
/*
 * Level 1 BLAS
 */
#define F77_xerbla xerbla_
   #define F77_srotg      f2c_srotg
   #define F77_srotmg     f2c_srotmg
   #define F77_srot       f2c_srot
   #define F77_srotm      f2c_srotm
   #define F77_drotg      f2c_drotg
   #define F77_drotmg     f2c_drotmg
   #define F77_drot       f2c_drot
   #define F77_drotm      f2c_drotm
   #define F77_sswap      f2c_sswap
   #define F77_scopy      f2c_scopy
   #define F77_saxpy      f2c_saxpy
   #define F77_isamax_sub f2c_isamax
   #define F77_dswap      f2c_dswap
   #define F77_dcopy      f2c_dcopy
   #define F77_daxpy      f2c_daxpy
   #define F77_idamax_sub f2c_idamax
   #define F77_cswap      f2c_cswap
   #define F77_ccopy      f2c_ccopy
   #define F77_caxpy      f2c_caxpy
   #define F77_icamax_sub f2c_icamax
   #define F77_zswap      f2c_zswap
   #define F77_zcopy      f2c_zcopy
   #define F77_zaxpy      f2c_zaxpy
   #define F77_izamax_sub f2c_izamax
   #define F77_sdot_sub   f2c_sdot
   #define F77_ddot_sub   f2c_ddot
   #define F77_dsdot_sub   f2c_dsdotsub
   #define F77_sscal      f2c_sscal
   #define F77_dscal      f2c_dscal
   #define F77_cscal      f2c_cscal
   #define F77_zscal      f2c_zscal
   #define F77_csscal      f2c_csscal
   #define F77_zdscal      f2c_zdscal
   #define F77_cdotu_sub  f2c_cdotu
   #define F77_cdotc_sub  f2c_cdotc
   #define F77_zdotu_sub  f2c_zdotu
   #define F77_zdotc_sub  f2c_zdotc
   #define F77_snrm2_sub  f2c_snrm2
   #define F77_sasum_sub  f2c_sasum
   #define F77_dnrm2_sub  f2c_dnrm2
   #define F77_dasum_sub  f2c_dasum
   #define F77_scnrm2_sub  f2c_scnrm2
   #define F77_scasum_sub  f2c_scasum
   #define F77_dznrm2_sub  f2c_dznrm2
   #define F77_dzasum_sub  f2c_dzasum
   #define F77_sdsdot_sub  f2c_sdsdotsub
/*
 * Level 2 BLAS
 */
   #define F77_ssymv      f2c_ssymv
   #define F77_ssbmv      f2c_ssbmv
   #define F77_sspmv      f2c_sspmv
   #define F77_sger       f2c_sger
   #define F77_ssyr       f2c_ssyr
   #define F77_sspr       f2c_sspr
   #define F77_ssyr2      f2c_ssyr2
   #define F77_sspr2      f2c_sspr2
   #define F77_dsymv      f2c_dsymv
   #define F77_dsbmv      f2c_dsbmv
   #define F77_dspmv      f2c_dspmv
   #define F77_dger       f2c_dger
   #define F77_dsyr       f2c_dsyr
   #define F77_dspr       f2c_dspr
   #define F77_dsyr2      f2c_dsyr2
   #define F77_dspr2      f2c_dspr2
   #define F77_chemv      f2c_chemv
   #define F77_chbmv      f2c_chbmv
   #define F77_chpmv      f2c_chpmv
   #define F77_cgeru      f2c_cgeru
   #define F77_cgerc      f2c_cgerc
   #define F77_cher       f2c_cher
   #define F77_chpr       f2c_chpr
   #define F77_cher2      f2c_cher2
   #define F77_chpr2      f2c_chpr2
   #define F77_zhemv      f2c_zhemv
   #define F77_zhbmv      f2c_zhbmv
   #define F77_zhpmv      f2c_zhpmv
   #define F77_zgeru      f2c_zgeru
   #define F77_zgerc      f2c_zgerc
   #define F77_zher       f2c_zher
   #define F77_zhpr       f2c_zhpr
   #define F77_zher2      f2c_zher2
   #define F77_zhpr2      f2c_zhpr2
   #define F77_sgemv      f2c_sgemv
   #define F77_sgbmv      f2c_sgbmv
   #define F77_strmv      f2c_strmv
   #define F77_stbmv      f2c_stbmv
   #define F77_stpmv      f2c_stpmv
   #define F77_strsv      f2c_strsv
   #define F77_stbsv      f2c_stbsv
   #define F77_stpsv      f2c_stpsv
   #define F77_dgemv      f2c_dgemv
   #define F77_dgbmv      f2c_dgbmv
   #define F77_dtrmv      f2c_dtrmv
   #define F77_dtbmv      f2c_dtbmv
   #define F77_dtpmv      f2c_dtpmv
   #define F77_dtrsv      f2c_dtrsv
   #define F77_dtbsv      f2c_dtbsv
   #define F77_dtpsv      f2c_dtpsv
   #define F77_cgemv      f2c_cgemv
   #define F77_cgbmv      f2c_cgbmv
   #define F77_ctrmv      f2c_ctrmv
   #define F77_ctbmv      f2c_ctbmv
   #define F77_ctpmv      f2c_ctpmv
   #define F77_ctrsv      f2c_ctrsv
   #define F77_ctbsv      f2c_ctbsv
   #define F77_ctpsv      f2c_ctpsv
   #define F77_zgemv      f2c_zgemv
   #define F77_zgbmv      f2c_zgbmv
   #define F77_ztrmv      f2c_ztrmv
   #define F77_ztbmv      f2c_ztbmv
   #define F77_ztpmv      f2c_ztpmv
   #define F77_ztrsv      f2c_ztrsv
   #define F77_ztbsv      f2c_ztbsv
   #define F77_ztpsv      f2c_ztpsv
/*
 * Level 3 BLAS
 */
   #define F77_chemm      f2c_chemm
   #define F77_cherk      f2c_cherk
   #define F77_cher2k     f2c_cher2k
   #define F77_zhemm      f2c_zhemm
   #define F77_zherk      f2c_zherk
   #define F77_zher2k     f2c_zher2k
   #define F77_sgemm      f2c_sgemm
   #define F77_ssymm      f2c_ssymm
   #define F77_ssyrk      f2c_ssyrk
   #define F77_ssyr2k     f2c_ssyr2k
   #define F77_strmm      f2c_strmm
   #define F77_strsm      f2c_strsm
   #define F77_dgemm      f2c_dgemm
   #define F77_dsymm      f2c_dsymm
   #define F77_dsyrk      f2c_dsyrk
   #define F77_dsyr2k     f2c_dsyr2k
   #define F77_dtrmm      f2c_dtrmm
   #define F77_dtrsm      f2c_dtrsm
   #define F77_cgemm      f2c_cgemm
   #define F77_csymm      f2c_csymm
   #define F77_csyrk      f2c_csyrk
   #define F77_csyr2k     f2c_csyr2k
   #define F77_ctrmm      f2c_ctrmm
   #define F77_ctrsm      f2c_ctrsm
   #define F77_zgemm      f2c_zgemm
   #define F77_zsymm      f2c_zsymm
   #define F77_zsyrk      f2c_zsyrk
   #define F77_zsyr2k     f2c_zsyr2k
   #define F77_ztrmm      f2c_ztrmm
   #define F77_ztrsm      f2c_ztrsm
#elif defined(UPCASE)
/*
 * Level 1 BLAS
 */
#define F77_xerbla  XERBLA
   #define F77_srotg      SROTG
   #define F77_srotmg     SROTMG
   #define F77_srot       SROT
   #define F77_srotm      SROTM
   #define F77_drotg      DROTG
   #define F77_drotmg     DROTMG
   #define F77_drot       DROT
   #define F77_drotm      DROTM
   #define F77_sswap      SSWAP
   #define F77_scopy      SCOPY
   #define F77_saxpy      SAXPY
   #define F77_isamax_sub ISAMAXSUB
   #define F77_dswap      DSWAP
   #define F77_dcopy      DCOPY
   #define F77_daxpy      DAXPY
   #define F77_idamax_sub IDAMAXSUB
   #define F77_cswap      CSWAP
   #define F77_ccopy      CCOPY
   #define F77_caxpy      CAXPY
   #define F77_icamax_sub ICAMAXSUB
   #define F77_zswap      ZSWAP
   #define F77_zcopy      ZCOPY
   #define F77_zaxpy      ZAXPY
   #define F77_izamax_sub IZAMAXSUB
   #define F77_sdot_sub   SDOTSUB
   #define F77_ddot_sub   DDOTSUB
   #define F77_dsdot_sub   DSDOTSUB
   #define F77_sscal      SSCAL
   #define F77_dscal      DSCAL
   #define F77_cscal      CSCAL
   #define F77_zscal      ZSCAL
   #define F77_csscal      CSSCAL
   #define F77_zdscal      ZDSCAL
   #define F77_cdotu_sub  CDOTUSUB
   #define F77_cdotc_sub  CDOTCSUB
   #define F77_zdotu_sub  ZDOTUSUB
   #define F77_zdotc_sub  ZDOTCSUB
   #define F77_snrm2_sub  SNRM2SUB
   #define F77_sasum_sub  SASUMSUB
   #define F77_dnrm2_sub  DNRM2SUB
   #define F77_dasum_sub  DASUMSUB
   #define F77_scnrm2_sub  SCNRM2SUB
   #define F77_scasum_sub  SCASUMSUB
   #define F77_dznrm2_sub  DZNRM2SUB
   #define F77_dzasum_sub  DZASUMSUB
   #define F77_sdsdot_sub   SDSDOTSUB
/*
 * Level 2 BLAS
 */
   #define F77_ssymv      SSYMV
   #define F77_ssbmv      SSBMV
   #define F77_sspmv      SSPMV
   #define F77_sger       SGER
   #define F77_ssyr       SSYR
   #define F77_sspr       SSPR
   #define F77_ssyr2      SSYR2
   #define F77_sspr2      SSPR2
   #define F77_dsymv      DSYMV
   #define F77_dsbmv      DSBMV
   #define F77_dspmv      DSPMV
   #define F77_dger       DGER
   #define F77_dsyr       DSYR
   #define F77_dspr       DSPR
   #define F77_dsyr2      DSYR2
   #define F77_dspr2      DSPR2
   #define F77_chemv      CHEMV
   #define F77_chbmv      CHBMV
   #define F77_chpmv      CHPMV
   #define F77_cgeru      CGERU
   #define F77_cgerc      CGERC
   #define F77_cher       CHER
   #define F77_chpr       CHPR
   #define F77_cher2      CHER2
   #define F77_chpr2      CHPR2
   #define F77_zhemv      ZHEMV
   #define F77_zhbmv      ZHBMV
   #define F77_zhpmv      ZHPMV
   #define F77_zgeru      ZGERU
   #define F77_zgerc      ZGERC
   #define F77_zher       ZHER
   #define F77_zhpr       ZHPR
   #define F77_zher2      ZHER2
   #define F77_zhpr2      ZHPR2
   #define F77_sgemv      SGEMV
   #define F77_sgbmv      SGBMV
   #define F77_strmv      STRMV
   #define F77_stbmv      STBMV
   #define F77_stpmv      STPMV
   #define F77_strsv      STRSV
   #define F77_stbsv      STBSV
   #define F77_stpsv      STPSV
   #define F77_dgemv      DGEMV
   #define F77_dgbmv      DGBMV
   #define F77_dtrmv      DTRMV
   #define F77_dtbmv      DTBMV
   #define F77_dtpmv      DTPMV
   #define F77_dtrsv      DTRSV
   #define F77_dtbsv      DTBSV
   #define F77_dtpsv      DTPSV
   #define F77_cgemv      CGEMV
   #define F77_cgbmv      CGBMV
   #define F77_ctrmv      CTRMV
   #define F77_ctbmv      CTBMV
   #define F77_ctpmv      CTPMV
   #define F77_ctrsv      CTRSV
   #define F77_ctbsv      CTBSV
   #define F77_ctpsv      CTPSV
   #define F77_zgemv      ZGEMV
   #define F77_zgbmv      ZGBMV
   #define F77_ztrmv      ZTRMV
   #define F77_ztbmv      ZTBMV
   #define F77_ztpmv      ZTPMV
   #define F77_ztrsv      ZTRSV
   #define F77_ztbsv      ZTBSV
   #define F77_ztpsv      ZTPSV
/*
 * Level 3 BLAS
 */
   #define F77_chemm      CHEMM
   #define F77_cherk      CHERK
   #define F77_cher2k     CHER2K
   #define F77_zhemm      ZHEMM
   #define F77_zherk      ZHERK
   #define F77_zher2k     ZHER2K
   #define F77_sgemm      SGEMM
   #define F77_ssymm      SSYMM
   #define F77_ssyrk      SSYRK
   #define F77_ssyr2k     SSYR2K
   #define F77_strmm      STRMM
   #define F77_strsm      STRSM
   #define F77_dgemm      DGEMM
   #define F77_dsymm      DSYMM
   #define F77_dsyrk      DSYRK
   #define F77_dsyr2k     DSYR2K
   #define F77_dtrmm      DTRMM
   #define F77_dtrsm      DTRSM
   #define F77_cgemm      CGEMM
   #define F77_csymm      CSYMM
   #define F77_csyrk      CSYRK
   #define F77_csyr2k     CSYR2K
   #define F77_ctrmm      CTRMM
   #define F77_ctrsm      CTRSM
   #define F77_zgemm      ZGEMM
   #define F77_zsymm      ZSYMM
   #define F77_zsyrk      ZSYRK
   #define F77_zsyr2k     ZSYR2K
   #define F77_ztrmm      ZTRMM
   #define F77_ztrsm      ZTRSM
#elif defined(NOCHANGE)
/*
 * Level 1 BLAS
 */
#define F77_xerbla  xerbla
   #define F77_srotg      srotg
   #define F77_srotmg     srotmg
   #define F77_srot       srot
   #define F77_srotm      srotm
   #define F77_drotg      drotg
   #define F77_drotmg     drotmg
   #define F77_drot       drot
   #define F77_drotm      drotm
   #define F77_sswap      sswap
   #define F77_scopy      scopy
   #define F77_saxpy      saxpy
   #define F77_isamax_sub isamaxsub
   #define F77_dswap      dswap
   #define F77_dcopy      dcopy
   #define F77_daxpy      daxpy
   #define F77_idamax_sub idamaxsub
   #define F77_cswap      cswap
   #define F77_ccopy      ccopy
   #define F77_caxpy      caxpy
   #define F77_icamax_sub icamaxsub
   #define F77_zswap      zswap
   #define F77_zcopy      zcopy
   #define F77_zaxpy      zaxpy
   #define F77_izamax_sub izamaxsub
   #define F77_sdot_sub   sdotsub
   #define F77_ddot_sub   ddotsub
   #define F77_dsdot_sub   dsdotsub
   #define F77_sscal      sscal
   #define F77_dscal      dscal
   #define F77_cscal      cscal
   #define F77_zscal      zscal
   #define F77_csscal      csscal
   #define F77_zdscal      zdscal
   #define F77_cdotu_sub  cdotusub
   #define F77_cdotc_sub  cdotcsub
   #define F77_zdotu_sub  zdotusub
   #define F77_zdotc_sub  zdotcsub
   #define F77_snrm2_sub  snrm2sub
   #define F77_sasum_sub  sasumsub
   #define F77_dnrm2_sub  dnrm2sub
   #define F77_dasum_sub  dasumsub
   #define F77_scnrm2_sub  scnrm2sub
   #define F77_scasum_sub  scasumsub
   #define F77_dznrm2_sub  dznrm2sub
   #define F77_dzasum_sub  dzasumsub
   #define F77_sdsdot_sub   sdsdotsub
/*
 * Level 2 BLAS
 */
   #define F77_ssymv      ssymv
   #define F77_ssbmv      ssbmv
   #define F77_sspmv      sspmv
   #define F77_sger       sger
   #define F77_ssyr       ssyr
   #define F77_sspr       sspr
   #define F77_ssyr2      ssyr2
   #define F77_sspr2      sspr2
   #define F77_dsymv      dsymv
   #define F77_dsbmv      dsbmv
   #define F77_dspmv      dspmv
   #define F77_dger       dger
   #define F77_dsyr       dsyr
   #define F77_dspr       dspr
   #define F77_dsyr2      dsyr2
   #define F77_dspr2      dspr2
   #define F77_chemv      chemv
   #define F77_chbmv      chbmv
   #define F77_chpmv      chpmv
   #define F77_cgeru      cgeru
   #define F77_cgerc      cgerc
   #define F77_cher       cher
   #define F77_chpr       chpr
   #define F77_cher2      cher2
   #define F77_chpr2      chpr2
   #define F77_zhemv      zhemv
   #define F77_zhbmv      zhbmv
   #define F77_zhpmv      zhpmv
   #define F77_zgeru      zgeru
   #define F77_zgerc      zgerc
   #define F77_zher       zher
   #define F77_zhpr       zhpr
   #define F77_zher2      zher2
   #define F77_zhpr2      zhpr2
   #define F77_sgemv      sgemv
   #define F77_sgbmv      sgbmv
   #define F77_strmv      strmv
   #define F77_stbmv      stbmv
   #define F77_stpmv      stpmv
   #define F77_strsv      strsv
   #define F77_stbsv      stbsv
   #define F77_stpsv      stpsv
   #define F77_dgemv      dgemv
   #define F77_dgbmv      dgbmv
   #define F77_dtrmv      dtrmv
   #define F77_dtbmv      dtbmv
   #define F77_dtpmv      dtpmv
   #define F77_dtrsv      dtrsv
   #define F77_dtbsv      dtbsv
   #define F77_dtpsv      dtpsv
   #define F77_cgemv      cgemv
   #define F77_cgbmv      cgbmv
   #define F77_ctrmv      ctrmv
   #define F77_ctbmv      ctbmv
   #define F77_ctpmv      ctpmv
   #define F77_ctrsv      ctrsv
   #define F77_ctbsv      ctbsv
   #define F77_ctpsv      ctpsv
   #define F77_zgemv      zgemv
   #define F77_zgbmv      zgbmv
   #define F77_ztrmv      ztrmv
   #define F77_ztbmv      ztbmv
   #define F77_ztpmv      ztpmv
   #define F77_ztrsv      ztrsv
   #define F77_ztbsv      ztbsv
   #define F77_ztpsv      ztpsv
/*
 * Level 3 BLAS
 */
   #define F77_chemm      chemm
   #define F77_cherk      cherk
   #define F77_cher2k     cher2k
   #define F77_zhemm      zhemm
   #define F77_zherk      zherk
   #define F77_zher2k     zher2k
   #define F77_sgemm      sgemm
   #define F77_ssymm      ssymm
   #define F77_ssyrk      ssyrk
   #define F77_ssyr2k     ssyr2k
   #define F77_strmm      strmm
   #define F77_strsm      strsm
   #define F77_dgemm      dgemm
   #define F77_dsymm      dsymm
   #define F77_dsyrk      dsyrk
   #define F77_dsyr2k     dsyr2k
   #define F77_dtrmm      dtrmm
   #define F77_dtrsm      dtrsm
   #define F77_cgemm      cgemm
   #define F77_csymm      csymm
   #define F77_csyrk      csyrk
   #define F77_csyr2k     csyr2k
   #define F77_ctrmm      ctrmm
   #define F77_ctrsm      ctrsm
   #define F77_zgemm      zgemm
   #define F77_zsymm      zsymm
   #define F77_zsyrk      zsyrk
   #define F77_zsyr2k     zsyr2k
   #define F77_ztrmm      ztrmm
   #define F77_ztrsm      ztrsm
#endif

#ifdef __cplusplus
extern "C" {
#endif

   void F77_xerbla(FCHAR, void *);
/*
 * Level 1 Fortran Prototypes
 */

/* Single Precision */

   void F77_srot(FINT, float *, FINT, float *, FINT, const float *, const float *);
   void F77_srotg(float *,float *,float *,float *);    
   void F77_srotm( FINT, float *, FINT, float *, FINT, const float *);
   void F77_srotmg(float *,float *,float *,const float *, float *);
   void F77_sswap( FINT, float *, FINT, float *, FINT);
   void F77_scopy( FINT, const float *, FINT, float *, FINT);
   void F77_saxpy( FINT, const float *, const float *, FINT, float *, FINT);
   void F77_sdot_sub(FINT, const float *, FINT, const float *, FINT, float *);
   void F77_sdsdot_sub( FINT, const float *, const float *, FINT, const float *, FINT, float *);
   void F77_sscal( FINT, const float *, float *, FINT);
   void F77_snrm2_sub( FINT, const float *, FINT, float *);
   void F77_sasum_sub( FINT, const float *, FINT, float *);
   void F77_isamax_sub( FINT, const float * , FINT, FINT2);

/* Double Precision */

   void F77_drot(FINT, double *, FINT, double *, FINT, const double *, const double *);
   void F77_drotg(double *,double *,double *,double *);    
   void F77_drotm( FINT, double *, FINT, double *, FINT, const double *);
   void F77_drotmg(double *,double *,double *,const double *, double *);
   void F77_dswap( FINT, double *, FINT, double *, FINT);
   void F77_dcopy( FINT, const double *, FINT, double *, FINT);
   void F77_daxpy( FINT, const double *, const double *, FINT, double *, FINT);
   void F77_dswap( FINT, double *, FINT, double *, FINT);
   void F77_dsdot_sub(FINT, const float *, FINT, const float *, FINT, double *);
   void F77_ddot_sub( FINT, const double *, FINT, const double *, FINT, double *);
   void F77_dscal( FINT, const double *, double *, FINT);
   void F77_dnrm2_sub( FINT, const double *, FINT, double *);
   void F77_dasum_sub( FINT, const double *, FINT, double *);
   void F77_idamax_sub( FINT, const double * , FINT, FINT2);

/* Single Complex Precision */

   void F77_cswap( FINT, void *, FINT, void *, FINT);
   void F77_ccopy( FINT, const void *, FINT, void *, FINT);
   void F77_caxpy( FINT, const void *, const void *, FINT, void *, FINT);
   void F77_cswap( FINT, void *, FINT, void *, FINT);
   void F77_cdotc_sub( FINT, const void *, FINT, const void *, FINT, void *);
   void F77_cdotu_sub( FINT, const void *, FINT, const void *, FINT, void *);
   void F77_cscal( FINT, const void *, void *, FINT);
   void F77_icamax_sub( FINT, const void *, FINT, FINT2);
   void F77_csscal( FINT, const float *, void *, FINT);
   void F77_scnrm2_sub( FINT, const void *, FINT, float *);
   void F77_scasum_sub( FINT, const void *, FINT, float *);

/* Double Complex Precision */

   void F77_zswap( FINT, void *, FINT, void *, FINT);
   void F77_zcopy( FINT, const void *, FINT, void *, FINT);
   void F77_zaxpy( FINT, const void *, const void *, FINT, void *, FINT);
   void F77_zswap( FINT, void *, FINT, void *, FINT);
   void F77_zdotc_sub( FINT, const void *, FINT, const void *, FINT, void *);
   void F77_zdotu_sub( FINT, const void *, FINT, const void *, FINT, void *);
   void F77_zdscal( FINT, const double *, void *, FINT);
   void F77_zscal( FINT, const void *, void *, FINT);
   void F77_dznrm2_sub( FINT, const void *, FINT, double *);
   void F77_dzasum_sub( FINT, const void *, FINT, double *);
   void F77_izamax_sub( FINT, const void *, FINT, FINT2);

/*
 * Level 2 Fortran Prototypes
 */

/* Single Precision */

   void F77_sgemv(FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_sgbmv(FCHAR, FINT, FINT, FINT, FINT, const float *,  const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_ssymv(FCHAR, FINT, const float *, const float *, FINT, const float *,  FINT, const float *, float *, FINT);
   void F77_ssbmv(FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_sspmv(FCHAR, FINT, const float *, const float *, const float *, FINT, const float *, float *, FINT);
   void F77_strmv( FCHAR, FCHAR, FCHAR, FINT, const float *, FINT, float *, FINT);
   void F77_stbmv( FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, FINT, float *, FINT);
   void F77_strsv( FCHAR, FCHAR, FCHAR, FINT, const float *, FINT, float *, FINT);
   void F77_stbsv( FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, FINT, float *, FINT);
   void F77_stpmv( FCHAR, FCHAR, FCHAR, FINT, const float *, float *, FINT);
   void F77_stpsv( FCHAR, FCHAR, FCHAR, FINT, const float *, float *, FINT);
   void F77_sger( FINT, FINT, const float *, const float *, FINT, const float *, FINT, float *, FINT);
   void F77_ssyr(FCHAR, FINT, const float *, const float *, FINT, float *, FINT);
   void F77_sspr(FCHAR, FINT, const float *, const float *, FINT, float *); 
   void F77_sspr2(FCHAR, FINT, const float *, const float *, FINT, const float *, FINT,  float *); 
   void F77_ssyr2(FCHAR, FINT, const float *, const float *, FINT, const float *, FINT,  float *, FINT);

/* Double Precision */

   void F77_dgemv(FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dgbmv(FCHAR, FINT, FINT, FINT, FINT, const double *,  const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dsymv(FCHAR, FINT, const double *, const double *, FINT, const double *,  FINT, const double *, double *, FINT);
   void F77_dsbmv(FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dspmv(FCHAR, FINT, const double *, const double *, const double *, FINT, const double *, double *, FINT);
   void F77_dtrmv( FCHAR, FCHAR, FCHAR, FINT, const double *, FINT, double *, FINT);
   void F77_dtbmv( FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, FINT, double *, FINT);
   void F77_dtrsv( FCHAR, FCHAR, FCHAR, FINT, const double *, FINT, double *, FINT);
   void F77_dtbsv( FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, FINT, double *, FINT);
   void F77_dtpmv( FCHAR, FCHAR, FCHAR, FINT, const double *, double *, FINT);
   void F77_dtpsv( FCHAR, FCHAR, FCHAR, FINT, const double *, double *, FINT);
   void F77_dger( FINT, FINT, const double *, const double *, FINT, const double *, FINT, double *, FINT);
   void F77_dsyr(FCHAR, FINT, const double *, const double *, FINT, double *, FINT);
   void F77_dspr(FCHAR, FINT, const double *, const double *, FINT, double *); 
   void F77_dspr2(FCHAR, FINT, const double *, const double *, FINT, const double *, FINT,  double *); 
   void F77_dsyr2(FCHAR, FINT, const double *, const double *, FINT, const double *, FINT,  double *, FINT);

/* Single Complex Precision */

   void F77_cgemv(FCHAR, FINT, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_cgbmv(FCHAR, FINT, FINT, FINT, FINT, const void *,  const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_chemv(FCHAR, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_chbmv(FCHAR, FINT, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_chpmv(FCHAR, FINT, const void *, const void *, const void *, FINT, const void *, void *, FINT);
   void F77_ctrmv( FCHAR, FCHAR, FCHAR, FINT, const void *, FINT, void *, FINT);
   void F77_ctbmv( FCHAR, FCHAR, FCHAR, FINT, FINT, const void *, FINT, void *, FINT);
   void F77_ctpmv( FCHAR, FCHAR, FCHAR, FINT, const void *, void *, FINT);
   void F77_ctrsv( FCHAR, FCHAR, FCHAR, FINT, const void *, FINT, void *, FINT);
   void F77_ctbsv( FCHAR, FCHAR, FCHAR, FINT, FINT, const void *, FINT, void *, FINT);
   void F77_ctpsv( FCHAR, FCHAR, FCHAR, FINT, const void *, void *,FINT);
   void F77_cgerc( FINT, FINT, const void *, const void *, FINT, const void *, FINT, void *, FINT);
   void F77_cgeru( FINT, FINT, const void *, const void *, FINT, const void *, FINT, void *,  FINT);
   void F77_cher(FCHAR, FINT, const float *, const void *, FINT, void *, FINT);
   void F77_cher2(FCHAR, FINT, const void *, const void *, FINT, const void *, FINT, void *, FINT);
   void F77_chpr(FCHAR, FINT, const float *, const void *, FINT, void *);
   void F77_chpr2(FCHAR, FINT, const float *, const void *, FINT, const void *, FINT, void *);

/* Double Complex Precision */

   void F77_zgemv(FCHAR, FINT, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_zgbmv(FCHAR, FINT, FINT, FINT, FINT, const void *,  const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_zhemv(FCHAR, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_zhbmv(FCHAR, FINT, FINT, const void *, const void *, FINT, const void *, FINT, const void *, void *, FINT);
   void F77_zhpmv(FCHAR, FINT, const void *, const void *, const void *, FINT, const void *, void *, FINT);
   void F77_ztrmv( FCHAR, FCHAR, FCHAR, FINT, const void *, FINT, void *, FINT);
   void F77_ztbmv( FCHAR, FCHAR, FCHAR, FINT, FINT, const void *, FINT, void *, FINT);
   void F77_ztpmv( FCHAR, FCHAR, FCHAR, FINT, const void *, void *, FINT);
   void F77_ztrsv( FCHAR, FCHAR, FCHAR, FINT, const void *, FINT, void *, FINT);
   void F77_ztbsv( FCHAR, FCHAR, FCHAR, FINT, FINT, const void *, FINT, void *, FINT);
   void F77_ztpsv( FCHAR, FCHAR, FCHAR, FINT, const void *, void *,FINT);
   void F77_zgerc( FINT, FINT, const void *, const void *, FINT, const void *, FINT, void *, FINT);
   void F77_zgeru( FINT, FINT, const void *, const void *, FINT, const void *, FINT, void *,  FINT);
   void F77_zher(FCHAR, FINT, const double *, const void *, FINT, void *, FINT);
   void F77_zher2(FCHAR, FINT, const void *, const void *, FINT, const void *, FINT, void *, FINT);
   void F77_zhpr(FCHAR, FINT, const double *, const void *, FINT, void *);
   void F77_zhpr2(FCHAR, FINT, const double *, const void *, FINT, const void *, FINT, void *);

/*
 * Level 3 Fortran Prototypes
 */

/* Single Precision */

   void F77_sgemm(FCHAR, FCHAR, FINT, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_ssymm(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_ssyrk(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, float *, FINT);
   void F77_ssyr2k(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_strmm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, float *, FINT);
   void F77_strsm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, float *, FINT);

/* Double Precision */

   void F77_dgemm(FCHAR, FCHAR, FINT, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dsymm(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dsyrk(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, double *, FINT);
   void F77_dsyr2k(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_dtrmm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, double *, FINT);
   void F77_dtrsm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, double *, FINT);

/* Single Complex Precision */

   void F77_cgemm(FCHAR, FCHAR, FINT, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_csymm(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_chemm(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_csyrk(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, float *, FINT);
   void F77_cherk(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, float *, FINT);
   void F77_csyr2k(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_cher2k(FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, const float *, FINT, const float *, float *, FINT);
   void F77_ctrmm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, float *, FINT);
   void F77_ctrsm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const float *, const float *, FINT, float *, FINT);

/* Double Complex Precision */

   void F77_zgemm(FCHAR, FCHAR, FINT, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_zsymm(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_zhemm(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_zsyrk(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, double *, FINT);
   void F77_zherk(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, double *, FINT);
   void F77_zsyr2k(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_zher2k(FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, const double *, FINT, const double *, double *, FINT);
   void F77_ztrmm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, double *, FINT);
   void F77_ztrsm(FCHAR, FCHAR, FCHAR, FCHAR, FINT, FINT, const double *, const double *, FINT, double *, FINT);

#ifdef __cplusplus
}
#endif

#endif /*  CBLAS_F77_H */

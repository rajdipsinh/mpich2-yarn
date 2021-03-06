/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GET_ELEMENTS = PMPI_GET_ELEMENTS
#pragma weak mpi_get_elements__ = PMPI_GET_ELEMENTS
#pragma weak mpi_get_elements_ = PMPI_GET_ELEMENTS
#pragma weak mpi_get_elements = PMPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ELEMENTS = pmpi_get_elements__
#pragma weak mpi_get_elements__ = pmpi_get_elements__
#pragma weak mpi_get_elements_ = pmpi_get_elements__
#pragma weak mpi_get_elements = pmpi_get_elements__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ELEMENTS = pmpi_get_elements_
#pragma weak mpi_get_elements__ = pmpi_get_elements_
#pragma weak mpi_get_elements_ = pmpi_get_elements_
#pragma weak mpi_get_elements = pmpi_get_elements_
#else
#pragma weak MPI_GET_ELEMENTS = pmpi_get_elements
#pragma weak mpi_get_elements__ = pmpi_get_elements
#pragma weak mpi_get_elements_ = pmpi_get_elements
#pragma weak mpi_get_elements = pmpi_get_elements
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GET_ELEMENTS = PMPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_elements__ = pmpi_get_elements__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_elements = pmpi_get_elements
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_elements_ = pmpi_get_elements_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GET_ELEMENTS  MPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_elements__  mpi_get_elements__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_elements  mpi_get_elements
#else
#pragma _HP_SECONDARY_DEF pmpi_get_elements_  mpi_get_elements_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GET_ELEMENTS as PMPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_get_elements__ as pmpi_get_elements__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_get_elements as pmpi_get_elements
#else
#pragma _CRI duplicate mpi_get_elements_ as pmpi_get_elements_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ELEMENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_elements_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_get_elements__ = MPI_GET_ELEMENTS
#pragma weak mpi_get_elements_ = MPI_GET_ELEMENTS
#pragma weak mpi_get_elements = MPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ELEMENTS = mpi_get_elements__
#pragma weak mpi_get_elements_ = mpi_get_elements__
#pragma weak mpi_get_elements = mpi_get_elements__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ELEMENTS = mpi_get_elements_
#pragma weak mpi_get_elements__ = mpi_get_elements_
#pragma weak mpi_get_elements = mpi_get_elements_
#else
#pragma weak MPI_GET_ELEMENTS = mpi_get_elements
#pragma weak mpi_get_elements__ = mpi_get_elements
#pragma weak mpi_get_elements_ = mpi_get_elements
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ELEMENTS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_elements( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_get_elements__ = PMPI_GET_ELEMENTS
#pragma weak pmpi_get_elements_ = PMPI_GET_ELEMENTS
#pragma weak pmpi_get_elements = PMPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GET_ELEMENTS = pmpi_get_elements__
#pragma weak pmpi_get_elements_ = pmpi_get_elements__
#pragma weak pmpi_get_elements = pmpi_get_elements__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GET_ELEMENTS = pmpi_get_elements_
#pragma weak pmpi_get_elements__ = pmpi_get_elements_
#pragma weak pmpi_get_elements = pmpi_get_elements_
#else
#pragma weak PMPI_GET_ELEMENTS = pmpi_get_elements
#pragma weak pmpi_get_elements__ = pmpi_get_elements
#pragma weak pmpi_get_elements_ = pmpi_get_elements
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_get_elements_ PMPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_elements_ pmpi_get_elements__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_elements_ pmpi_get_elements
#else
#define mpi_get_elements_ pmpi_get_elements_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Get_elements
#define MPI_Get_elements PMPI_Get_elements 

#else

#ifdef F77_NAME_UPPER
#define mpi_get_elements_ MPI_GET_ELEMENTS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_elements_ mpi_get_elements__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_elements_ mpi_get_elements
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_get_elements_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Get_elements( (MPI_Status *)(v1), (MPI_Datatype)(*v2), v3 );
}

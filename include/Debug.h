//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Debug.h
//
// API for the package Debug.
//
// Revision control information:
//
// $Header: /flux/packages/Debug.h 10    17/11/00 14:52 Will $
//

#include "Flux.h"

#if (FLUX_COMPILE)

FLUX_DECLARE_EXTENSION(Debug);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "debug" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// Debug.PrintInt( int i )
//
// Print the value of i
//
prototype Debug.PrintInt( int i );

//
// Debug.PrintFloat( float f )
//
// Print the value of f
//
prototype Debug.PrintFloat( float f );

//
// Debug.PrintString( string s )
//
// Print the string s
//
prototype Debug.PrintString( string s );

//
// Debug.PrintHandle( hobject h )
//
// Print the handle h
//
prototype Debug.PrintHandle( hobject h );

//
// bool Debug.DeveloperMode()
//
// Query the developer mode status
//
prototype bool Debug.DeveloperMode();

//
// Debug.Break()
//
// Break into program execution
//
prototype Debug.Break();

//
// Debug.Error( string message )
//
// Cause an error to be displayed in an error message box
//
prototype Debug.Error( string message );

#endif // FLUX_LIB

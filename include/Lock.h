//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Lock.h
//
// API for the package Lock.
//
// Revision control information:
//
// $Header: /flux/packages/Lock.h 2     11/06/00 11:24 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Lock);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "lock" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Declare lock handle
handle hlock : hobject;

// Include
uses String;

//
// Creation/destruction - name should be the FcObject name.
// The lock will not be created if it duplicates the name of another
// lock.
//

//
// hlock Lock.Create( string name )
//
// Create a lock called name.
//
prototype hlock Lock.Create( string name );

//
// Lock.Destroy( hlock lock )
//
// Destroy a lock called name
//
prototype Lock.Destroy( hlock lock );

//
// hlock Lock.Find( string name )
//
// Find a lock
//
prototype hlock Lock.Find( string name );

//
// bool Lock.Claim( hlock lock )
//
// Claim a lock - return false if the lock is currently claimed
//
prototype bool Lock.Claim( hlock lock );

//
// Lock.Release( hlock lock )
//
// Release a lock
//
prototype Lock.Release( hlock lock );

#endif // FLUX_LIB


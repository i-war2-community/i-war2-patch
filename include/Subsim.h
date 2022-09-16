//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Subsim.h
//
// Flux subsim package API.
//
// Revision control information:
//
// $Header: /flux/packages/Subsim.h 6     8/09/00 11:55 Brett $
//

// Handle definition /////////////////////////////////////////////////////////

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(SubSim);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "subsim" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// The handle to a subsim
handle hsubsim : hobject;

uses Object;

//
// prototype hsubsim Subsim.Cast( hobject object )
//
// Casts the object to a subsim
//
prototype hsubsim Subsim.Cast( hobject obj );

//
// prototype hsubsim Subsim.Create( string template )
//
// Creates a new subsim from the template.
//
prototype hsubsim Subsim.Create( string template);

//
// prototype Subsim.Place( hsubsim subsim, float x, float y, float z)
//
// Places the subsim at the given position on its sim.  This function will
// complain if the subsim has not been attached yet.
//
prototype Subsim.Place( hsubsim subsim, float x, float y, float z);

//
// prototype Subsim.Orientate( hsubsim subsim, float x, float y, float z)
//
// Orientates the subsim relative to its sim by the given Euler angles.  
// This function will complain if the subsim has not been attached yet.
//
prototype Subsim.OrientateEuler( hsubsim subsim, float yaw, float pitch, float roll);

//
// prototype hsubsim Subsim.Create( string template, string name )
//
// Creates a new subsim from the template and the given name.
//
prototype Subsim.Preload( string template );

//
// prototype Subsim.Destroy( hsubsim subsim )
//
// Destroys the subsims (removes it from any ship it is in automatically).
//
prototype Subsim.Destroy( hsubsim subsim );

//
// prototype hsim Subsim.Sim( hsubsim subsim )
//
// Returns a handle to the sim on which we are situated.
//
prototype hsim Subsim.Sim( hsubsim subsim );

// EOF ///////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

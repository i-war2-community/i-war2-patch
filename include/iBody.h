//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// ibody.h
//
// API for the package ibody - functions for manipulation of celestial bodies.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iBody);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "ibody" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Dependencies
uses Sim, Set, iMapEntity, iHabitat, MapEnumerations;

// Declare handle type
handle hbody : hmapentity;

// Handle manipulation ////////////////////////////////////////////////////////

//
// hbody Cast( hobject object_handle )
//
// Cast an object to a celestial body.
//
prototype hbody iBody.Cast( hobject object_handle );

// Accessors ///////////////////////////////////////////////////////////////////

//
// IeBodyType Type( hbody body )
//
// Get the type of a body (e.g. star, planet, moon)
//
prototype IeBodyType iBody.Type( hbody body );

//
// ExclusionZone( hbody body ) 
//
// Get the allegiance of the controller of this body's exclusion zone.
//
// !! Awaits Chris' faction stuff.

// Find functions //////////////////////////////////////////////////////////////

//
// set HabitatsAroundBody( hbody body )
//
// Get a set of habitats around a given body. Includes habitats around habitats 
// around the body but not habitats around bodies around the body.
//
prototype set iBody.HabitatsAroundBody( hbody body );

//
// set OrbitingBodies( hbody body )
//
// Get a set of bodies around a given body. This will include all bodies 
// orbiting those bodies and so on.
//
prototype set iBody.OrbitingBodies( hbody body );

//
// hbody FindByName( string name )
//
// Try to find a body in the system with the given name.
//
prototype hbody iBody.FindByName( string name );

//
// hbody Nearest( set bodies, hsim sim )
//
// Of all the bodies in the given set, find the one closest to the given sim.
//
prototype hbody iBody.Nearest( set bodies, hsim sim );

//
// hbody Random( set bodies )
// 
// Pick a random body from the given set.
//
prototype hbody iBody.Random( set bodies );

//
// set FilterOnType( set bodies, IeBodyType type )
//
// Return a set consisting of all those members of the supplied set to have 
// a body type matching that given.
//
prototype set iBody.FilterOnType( set bodies, IeBodyType type );

#endif // FLUX_LIB

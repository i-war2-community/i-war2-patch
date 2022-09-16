//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// ilagrangepoint.h
//
// API for the package ilagrangepoint - functions for manipulation of Lagrange
// points.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iLagrangePoint);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "ilagrangepoint" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Declare handle type
handle hlagrangepoint : hmapentity;

// Dependencies
uses Sim, Set, iMapEntity;


// Handle manipulation ////////////////////////////////////////////////////////

//
// hlagrangepoint Cast( hobject object_handle )
//
// Cast an object to a Lagrange point.
//
prototype hlagrangepoint iLagrangePoint.Cast( hobject object_handle );

// Accessors ///////////////////////////////////////////////////////////////////

//
// LocalDestinations
//
// Return a set of local Lagrange points which are destinations from the given
// one.
//
// !! Need sets of integers to do this function. Or store handles to Lagrange
// points.

//
// InterstellarDestinations
//
// Return the systems which can be reached from the supplied Lagrange point.
//
// !! Need sets of strings to do this function.

//
// Interstellar
//
// Return whether or not the Lagrange point is interstellar
//
prototype bool iLagrangePoint.Interstellar( hlagrangepoint lagrangepoint );

// Find functions //////////////////////////////////////////////////////////////

//
// hlagrangepoint FindByName( string name )
//
// Try to find a Lagrange point from its name.
//
prototype hlagrangepoint iLagrangePoint.FindByName( string name );

//
// hlagrangepoint Nearest( set lpoints, hsim sim )
//
// Of the supplied Lagrange points, find the one closest to the given sim.
//
prototype hlagrangepoint iLagrangePoint.Nearest( set lpoints, hsim sim );

//
// hlagrangepoint Random( set lpoints )
//
// Pick a random Lagrange point from the given set.
//
prototype hlagrangepoint iLagrangePoint.Random( set lpoints );

//
// set FilterOnLocalDestination( set lpoints, int dest )
//
// Of the given set of Lagrange points, filter out those which do not go to the
// given destination.
//
//prototype set iLagrangePoint.FilterOnLocalDestination( set lpoints, int dest );

//
// set FilterOnInterstellarDestination( set lpoints, string dest )
//
// Of the given set of Lagrange points, filter out those which do not go to the
// given system.
//
prototype set iLagrangePoint.FilterOnInterstellarDestination( set lpoints, string dest );

//
// set InstellarDestinations( hlagrangepoint lagrangepoint )
//
// Returns the set of interstellar destinations from this lagrange point
//
prototype set iLagrangePoint.InterstellarDestinations( hlagrangepoint lagrangepoint );

//
// set LocalDestinations( hlagrangepoint lagrangepoint, int index )
//
// Returns the local destination L-points
//
prototype set iLagrangePoint.LocalDestinations( hlagrangepoint lagrangepoint );

//
// SetUsable( hlagrangepoint lagrangepoint, bool flag )
//
// Sets the usability of the lagrange point for route finding
//
prototype iLagrangePoint.SetUsable( hlagrangepoint lagrangepoint, bool flag );

//
// iLagrangePoint.Create()
//
// Create a new LPoint sim
//
prototype hlagrangepoint iLagrangePoint.Create();


//
// iLagrangePoint.AddDestination( hlagrangepoint lagrangepoint,  hlagrangepoint destination )
//
// Adds a destination waypoint
//
prototype iLagrangePoint.AddDestination( hlagrangepoint lagrangepoint,  hlagrangepoint destination );



#endif // FLUX_LIB

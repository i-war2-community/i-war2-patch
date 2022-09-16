//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iRegion.h
//
// Package API for I-War 2 regions.
//
// Revision control information:
//
// $Header: /iwar2/packages/iRegion.h 3     4/10/00 13:39 Brett $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iRegion);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iregion" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Dependencies ///////////////////////////////////////////////////////////////

uses Sim;

// Type definitions ///////////////////////////////////////////////////////////

// Region handle
handle hregion : hobject;

// Regions API ////////////////////////////////////////////////////////////////

//
// hregion iRegion.CreateLDSI
//
// Create an LDSI region centred on the given sim.
//
prototype hregion iRegion.CreateLDSI( hsim centre, float radius );

//
// hregion iRegion.CreateTrafficControl
//
// Create a traffic control region centred on the given sim. This consists of
// an LDS inhibit field and a port-speed limit.
//
prototype hregion iRegion.CreateTrafficControl( hsim centre, 
											    float radius, 
												float speed_limit );

//
// int iRegion.SimCount( hregion region )
//
// Returns the number of sims in this regions
//
prototype int iRegion.SimCount( hregion region );

//
// set iRegion.NthSim
//
// Returns the Nth Sim in this region
//
prototype hsim iRegion.NthSim( hregion region, int nth );

//
// iRegion.Destroy
//
// Destroy the given region
//
prototype iRegion.Destroy( hregion region );

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

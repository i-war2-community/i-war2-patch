//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// ihabitat.h
//
// API for the package ihabitat - functions for manipulation of space stations
// and settlements.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iHabitat);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iHabitat" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies
uses Sim, Set, iMapEntity, iBody;

// Declare handle type
handle hhabitat : hmapentity;

// Handle manipulation ////////////////////////////////////////////////////////

//
// hhabitat Cast( hobject object_handle )
//
// Cast an object to a habitat.
//
prototype hhabitat iHabitat.Cast( hobject object_handle );

// Accessors ///////////////////////////////////////////////////////////////////

//
// int Population( hhabitat habitat )
//
// Determine the total population of a given habitat.
//
prototype int iHabitat.Population( hhabitat habitat );

//
// int Corporates( hhabitat habitat )
//
// Determine the corporate population of a given habitat.
//
prototype int iHabitat.Corporates( hhabitat habitat );

//
// int Independents( hhabitat habitat )
//
// Determine the independent population of a given habitat.
//
prototype int iHabitat.Independents( hhabitat habitat );

//
// int Exiles( hhabitat habitat )
//
// Determine the exile population of a given habitat.
//
prototype int iHabitat.Exiles( hhabitat habitat );

//
// int Military( hhabitat habitat )
//
// Determine the military population of a given habitat.
//
prototype int iHabitat.Military( hhabitat habitat );

//
// int Underworld( hhabitat habitat )
//
// Determine the underworld population of a given habitat.
//
prototype int iHabitat.Underworld( hhabitat habitat );

//
// int Government( hhabitat habitat )
//
// Determine the government population of a given habitat.
//
prototype int iHabitat.Government( hhabitat habitat );

//
// int Transient( hhabitat habitat )
//
// Determine the transient population of a given habitat.
//
prototype int iHabitat.Transient( hhabitat habitat );

//
// int Society( hhabitat habitat )
//
// Determine the society population of a given habitat.
//
prototype int iHabitat.Society( hhabitat habitat );

//
// IeAllegiance Allegiance( hhabitat habitat )
//
// Determine the allegiance of a given habitat.
//
prototype IeAllegiance iHabitat.Allegiance( hhabitat habitat );

//
// IeHabitatType Type( hhabitat habitat )
//
// Determine the type of a given habitat (e.g. water mine, resort)
//
prototype IeHabitatType iHabitat.Type( hhabitat habitat );

//
// bool IsOrbiting( hhabitat habitat )
//
// Determine whether a habitat is orbiting or surface based
//
prototype bool iHabitat.IsOrbiting( hhabitat habitat );

//
// IeHabitatType CastIntToHabitatType( int index )
//
// Cast an int up to a member of the habitat type enumerator
//
prototype IeHabitatType iHabitat.CastIntToHabitatType( int index );

// Find functions //////////////////////////////////////////////////////////////

//
// hhabitat FindByName( string name )
//
// Try to find a habitat in the system with the given name.
//
prototype hhabitat iHabitat.FindByName( string name );

//
// hhabitat Nearest( set habitats, hsim sim )
//
// Of the habitats in the given set, find the one closest to the given sim.
//
prototype hhabitat iHabitat.Nearest( set habitats, hsim sim );

//
// hhabitat Random( set habitats )
//
// Pick a random habitat from the given set.
//
prototype hhabitat iHabitat.Random( set habitats );

//
// set FilterOnType( set habitats, IeHabitatType type )
//
// Filter the given set with habitat type.
//
prototype set iHabitat.FilterOnType( set habitats, IeHabitatType type );

//
// set FilterOrbiting( set habitats )
// 
// Filter the given set down to only those habitats which are in orbit.
//
prototype set iHabitat.FilterOrbiting( set habitats );

//
// set FilterOnAllegiance( set habitats )
// 
// Filter the given set down to only those habitats with the given allegiance.
//
prototype set iHabitat.FilterOnAllegiance( set habitats, IeAllegiance alleg );

//
// bool HasSpewer( hhabitat habitat )
//
// Returns true if the station has a spewer
//
prototype bool iHabitat.HasSpewer( hhabitat station );

//
// bool HasSpewerSlotFree( )
//
// Returns true if the station has a free spewer slot
//
prototype bool iHabitat.HasSpewerSlotFree( hhabitat station );

//
// bool Spew( hhabitat station, hsim cargo_pod )
//
// Spews the given cargo pod on a free spewer
//
prototype bool iHabitat.Spew( hhabitat station, hsim cargo_pod );

//
// SetReactiveFunction( string function )
//
// Sets the reactive function for stations
//
prototype iHabitat.SetReactiveFunction( string reactive_function );

//
// SetArmed
//
// Arms or disarms the station
//
prototype iHabitat.SetArmed( hhabitat station, bool state );

//
// SetArmedWithTarget
//
// Arms the station for the given target.
//
prototype iHabitat.SetArmedWithTarget( hhabitat station, hisim target );

#endif // FLUX_LIB

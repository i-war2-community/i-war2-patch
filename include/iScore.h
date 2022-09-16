//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iScore.h
//
// Package for handling scoring.
//
// Revision control information:
//
// $Header: /iwar2/packages/iScore.h 5     30/03/01 14:54 Tim $
//

// Dependencies ///////////////////////////////////////////////////////////////

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iScore);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iscore" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

uses String;

// Type definitions ///////////////////////////////////////////////////////////

// Function prototypes ////////////////////////////////////////////////////////

//
// Enable stat logging
//
prototype iScore.EnableLogging();

//
// Disable stat logging
//
prototype iScore.DisableLogging();

//
// iScore.AddKill
//
// Credits us with a kill of the given vessel
//
prototype iScore.AddKill( hship ship, hisim vessel );

//
// Piracy
//

//
// iScore.AddPiracy
//
// Adds the given cargo type in the given quantity to the current
// score rating.  This will compute the value of the goods automatically.
//
prototype iScore.AddPiracy( int cargo_type, int quantity );

//
// iScore.PodPiracyValue
//
// Returns the overall value (current flight and aggregate) of pirated pods.
//
prototype int iScore.PodPiracyValue();

//
// iScore.PodPiracyCount
//
// Returns the overall number of pods pirated (current flight and aggregate)
//
prototype int iScore.PodPiracyCount();

//
// Scoring
//

//
// iScore.Total
//
// Returns the total score obtained (current flight and aggregate0
//
prototype int iScore.Total();

//
// iScore.SetRestartPoint
//
// Record the 'since base' scores 
//
prototype iScore.SetRestartPoint();

//
// iScore.GotoRestartPoint
//
// Reset the 'since base' scores to those recorded at the restart point
//
prototype iScore.GotoRestartPoint();

//
// Setup
//

//
// iScore.SetKillValue
//
// Sets the score given for killing the given ship type.  This must be a valid
// member of the valued ship types.
//
prototype iScore.SetKillValue( string ship_type, int value );

//
// iScore.AddSkillRating
//
// Sets the title for the given minimum score.
//
prototype iScore.AddSkillRating( int value, string title );

//
// iScore.HTMLisedStats
//
// Get a HTMLise version of the statistics
//
prototype string iScore.HTMLisedStats();

#endif // FLUX_COMPILE

// EOF ////////////////////////////////////////////////////////////////////////


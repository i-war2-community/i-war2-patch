//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iFaction.h
//
// API for the package iFaction.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iFaction);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "ifaction" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Dependencies
uses String, List, MapEnumerations;

// Declare the ship handle type
handle hfaction : hobject;

// Enumeration of types of feelings
enum eFeelingType { FT_Hate, FT_Dislike, FT_Neutral, FT_Like, FT_Love };

//
// hfaction iFaction.Cast( hobject o )
//
// Cast an hobject to an hfaction
//
prototype hfaction iFaction.Cast( hobject o );

//
// hfaction iFaction.Create( string name, 
//                           string prefix,
//                           IeAllegiance allegiance )
//
// Create a new faction. It starts with neutral attitudes to all
// existing factions.
//
prototype hfaction iFaction.Create( string name, 
									string prefix, 
									IeAllegiance allegiance );

//
// string iFaction.Name( hfaction faction )
//
// Get the facation name
//
prototype string iFaction.Name( hfaction faction );

//
// hfaction iFaction.Find( string name )
//
// Find a faction handle
//
prototype hfaction iFaction.Find( string name );

//
// list iFaction.All()
//
// Get a list of all factions
//
prototype list iFaction.All();

//
// float iFaction.Feeling( hfaction feeler, hfaction feelee )
//
// Find out how a faction feels toward another faction. Result is
// in the range [-1, 1] with -1 = hatred, 0 = neutral, +1 = love.
// Either faction invalid returns zero.
//
prototype float iFaction.Feeling( hfaction feeler, hfaction feelee );

//
// eFeelingType iFaction.FeelingType( float level )
//
// Find out which feeling type the level falls within
//
prototype eFeelingType iFaction.FeelingType( float level );

//
// float iFaction.FeelingLevel( eFeelingType )
//
// Find the midpoint level of the feeling type
//
prototype float iFaction.FeelingLevel( eFeelingType type );

//
// iFaction.SetFeeling( hfaction feeler, hfaction feelee, float level )
//
// Set the feeling of a faction towards another faction
//
prototype iFaction.SetFeeling( hfaction feeler, hfaction feelee, float level );

//
// iFaction.IncrementFeeling( hfaction feeler, hfaction feelee,
//                            float level_increase )
//
// Increment the feeling between a faction and another faction.
//
prototype iFaction.IncrementFeeling( hfaction feeler, hfaction feelee,
									 float level_increase );

//
// IeAllegiance iFaction.Allegiance( hfaction faction )
//
// Get this faction's allegiance (value from the IeAllegiance enumeration in
// MapEnumerations)
//
prototype IeAllegiance iFaction.Allegiance( hfaction faction );

#endif // FLUX_LIB

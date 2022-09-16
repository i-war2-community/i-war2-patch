//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iObjectives.h
//
// Package API for I-War 2 mission objectives management
//
// Revision control information:
//
// $Header: /iwar2/packages/iObjectives.h 2     21/02/01 9:43 Will $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iObjectives);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iobjectives" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Objective states
enum eObjectiveState
{
	// Objective has been supplied but not completed
	OS_Incomplete,

	// Objective has been completed successfully
	OS_Succeeded,

	// Objective has been failed
	OS_Failed
};

//
// iObjectives.Add
//
// Add an objective to the player's list. Pass the localised text key which
// identifies the objective.
//
prototype iObjectives.Add( string key );

//
// iObjectives.Remove
//
// Silently remove an objective from the player's list. Pass the key to 
// identify the objective.
//
// Normally SetState should be used to handle objective changes.
//
prototype iObjectives.Remove( string key );

//
// iObjectives.SetState
//
// Change the state of an objective which already exists. Pass the key to 
// identify the objective and the new state.
//
prototype iObjectives.SetState( string key, eObjectiveState state );

#endif // FLUX_LIB

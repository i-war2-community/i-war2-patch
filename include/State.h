//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// State.h
//
// API for the package State.
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/State.h 10    25/10/01 15:43 Steve $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(State);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "State" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies ///////////////////////////////////////////////////////////////

// Type definitions ///////////////////////////////////////////////////////////

handle hstate : hobject;

// Exported functions /////////////////////////////////////////////////////////

//
// hstate State.Cast( hobject o )
//
// Cast an object handle to a state handle
//
prototype hstate State.Cast( hobject o );

//
// htask State.Task( hstate state )
//
// Return the task associated with a given state, if it exists.
//
prototype htask State.Task( hstate state );

//
// hstate State.Find()
//
// Return the state associated with the given task if it exists, or none if
// no state has been created for this task.
//
prototype hstate State.Find( htask t );

//
// hstate State.Create( htask t, int progress )
// 
// Create a state and associate it with the given task. Assign the given
// progress value to the state.
//
prototype hstate State.Create( htask t, int progress );

//
// hstate State.Destroy( htask t )
//
// Destroy the given state.
//
prototype hstate State.Destroy( htask t );

//
// State.DestroyAll()
//
// Destroy all states.
//
prototype State.DestroyAll();

//
// State.SetProgress( hstate state, int progress )
//
// Set the given state's progress value.
//
prototype State.SetProgress( hstate state, int progress );

//
// State.Progress( hstate state )
//
// Return the given state's progress value.
//
prototype int State.Progress( hstate state );

//
// State.Restore( hstate state )
//
// Restart the task for the given state, if it is currently halted.
//
prototype State.Restore( hstate state );

//
// State.Lock(hstate state)
//
// Lock the state so no further SetProgress calls will work
//
prototype State.Lock(hstate state);

//
// State.Unlock(hstate state)
//
// Unlock the state
//
prototype State.Unlock(hstate state);

//
// bool State.IsLocked()
//
// Determine if the state is locked
//
prototype bool State.IsLocked(hstate state);

#endif // FLUX_LIB

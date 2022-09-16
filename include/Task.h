//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Task.h
//
// API for the package Task.
//
// Revision control information:
//
// $Header: /flux/packages/Task.h 8     7/08/01 15:06 Will $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Task);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "task" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// htask Cast( hobject o )
//
// Return the value of o if it is a valid task, or none if it isn't.
//
prototype htask Task.Cast( hobject o );

//
// htask Current()
//
// Return the handle of the current task
//
prototype htask Task.Current();

//
// Suspend( htask t )
//
// Suspend the given task.
//
prototype Task.Suspend( htask t );

//
// Resume( htask t )
//
// Allow the given task to resume execution.
//
prototype Task.Resume( htask t );

//
// SuspendAll()
//
// Suspend all tasks.
//
prototype Task.SuspendAll();

//
// ResumeAll()
//
// Allow all tasks to resume execution.
//
prototype Task.ResumeAll();

//
// Halt( htask t )
//
// Permanently halt the given task.
//
prototype Task.Halt( htask t );

//
// Sleep( htask t, float secs )
//
// Suspend the given task for the given time.
//
prototype Task.Sleep( htask t, float secs );

//
// Detach( htask t )
//
// Detach a child task from its parent and promote it to the top level.
//
prototype Task.Detach( htask t );

//
// bool IsRunning( htask task )
//
// Return true if the given task is running, false if not or if it does not
// exist.
//
prototype bool Task.IsRunning( htask t );

//
// bool IsHalted( htask task )
//
// Return true if the given task is halted, false if not or if it does not
// exist.
//
prototype bool Task.IsHalted( htask t );

//
// bool IsSuspended( htask task )
//
// Return true if the given task is suspended, false if not or if it does not
// exist.
//
prototype bool Task.IsSuspended( htask t );

//
// htask Start( string function );
//
// Start a specified task function. The function must take no arguments and
// return no value.
//
prototype htask Task.Start( string function );

//
// Call( string function );
//
// Call a specified function. The function must take no arguments and return
// no value.
//
prototype bool Task.Call( string function );


#endif // FLUX_LIB

//
// (c) 2001 Particle Systems Ltd. All Rights Reserved
//
// iMod.h
//
// API for user modification support.
//
// Revision control information:
//
// $Header: /iwar2/packages/iMod.h 1     7/08/01 15:18 Will $
//


#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(imod);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "imod" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// Query the mods directory.
//

// Build the mod list
prototype iMod.ScanDirectory();

// Return the number of mods in the mods directory.
prototype int iMod.Count();

// Return the name of the Nth mod in the mods directory.
prototype string iMod.Name( int n );

// Return the display name of the Nth mod in the mods directory
prototype string iMod.DisplayName( int n );

// Is the Nth mod a scenario
prototype bool iMod.IsScenario( int n );

// Activate or deactivate the Nth mod
prototype iMod.Enable( int n, bool enable );

#endif // FLUX_DLL

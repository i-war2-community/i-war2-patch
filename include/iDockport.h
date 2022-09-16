//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iDockport.h
//
// API for I-War 2 dockport control.
//
// Revision control information:
//
// $Header: /iwar2/packages/iDockport.h 13    1/05/01 16:54 Brett $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iDockport);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "idockport" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Type definitions ///////////////////////////////////////////////////////////

handle hdockport : hsubsim;

// Dependencies ///////////////////////////////////////////////////////////////

uses String, Subsim, Sim;

// Function prototypes ////////////////////////////////////////////////////////

//
// iDockport.Cast
//
// Attempts to cast a subsim to a dockport.
//
prototype hdockport iDockport.Cast( hobject dockport );

//
// Dockport types
//
enum eDockportType
{
	DT_All,								// All ports including those disabled
	DT_Disabled,						// Only disabled ports
	DT_Cargo,							// Cargo pod ports
	DT_CargoFreightOnly,				// The cargo freighter port
	DT_Freight,							// Freight ports (1 per station - the spewer main dockport)
	DT_Fuel,							// Fuel ports (usually 1 per station - refuel ports)
	DT_Ship,							// General ship / docking ports (was T_CommandSection)
	DT_General,							// General ports (including cargo)
	DT_Universal						// Universal (similar to the above)
};

//
// Dockport status
//
enum eDockportStatus
{
	// Default return value for invalid dockport handles
	DS_Invalid,
	DS_Free,
	DS_Reserved,
	DS_Used,
	DS_Any
};

//
// int iDockport.Count
//
// Returns a count of the number of free dockports on a given sim of the 
// given mask
//
prototype int iDockport.Count( hisim sim, eDockportType type, eDockportStatus status );

//
// set iDockport.DockportsOfType( 
//	hisim sim,
//	eDockportType type,
//  eDockportStatus status )
//
// Returns all matching dockports as a set.
//
prototype set iDockport.DockportsOfType( 
	hisim sim, 
	eDockportType type, 
	eDockportStatus status );

//
// set iDockport.DockportsCompatibleWith( 
//	hisim sim,
//	eDockportType type,
//  eDockportStatus status )
//
prototype set iDockport.DockportsCompatibleWith( 
	hisim sim,
	eDockportType type,
	eDockportStatus status );

//
// bool iDockport.Dock( hdockport us, hdockport them )
//
// Docks us to them.  Both dockports must be free and unreserved.  This
// function can still fail if either is shutdown in which case it returns
// false.
//
prototype bool iDockport.Dock( hdockport us, hdockport them );

//
// iDockport.Disable
//
// Disable the given dockport
//
prototype iDockport.Disable( hdockport dockport );

//
// iDockport.Enable
//
// Enables the given dockport
//
prototype iDockport.Enable( hdockport dockport );

//
// iDockport.SetType
//
// Sets a given dockport's type.
//
prototype iDockport.SetType( hdockport dockport, eDockportType type );

//
// eDockportStatus iDockport.Status( hdockport dockport )
//
// Returns a dockport's status.  The return value is one of eDockportStatus
// except for DS_Any.
//
prototype eDockportStatus iDockport.Status( hdockport dockport );

//
// bool iDockport.IsType( eDockportType dockport )
//
prototype bool iDockport.IsType( hdockport dockport, eDockportType type );

//
// bool iDockport.IsDisabled( hdockport dockport )
//
// Returns true if the dockport is disabled
//
prototype bool iDockport.IsDisabled( hdockport dockport );

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

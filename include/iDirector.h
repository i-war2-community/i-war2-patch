//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iDirector.h
//
// API for the package iDirector.
//
// Revision control information:
//
// $Header: /iwar2/packages/iDirector.h 9     5/03/01 11:39 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iDirector);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iDirector" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

uses Sim;

/**
 * Camera types. These must be kept in sync with cameras\iDirector.h
 */
enum eCamera 
{ 
	CAM_None,

	// Internal camera
	CAM_Internal, 

	// Internal camera without cockpit
	CAM_InternalNoCockpit,

	// Internal no HUD
	CAM_InternalNoHUD,

	// Chase camera
	CAM_Chase,

	// Chase camera with headup
	CAM_Arcade,
	
	// External camera
	CAM_External, 

	// Target external camera
	CAM_TargetExternal, 

	// Tactical camera
	CAM_Tactical,

	// Inverse tactical camera
	CAM_InverseTactical,

	// Flyby camera
	CAM_Flyby,

	// Drop camera
	CAM_Drop, 

	// Distant drop camera
	CAM_DistantDrop, 

	// Two-shot camera (focus on left, target on right)
	CAM_TwoShot,

	// Two-shot camera (foci reversed)
	CAM_InverseTwoShot,

	// Conversation camera (focus on left, target on right)
	CAM_Conversation,

	// Bridge shot camera (look at the front of the primary)
	CAM_BridgeShot,

	// Target bridge shot camera (look at the front of the secondary)
	CAM_TargetBridgeShot,

	// Contact camera (used to render target MFD)
	CAM_Contact,

	// Dolly camera, primary is the camera, secondary is looked at
	CAM_Dolly,

	// Tactical camera with no HUD
	CAM_TacticalNoHUD,

	// Distant bridge shot
	CAM_DistantBridgeShot,

	// Number of cameras.
	eCameraCount
};

//
// Begin function
//
// prototype void iDirector.Begin();
//
prototype iDirector.Begin();

//
// End function
//
// prototype void iDirector.End();
//
prototype iDirector.End();

//
// IsBusy
//
// prototype bool iDirector.IsBusy();
//
prototype bool iDirector.IsBusy();

//
// Captioning
//

//
// SetCaption
//
// prototype void iDirector.InUse();
//
prototype iDirector.SetCaption(string caption, float time);

//
// Focus
//

//
// Focus
//
// prototype void iDirector.Focus();
//
prototype hsim iDirector.Focus();

//
// SetFocus
//
// prototype void iDirector.SetFocus();
//
prototype iDirector.SetFocus(hsim sim);

//
// SecondaryFocus
//
// prototype void iDirector.SecondaryFocus();
//
prototype hsim iDirector.SecondaryFocus();

//
// SetSecondaryFocus
//
// prototype void iDirector.SetSecondaryFocus();
//
prototype iDirector.SetSecondaryFocus(hsim sim);

//
// Set camera
//

//
// Read the current camera
//
prototype eCamera iDirector.Camera();

//
// Set the current camera
//
prototype iDirector.SetCamera(eCamera camera);

//
// Dolly
//

//
// Create a dolly
//
prototype hsim iDirector.CreateDolly();

//
// Given two sims, set the direction of motion
//
prototype hsim iDirector.SetDirection(hsim dolly, hsim a, hsim b, float time, float acc_time);

//
// Use the given sim as a dolly camera. The dolly is used as the secondary
// focus, looking at the primary focus
//
prototype hsim iDirector.SetDollyCamera(hsim dolly);

//
// Attach the dolly cam to a sim. The dolly will be removed
// from any other sim its on.
//
prototype hsim iDirector.AttachDollyToSim(hsim dolly, hsim sim);

//
// Orientation of the dolly view is normally defined by what is being
// looked at (the primary focus). Calling this with true will allow
// the orientation to be picked up from the dolly sim orientation.
// Calling with false will reset to the normal behaviour
//
prototype iDirector.UseDollyOrientation(hsim dolly, bool dolly_orientation);

//
// Pick the view orientation from a given sim
//
prototype iDirector.UseSimOrientation(hsim dolly, hsim sim);

//
// Set the dolly to look forward
//
prototype iDirector.DollyLookForward(hsim dolly);

//
// Set Field of view 
//
prototype hsim iDirector.SetFieldOfView(float fov);

//
// Set Field of view between the two angles over time seconds
//
prototype hsim iDirector.SetInterpolateFieldOfView(float from, float to, float time);

//
// Set Field of view between the two angles over time seconds
//
prototype iDirector.Obituary(string caption);

//
// Set Field of view between the two angles over time seconds
//
prototype bool iDirector.IsObituaryView();

//
// Fade out to colour (r, g, b) over time seconds
//
prototype bool iDirector.FadeOut(float time, float r, float g, float b);

//
// Fade in from colour (r, g, b) over time seconds
//
prototype bool iDirector.FadeIn(float time, float r, float g, float b);

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

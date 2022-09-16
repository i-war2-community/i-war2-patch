//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iHUD.h
//
// Package API for I-War 2 HUD functionality
//
// Revision control information:
//
// $Header: /iwar2/packages/iHUD.h 7     9/04/01 12:08 Will $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iHUD);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iHUD" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

// Let C++ and Pog see the filter
enum eContactFilter
{ 
	CF_Ships, 
	CF_Waypoints 
};

#else

//
// iHUD.CurrentMenuNode
//
// Return the name (text key) of the current menu node. See hud.csv for what 
// these might be. The keys all have the form "hud_menu_xxxx"
// 
// Screens like the starmap and log screen are also identified in this way.
//
// If the HUD menu is closed the returned string will be empty.
//
prototype string iHUD.CurrentMenuNode();

//
// iHUD.LockMenu
//
// Lock the menu and prevent it from being operated. Pass true to lock and
// false to unlock.
//
prototype iHUD.LockMenu( bool enable );

//
// iHUD.FlashElement
//
// Cause a HUD element to briefly flash on and off. Only one element can
// flash at a time.
//
// Pass the classname of the element to flash. See user.ini or the iwar2
// codebase for possible classnames.
//
prototype iHUD.FlashElement( string class_name );

//
// iHUD.Print
//
// Print a string onto the HUD. The string is passed through the normal 
// message log and will be added to the log screen as well as displayed on
// the HUD. 
//
// The string should be a key for a localised text phrase.
//
prototype iHUD.Print( string key );

//
// iHUD.SetPrompt
//
// Set both HUD prompt lines. The prompts are not added to the log.
// To clear a prompt line, set it to the empty string "". There is no
// time-out on prompts - the script must clear them.
//
// The strings should be keys for localised text phrases.
//
prototype iHUD.SetPrompt( string first_prompt, string second_prompt );

//
// iHUD.SetContactFilter
//
// Set the current contact list filter mode.
//
prototype iHUD.SetContactFilter( eContactFilter which );

//
// iHUD.ContactFilter
//
// Retrieve the curernt contact list filter mode
//
prototype eContactFilter iHUD.ContactFilter();

//
// iHUD.SetTarget
//
// Attempt to target a sim. If the sim is not in the contact list it will not
// be targetted.
//
prototype iHUD.SetTarget( hsim sim );

//
// iHUD.ShowScore
//
// Shows the score sheet for the player on the HUD
//
prototype iHUD.ShowScore( );

// Sound effects
enum eAudioCue
{
	// Valid input bleep
	AC_ValidInput,

	// Invalid input bleep
	AC_InvalidInput,

	// Target change bleep
	AC_TargetChanged,

	// Missile warning bleep
	AC_MissileWarning,

	// Klaxon
	AC_Klaxon,

	// Ping sound
	AC_SonarPing,

	// How many cues
	eAudioCueCount
};

//
// iHUD.PlayAudioCue
//
// Play the given audio cue
//
prototype iHUD.PlayAudioCue( eAudioCue ac );

// HUD menu options ///////////////////////////////////////////////////////////

//
// iHUD.SetMenuNodeEnabled( string option, bool enabled )
//
// Sets the enabled/disabled status of a given menu option. 
//
prototype iHUD.SetMenuNodeEnabled( string option, bool enabled );

#endif // FLUX_LIB

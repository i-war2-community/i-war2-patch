//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iShip.h
//
// API for the package List.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iShip);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iship" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies
uses iSim, iHabitat;

// Declare the ship handle type
handle hship : hisim;

//
// hship iShip.Cast( hobject object_handle )
//
// Create a ship handle as a dynamic cast from the hobject
//
prototype hship iShip.Cast( hobject object_handle );

//
// hship iShip.Create( string template, string name )
//
// Create a ship using the given template, and set its name.
//
prototype hship iShip.Create( string template, string name );

//
// bool iShip.IsTrueShip( hship ship )
//
// Returns true if the given ship is a true ship (and therefore player 
// compatable) rather than simply a piloted sim.
//
prototype bool iShip.IsTrueShip( hship ship );

//
// iShip.InstallPlayerPilot( hship ship )
//
// Detach the player pilot from their current ship and attach it to this one.
//
prototype iShip.InstallPlayerPilot( hship ship );

//
// hship iShip.CreatePlayerShip( string name )
//
// Create the player ship - uses whichever ship is currently setup in the player
// loadout.
//
prototype hship iShip.CreatePlayerShip( string name );

//
// list iShip.CreateTurretFighters()
//
// Create the turret fighters - uses the current loadout.
//
prototype list iShip.CreateTurretFighters();

//
// iShip.InstallAIPilot( hship ship )
//
// Attach an AI pilot to this ship and detach the player pilot if attached.
//
// Arg 0 : The ship handle
// Arg 1 : Fight/Flee threshold
// Arg 2 : Ignore/Fight threshold
// Arg 3 : Self preservation ratio (% hit points to self preserve)
// Arg 4 : Fight function
// Arg 5 : Flee function
// Arg 6 : Ignore function
// Arg 7 : Self preservation function
//
prototype iShip.InstallAIPilot( hship ship , float ignore_fight, float fight_flee,
							    float self_preserve, string fight_func,
								string flee_func, string ignore_func, 
								string self_preserve_func );

//
// iShip.SetPilotSkillLevel
//
// Sets the skill level of the pilot (0->1)
//
prototype iShip.SetPilotSkillLevel( hship ship, float level );

//
// iShip.PilotSkillLevel
//
// Gets the pilot skill level (0->1)
//
prototype float iShip.PilotSkillLevel( hship ship );

//
// iShip.RemovePilot
//
// Removes any pilot in the given ship
//
prototype iShip.RemovePilot( hship ship );

//
// string iShip.RandomName( hship ship )
//
// Fetch a random name for the ship
//
prototype string iShip.RandomName( hship ship );

//
// hship iShip.FindPlayerShip()
//
// Locate the player pilot and return the ship pointer for the ship that it is
// currently attached too.
//
prototype hship iShip.FindPlayerShip();

//
// hisim iShip.CurrentTarget()
//
// Returns the current target of the given ship. 
//
// note: this is the contact picked from the contact list by the current pilot
// 			this is NOT the explicit target.
//
prototype hisim iShip.CurrentTarget( hship ship );

//
// bool iShip.Attacked( hship ship )
//
// Returns true if the ship has been attacked.
//
prototype bool iShip.Attacked( hship ship );

//
// hisim iShip.LastAttacker( hship ship )
//
// Returns the last iSim to have attacked the given ship.
//
prototype hisim iShip.LastAttacker( hship ship );

//
// bool iShip.HasFired( hship ship )
//
// Returns true if the ship has fired.
//
prototype bool iShip.HasFired( hship ship );

//
// hobject iShip.LastFireTarget( hship ship )
//
// Returns the last fire target - note that this may be a subsim.
//
prototype hobject iShip.LastFireTarget( hship ship );

//
// iShip.DisruptLDSDrive( hship ship, float time_in_seconds )
//
// Ensures any LDS drive on a ship is disrupted for the given time.
//
prototype iShip.DisruptLDSDrive( hship ship, float time_in_seconds );

//
// iShip.Disrupt( hship ship, float time_in_seconds, bool shields_only )
//
// Disrupts the given ship for the given time.  If shields only is TRUE then
// it will only disrupt shields
//
prototype iShip.Disrupt( hship ship, float time_in_seconds, bool shields_only );

//
// iShip.CancelDisrupt( hship ship )
//
// Cancels all distruption of a ship
//
prototype iShip.CancelDisrupt( hship ship );

//
// bool iShip.IsInLDS( hship ship )
//
// Returns TRUE if the given ship has an LDS drive and is in LDS
//
prototype bool iShip.IsInLDS( hship ship );

//
// bool iShip.IsDisrupted( hship ship )
//
// Returns TRUE if the ship is disrupted
//
prototype bool iShip.IsDisrupted( hship ship );

//
// bool iShip.IsLDSInhibited( hship ship )
//
// Returns TRUE if the ship is LDS inhibited
//
prototype bool iShip.IsLDSInhibited( hship ship );

//
// bool iShip.IsLDSScrambled( hship ship )
//
// Returns TRUE if the ship is LDS scrambled (e.g. LDSi missile)
//
prototype bool iShip.IsLDSScrambled( hship ship );

//
// float iShip.PercentageThrusterEmission( hship vessel )
//
// Returns the percentage thruster emmission (the percentage emission of a 
// ship's thrusters from max.
//
prototype float iShip.PercentageThrusterEmission( hship vessel );

//
// float iShip.BrightnessOf( hship vessel, hsim sim, float attenuation_factor )
//
// Returns the brightness of a given vessel from the viewpoint of the sim
// with the given distance attenuation factor -- used to represent sensor
// ability.  Attenuation is either linear (or squared 'square_attenuation') over 
// this distance.
//
prototype float iShip.BrightnessOf( hship vessel, hsim sim, float attenuation_range,
								    bool squared_attenuation );

//
// bool iShip.Dock( hship ship, hsim sim )
//
// Dock the ship to the given sim. This function picks an available docking port on 
// the ship and looks for a compatible port on the sim.
//
prototype bool iShip.Dock( hsim ship, hsim sim );

//
// bool iShip.Undock( hship ship, hsim sim )
//
// Undock the ship from the given sim. Returns true and releases the lock
// if the ship was attached.
//
prototype bool iShip.Undock( hship ship, hsim sim );


//
// iShip.UndockSelf( hship ship )
//
// Undock the ship whatever it's docked to. Returns true and releases the lock
// if the ship was attached.
//
prototype iShip.UndockSelf( hship ship );

//
// iShip.Heal( hship ship )
//
// Heals a ship and all its subsims back to full health
//
prototype iShip.Heal( hship ship );

//
// iShip.ResetPlayer
//
// Reset the player ship state - reseting TRI settings, turning off LDS etc
//
prototype iShip.ResetPlayer();

//
// bool iShip.IsFreeWithoutPilot( hship ship )
//
// Returns TRUE if the given sim is allowed free flight mode without a pilot
//
prototype bool iShip.IsFreeWithoutPilot( hship ship );

//
// iShip.SetFreeWithoutPilot( hship ship, bool flag)
//
//  If TRUE allows the ship without a pilot to stay in free flight mode.
//
prototype iShip.SetFreeWithoutPilot( hship ship, bool flag );

//
// float MaxSensorRange( hship ship )
//
// Find and return the maximum (i.e. undamaged) sensor range of a given ship
//
prototype float iShip.MaxSensorRange( hship ship );

// Weapon setup ///////////////////////////////////////////////////////////////

//
// iShip.LockDownWeapons( hship ship )
//
// Locks all weapons down on the ship.  Returns TRUE if it succeeded
//
prototype bool iShip.LockDownWeapons( hship ship );

//
// iShip.WeaponTargetFromContactList( hship ship)
//
// Sets all weapon targets from the contact list (generic attack weapon mode)
// Returns TRUE if it succeeded
//
prototype bool iShip.WeaponTargetsFromContactList( hship ship );

//
// iShip.WeaponsUseExplicitTarget( hship ship, hisim target )
//
// Sets all weapon targets to the given target (scripted attack weapon mode)
// Returns TRUE if it succeeded
//
prototype bool iShip.WeaponsUseExplicitTarget( hship ship, hisim target );

// Player ship ////////////////////////////////////////////////////////////////

//
// bool iShip.HasHyperSpaceTracker( )
//
// Returns true if the player has a hyperspace tracker
//
prototype bool iShip.HasHyperSpaceTracker( hship ship );

//
// hisim iShip.HyperSpaceTrackerContact( )
//
// Returns the last contact tracked through hyperspace
//
prototype hisim iShip.HyperSpaceTrackerContact( );

//
// hsim iShip.HyperSpaceTrackerTarget( )
//
// Returns the target of the last hyperspace tracked jump
//
prototype hisim iShip.HyperSpaceTrackerTarget( );

//
// iShip.RecalculateMOIFromMass( hship ship )
//
// Recalculate Moment of Inertia and torque from
// new mass,
//
prototype iShip.RecalculateMOIFromMass( hship ship );

//
// iShip.SetAIDisabled( hship ship, bool disabled )
//
// True if the AI is to be disabled
//
prototype iShip.SetAIDisabled( hship ship, bool disabled );

//
// bool iShip.IsAIDisabled( hship ship )
//
// Returns True if the AI is disabled
//
prototype bool iShip.IsAIDisabled( hship ship );

#endif // FLUX_LIB

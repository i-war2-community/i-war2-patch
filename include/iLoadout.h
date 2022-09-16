//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iLoadout.h
//
// Pog header file for the iLoadout package.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iLoadout);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iloadout" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies ///////////////////////////////////////////////////////////////

uses iShip;

// Type definitions ///////////////////////////////////////////////////////////

// Enumeration of ship types. Must tie in with the enumeration values in the
// icLoadout class.
enum eShip
{ 
	S_CommandSection, 
	S_Tug,
	S_FastAttackShip,
	S_HeavyCorvette,
	S_StormPetrel,
	S_Count
};

// The various loadout options.
enum eLoadout
{
	L_Empty,
	L_Standard,
	L_Assault,
	L_Stealth,
	L_ECM,
	L_Custom1,
	L_Custom2,
	L_Count
};

// The success of a rearming operation - see iLoadout.RearmFromJaffs.
// Maintain in parallel with icLoadout.
enum eRearmSuccess
{
	RS_CompleteRefit,
	RS_PartialRefit,
	RS_NoRefitPossible,
	RS_RefitUnnecessary
};

// Loadout management /////////////////////////////////////////////////////////

//
// bool iLoadout.LoadoutActive()
//
// Is there currently a loadout active?
//
prototype bool iLoadout.LoadoutActive();

//
// bool GoodToGo()
//
// Is the ship chosen and the loadout valid?
//
prototype bool iLoadout.GoodToGo();

//
// eLoadout CurrentLoadout()
//
// The loadout chosen for the current ship
//
prototype eLoadout iLoadout.CurrentLoadout();

//
// string LoadoutName( eLoadout loadout )
//
// The name of the loadout chosen for the current ship
//
prototype string iLoadout.LoadoutName( eLoadout loadout );

//
// iLoadout.CalculateLoadout
//
// Work out the ship loadout best suited to the given loadout choice.
//
prototype iLoadout.CalculateLoadout( eLoadout loadout );

//
// string iLoadout.LoadoutDescription
//
// An HTML description of the current loadout.
//
prototype string iLoadout.LoadoutDescription();

//
// eLoadout iLoadout.LoadoutFromInt( int loadout )
//
// Convert the loadout from an int to a member of the loadout enumeration
//
prototype eLoadout iLoadout.LoadoutFromInt( int loadout );

//
// int iLoadout.UnusedInternalCargoSlots
//
// Get the spare internal cargo slots
//
prototype int iLoadout.UnusedInternalCargoSlots();

// 
// bool iLoadout.RemoteFighterMounted
//
// Do we have a remote fighter loaded out?
//
prototype bool iLoadout.RemoteFighterMounted(); 

// 
// iLoadout.RemoveRemoteFighter
//
// Cancel any loaded out remote fighter 
//
prototype iLoadout.RemoveRemoteFighter(); 

//
// iLoadout.RegisterAmmoType( string weapon_template )
//
// Register a type of ammo by the template of it's launcher or gun
//
prototype iLoadout.RegisterAmmoType( string weapon_template );

//
// iLoadout.RemoveTurretFighters
//
// Take the existing loadout and remove any T-fighters from it. This is needed
// whenever we plan to make the T-Fighters unavailable for a mission - you 
// remove them from the loadout and then remove them from the inventory.
//
prototype iLoadout.RemoveTurretFighters();

//
// iLoadout.TurretFightersInLoadout
//
// Get the number of turret fighters loaded out on the player ship
//
prototype int iLoadout.TurretFightersInLoadout();

//
// iLoadout.SetDesiredNumberOfTurretFighters( int num_fighters )
//
// Set the desired number of turret fighters for automatic loadouts
//
prototype iLoadout.SetDesiredNumberOfTurretFighters( int num_fighters );

// Ship management ///////////////////////////////////////////////////////////

// 
// eShip Ship()
//
// Get the current ship.
//
prototype eShip iLoadout.Ship();

// 
// SetShip( eShip ship )
//
// Set the ship to fly.
//
prototype iLoadout.SetShip( eShip ship );

//
// string ShipName( eShip ship )
//
// Get the name of the given ship
//
prototype string iLoadout.ShipName( eShip ship );

//
// string ShipTypeName( eShip ship )
//
// Get the name of the type of the currently loaded out ship
//
prototype string iLoadout.ShipTypeName( eShip ship );

//
// StripShip( hship ship )
//
// Strip the player ship (which is passed in) of all its systems and weapons.
// This will cancel the current loadout. 
//
prototype iLoadout.StripShip( hship ship );

//
// StripTurretFighters( list turret_fighters )
//
// Strip the given turret fighters of it's loaded out weaponary.
//
prototype iLoadout.StripTurretFighters( list turret_fighters );

//
// eRearmSuccess RearmFromJaffs( hship ship )
//
// Attempt to rearm any ammo limited weapons from the player's inventory. 
// Returns a value indicating how successful the rearming went.
//
prototype eRearmSuccess iLoadout.RearmFromJaffs( hship ship );

//
// eRearmSuccess RearmFromThirdParty( hship ship, float refit_limit )
//
// Attempt to rearm any ammo limited weapons from a third party. The second 
// argument defines what proportion of the total capacity of the weapon will
// be refilled. i.e. if the refit limit was 0.5 then an assault cannon with a 
// capacity of 1000 rounds will only be topped up by a maximum of 500 rounds.
// Returns a value indicating how successful the rearming went.
//
prototype eRearmSuccess iLoadout.RearmFromThirdParty( 
	hship ship, 
	float refit_limit );

// Cargo management ///////////////////////////////////////////////////////////

//
// SetCargo( int cargo_type )
//
// Set the cargo to attach to the player ship.
//
prototype iLoadout.SetCargo( int cargo_type );

//
// int Cargo()
//
// Get the cargo to attach to the player ship.
//
prototype int iLoadout.Cargo();

// Customised loadout functions ///////////////////////////////////////////////

//
// StartCustomisedLoadout
//
// Start a customised loadout in native code 
//
prototype iLoadout.StartCustomisedLoadout( 
	hwindow splitter_window, 
	hwindow text_box );

//
// EndCustomisedLoadout
//
// Well, that just about wraps it up for this customised loadout.
//
prototype iLoadout.EndCustomisedLoadout();

//
// iLoadout.UpdateCustomisedLoadoutTextBox
//
// Update the customised loadout text box
//
prototype iLoadout.UpdateCustomisedLoadoutTextBox();

//
// iLoadout.OnCustomiseScreenSelect
//
// When an option is selected on the customised loadout screen, this function
// is called.
//
prototype iLoadout.OnCustomiseScreenSelect();

//
// bool iLoadout.OnCustomiseScreenBack
//
// To go back a mode in the customisation 
//
prototype bool iLoadout.OnCustomiseScreenBack();

//
// int iLoadout.CustomisedLoadoutMode
//
// Get the current mode in the customised loadout
//
prototype int iLoadout.CustomisedLoadoutMode();

//
// bool iLoadout.CargoSpaceWarning()
//
// Are we currently displaying a 'lack of cargo space' warning?
//
prototype bool iLoadout.CargoSpaceWarning();

// Window management //////////////////////////////////////////////////////////

//
// iLoadout.SetManifestWindow
//
// Sets the manifest window
//
prototype iLoadout.SetManifestWindow( hwindow window );

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

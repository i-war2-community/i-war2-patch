//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iSim.h
//
// API for the package iSim.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iSim);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "isim" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

// Types of sim. Can be combined as a bitfield - included during C++ build
// so that the types can be referenced safely by name.
enum eSimType
{
	// No type
	T_None				= 0x00000000,

	// Celestial bodies
	T_Star				= 0x00000001,
	T_Planet			= 0x00000002,
	T_Nebula			= 0x00000004,

	// Non-ships (not avoided)
	T_Waypoint			= 0x00000008,
	T_LagrangePoint		= 0x00000010,
	T_Probe				= 0x00000020,

	// Weapons
	T_Weapon			= 0x00000040,
	T_Missile			= 0x00000080,
	T_Mine				= 0x00000100,

	// Camera dolly (not avoided)
	T_Dolly             = 0x00000200,

	// Non-ships
	T_Asteroid			= 0x00000400,
	T_CargoPod			= 0x00000800,

	// Bases
	T_Gunstar			= 0x00001000,
	T_Station			= 0x00002000,
	T_BioBomber			= 0x00004000,

	// Ships (in rough size order)
	T_Drone				= 0x00008000,
	T_Waldo				= 0x00010000,	
	T_CommandSection	= 0x00020000,
	T_Utility			= 0x00040000,	
	T_Passenger			= 0x00080000,	
	T_Fighter			= 0x00100000,
	T_Tug				= 0x00200000,
	T_Patcom			= 0x00400000,
	T_Interceptor		= 0x00800000,
	T_Corvette			= 0x01000000,
	T_Freighter			= 0x02000000,
	T_Destroyer			= 0x04000000,
	T_Cruiser			= 0x08000000,
	T_Carrier			= 0x10000000,

	// Other things 
	T_Alien             = 0x20000000,

	// Multiplayer features
	T_PowerUp           = 0x40000000,

	//
	// Masks (combinations)
	//

	// All celestial phenomena
	TM_CelestialBody	= T_Star | 
						  T_Planet | 
						  T_Nebula,

	// All ships
	TM_Ship				= T_Drone |
						  T_Waldo |
						  T_CommandSection |
						  T_Utility |
						  T_Passenger | 
						  T_Fighter |
						  T_Tug |
						  T_Patcom |
						  T_Corvette |
						  T_Freighter |
						  T_Destroyer |
						  T_Cruiser |
						  T_Interceptor |
						  T_Carrier
};

//
// For explosions
//
enum eExplosion
{
	SE_Normal,
	SE_AntiMatter
};

#else

// Dependency on sim
uses Sim;

// Declare the I-War 2 sim handle type
handle hisim : hsim;

// Dependencies
uses iFaction, iMapEntity;

//
// hisim iSim.Cast( hobject object_handle )
//
// Create a hisim handle as a dynamic cast from the hobject
//
prototype hisim iSim.Cast( hobject object_handle );

//
// eSimType iSim.Type( hobject object_handle )
//
// Return the type of sim.
//
prototype eSimType iSim.Type( hobject object_handle );

//
// Kill( hisim sim )
//
// Destroys a sim and removes it from the world (with explosions)
//
prototype iSim.Kill( hisim sim );

//
// CreateExplosion( hisim sim )
//
// Creates an explosion for the sim. The sim is unharmed and not destroyed.
//
prototype iSim.CreateExplosion( hisim sim );

//
// hfaction iSim.Faction( hisim sim_handle )
//
// Find the faction handle of an isim
//
prototype hfaction iSim.Faction( hisim sim_handle );

//
// iSim.SetFaction( hisim sim_handle, hfaction faction )
//
// Set the faction of an isim
//
prototype iSim.SetFaction( hisim sim_handle, hfaction faction );

//
// set iSim.SimsInRadius( hisim sim, float radius, enum eSimType type )
//
// Returns all sims of a particular type within the given radius around the 
// given sim except for the given sim
//
prototype set iSim.SimsInRadius( hisim sim, float radius, int type );

//
// set iSim.SimsInRadiusOfFaction( hisim sim, float radius, hfaction faction )
//
// Returns all sims of a particular faction within the given radius around the given
// sim except for the given sim.
//
prototype set iSim.SimsInRadiusOfFaction( hisim sim, float radius, hfaction faction );

//
// set iSim.SimsInCone( hisim sim, float start_width, float end_width, float length, enum eSimType type )
//
// Returns all sims of the given type in the cone or cylinder defined by the arguments
// except for the given sim
//
prototype set iSim.SimsInCone( hisim sim, float start_width, float end_width, float length, int type );

//
// set iSim.SimsInCylinder( hisim sim, float start_width, float end_width, float length, enum eSimType type )
//
// Returns all sims of the given type in the cone or cylinder defined by the arguments except for the given sim
//
prototype set iSim.SimsInCylinder( hisim sim, float width, float length, int type );

//
// set iSim.SimsInRadiusFromSet( 
//	set set_of_sims,
//	hisim sim, 
//	float radius, 
//	enum eSimType type )
//
// Returns all sims of a particular type within the given radius around the 
// given sim except for the given sim
//
prototype set iSim.SimsInRadiusFromSet( 
	set set_of_sims,
	hisim sim, 
	float radius, 
	int type );

//
// set iSim.ShipsInRadius( hisim sim, float radius )
//
// Returns all ships within the given radius around the given sim except 
// for the given sim.
//
prototype set iSim.ShipsInRadius( hisim sim, float radius );

//
// set iSim.NonPlanetaryInRadius( hisim sim, float radius )
//
// Returns all non-planetary map entities (habitats and l-points) within the 
// given radius around the given sim except for the given sim
//
prototype set iSim.NonPlanetaryInRadius( hisim sim, float radius );

//
// bool iSim.IsDocked( hisim sim )
//
// Return whether or not this sim is docked to anything.
//
prototype bool iSim.IsDocked( hisim sim );

//
// bool iSim.IsDockedTo( hisim sim1, hisim sim2 )
//  
// Returns whether or not the given sims are docked together
//
prototype bool iSim.IsDockedTo( hisim sim1, hisim sim2 );

//
// bool iSim.IsDockedToStructure( hisim sim1, hisim sim2 )
//
// Returns true if sim1 is docked to sim2 or any of its children.
//
prototype bool iSim.IsDockedToStructure( hisim sim1, hisim sim2 );

//
// iSim.SetDockingLock( hisim sim1, hisim sim2, bool lock )
//
// Locks or unlocks any docking ports between sim1 and sim2.  For this 
// function to be of any use sim1 should be docked to the sim2.  Note that
// that unlock does not undock the two sims it mearly makes undocking possible.
// bool lock = on/off
//
prototype iSim.SetDockingLock( hisim sim1, hisim sim2, bool lock );

//
// iSim.Dock( hisim sim1, hisim sim2 )
//
// Attempt to dock sim1 to sim2.
//
prototype bool iSim.Dock( hisim sim1, hisim sim2 );

//
// iSim.Undock( hisim sim1, hisim sim2 )
//
// Undock sim1 from sim2.
//
prototype bool iSim.Undock( hisim sim1, hisim sim2 );

//
// SetSensorVisibility( hisim waypoint, bool visible )
//
// Sets the visibility of the given iiSim
//
prototype iSim.SetSensorVisibility( hisim waypoint, bool visible );

//
// SetStandardSensorVisibility( hisim waypoint, bool visible )
//
// Sets the standard visibility of the given iiSim.  Note that this overrides
// SetSensorVisibility in removing the forced sensibility (visible from all 
// systems) and replacing it with standard local visibility.
//
prototype iSim.SetStandardSensorVisibility( hisim the_sim, bool visible );

//
// bool IsIndestructable( hisim sim )
//
// Returns TRUE if the given sim is flagged as interesting.
//
prototype bool iSim.IsIndestructable( hisim sim );

//
// bool iSim.Attacked( hisim ship )
//
// Returns true if the sim has been attacked.
//
prototype bool iSim.Attacked( hisim ship );

//
// hisim iSim.LastAttacker( hisim ship )
//
// Returns the last iSim to have attacked the given sim.
//
prototype hisim iSim.LastAttacker( hisim ship );

//
// bool IsMissionCritical( hisim sim )
//
// Returns TRUE if the given sim is flagged as mission critical.
//
prototype bool iSim.IsMissionCritical( hisim sim );

//
// string ActiveWorld()
//
// Returns the name of the active world as a string - returns Loading if the 
// system is loading
//
prototype string iSim.ActiveWorld();

//
// string iSim.WorldName( hisim sim )
//
// Returns the current world name of the sim in question - returns Loading if 
// the system is loading or None if the sim is not in a world.
//
prototype string iSim.WorldName( hisim sim );

//
// SetIndestructable( hisim sim, bool flag)
//
// Sets the interesting flag of the sim
//
prototype iSim.SetIndestructable( hisim sim, bool flag );

//
// SetMissionCritical( hisim sim, bool flag)
//
// Sets the mission critical flag of the sim
//
prototype iSim.SetMissionCritical( hisim sim, bool flag );

//
// hisim FindByNameInSystem( string name, string system )
//
// Returns the handle of the first sim matching the given name in the given system.
//
prototype hisim iSim.FindByNameInSystem( string name, string system );

//
// set FindByWildcardInSystem( string wildcard, string system )
//
// Returns the set of hisim handles which match the given wildcard in the given system
//
prototype set iSim.FindByWildcardInSystem( string wildcard, string system );

//
// CapsuleJump( hisim sim, hisim destination )
//
// Cause sim to perform a capsule jump to the given destination. The
// destination can be in the same system or another system.  The exit
// point will be along the destination jump point's local Z.
//
prototype iSim.CapsuleJump( hisim sim, hisim destination );

//
// CapsuleJumpStaggered( hisim sim, hisim destination )
//
// Cause sim to perform a capsule jump to the given destination. The
// destination can be in the same system or another system.  The exit point
// will be staggered.
//
prototype iSim.CapsuleJumpStaggered( hisim sim, hisim destination );

prototype iSim.CapsuleJumpCustom( hisim sim, hisim destination, float exit_x, float exit_y, float exit_speed );

//
// IsCapsuleJumping( hisim sim )
//
// Returns true if the given sim is capsule jumping
//
prototype bool iSim.IsCapsuleJumping( hisim sim );


//
// IsRespawning( hisim sim )
//
// Returns true if the given sim is respawning in a multiplayer game
//
prototype bool iSim.IsRespawning( hisim sim );

//
// SetAlienInfectionDamage( hisim sim, float damage_per_second )
//
// Infect the sim by an alien. Starts damage by the given rate. 
//
prototype iSim.SetAlienInfectionDamage( hisim sim, float rate );

//
// AlienInfectionEffect( hisim sim, bool on )
//
// Infect the sim by an alien. Starts damage by the given rate. 
//
prototype iSim.AlienInfectionEffect( hisim sim, bool on );

//
// AlienInfectionDamage(hisim sim)
//
// Return the alien infection damage rate (damage per second)
//
prototype float iSim.AlienInfectionDamage( hisim sim );

//
// IsAlienInfectionEffectOn(hisim sim)
//
// return true if the alien effect is on the given sim
//
prototype bool iSim.IsAlienInfectionEffectOn( hisim sim);

//
// iSim.IsDying
//
// Returns TRUE if a sim has been killed and is either A) exploding
// or B) has a death script running.
//
prototype bool iSim.IsDying( hisim sim );

//
// iShip.PlayerHostilesInRadius
//
// Returns a set of hostiles within a specified range of the player.
//
prototype set iSim.PlayerHostilesInRadius( float radius, int mask );

//
// Start an explosion of on the sim
//
prototype iSim.StartExplosion(hisim sim);

//
// Stop the explosion on a sim, with given explosion type and optionally destroying the sim
//
prototype iSim.StopExplosion(hisim sim, eExplosion explosion, bool destroy_sim);

//
// iSim.LockDownWeapons( hship ship )
//
// Locks all weapons down on the sim.  Returns TRUE if it succeeded
//
prototype bool iSim.LockDownWeapons( hisim sim );

//
// iSim.WeaponTargetFromContactList( hship ship)
//
// Sets all weapon targets to their own devices (or contact list)
//
prototype bool iSim.WeaponTargetsFromContactList( hisim sim );

//
// iSim.WeaponsUseExplicitTarget( hship ship, hisim target )
//
// Sets all weapons to fire on a specific sim.
//
prototype bool iSim.WeaponsUseExplicitTarget( hisim sim, hisim target );

//
// iSim.SetHostile( bool state )
//
// Sets this sim (non-)hostile to the player
//
prototype iSim.SetHostile( hisim sim, bool state );

#endif // FLUX_LIB

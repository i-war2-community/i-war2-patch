//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iDeathScript.h
//
// Compiler-generated export header for package "iDeathScript"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iDeathScript.h 5     24/03/01 14:45 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype task iDeathScript.Antimatter( hsim sim );

prototype task iDeathScript.Explosives( hsim sim );

prototype task iDeathScript.AlienDeath( hsim sim );

prototype task iDeathScript.PlayerDeathScript( hsim sim );

prototype task iDeathScript.MegaPodDeath( hsim sim );

prototype task iDeathScript.CriticalShipDeath( hisim sim );

prototype iDeathScript.SetupCriticalGroupDeath( hgroup critical_group, int critical_number );

prototype task iDeathScript.CriticalGroupDeath( hisim sim );

prototype iDeathScript.RestorePlayerShip( hsim player_ship, hsim mission_waypoint );


// EOF /////////////////////////////////////////////////////////////////////////


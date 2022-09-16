//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iMPUtils.h
//
// Compiler-generated export header for package "iMPUtils"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iMPUtils.h 8     5/07/01 17:08 Carl $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype hgroup iMPUtils.create_asteroids( hsim location );

prototype iMPUtils.create_graveyard( hsim location, float x_offset, float y_offset, float z_offset, string name );

prototype iMPUtils.WeaponAmmoPowerUp( hsim powerup, hsim ship );

prototype iMPUtils.SpeedPowerUp( hsim powerup, hsim ship );

prototype iMPUtils.SpeedPowerDown( hsim powerup, hsim ship );

prototype iMPUtils.HealthPowerUp( hsim powerup, hsim ship );

prototype iMPUtils.SpawnKilledPlayerPowerUps( hsim player );

prototype task iMPUtils.WeaponPowerUpGeneratorTask( hgroup spawn_points );

prototype iMPUtils.ClientSendDebugInfo();

prototype iMPUtils.ClientTauntReturn( string taunt );

prototype iMPUtils.ServerDoDebug( hisim originator, string data );

prototype hsim iMPUtils.FindSystemCentre();

prototype iMPUtils.SpawnPlayer( hsim player, hgroup spawn_points );

prototype string iMPUtils.MakeDeathMessage( hsim attacker, hsim player );

prototype task iMPUtils.CheckFragLimit();
prototype task iMPUtils.CheckTimeLimit();

// EOF /////////////////////////////////////////////////////////////////////////


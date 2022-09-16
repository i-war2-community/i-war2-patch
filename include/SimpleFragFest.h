//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// SimpleFragFest.h
//
// Compiler-generated export header for package "SimpleFragFest"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/SimpleFragFest.h 2     3/09/00 18:55 Carl $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype SimpleFragFest.ServerMain();

prototype SimpleFragFest.ServerPlayerEnter( hsim player );

prototype SimpleFragFest.ServerPlayerLeave( hsim player );

prototype SimpleFragFest.ServerOnUserMessage( hsim sim );

prototype SimpleFragFest.ClientMain();

prototype SimpleFragFest.ClientTauntPlayer();

prototype SimpleFragFest.ClientDebug();

prototype SimpleFragFest.ClientPlayerKilled();

prototype SimpleFragFest.ClientOpponentKilled( hsim opponent );

prototype SimpleFragFest.ClientPlayerEnter( hsim ship );

prototype SimpleFragFest.ClientPlayerLeave();

prototype SimpleFragFest.ClientEndGame();

prototype SimpleFragFest.ClientRespawn( hship ship );

prototype SimpleFragFest.ClientGUI();

prototype SimpleFragFest.ClientTauntReturn( string taunt );

prototype SimpleFragFest.ClientDefaultTaunt1();

prototype SimpleFragFest.ClientDefaultTaunt2();

prototype SimpleFragFest.ClientDefaultTaunt3();

prototype SimpleFragFest.ClientDefaultTaunt4();

prototype SimpleFragFest.WeaponAmmoPowerUp( hsim powerup, hsim ship );

prototype SimpleFragFest.WeaponAmmoPowerUp( hsim powerup, hsim ship );

prototype SimpleFragFest.HealthPowerUp( hsim powerup, hsim ship );

prototype SimpleFragFest.SpeedPowerUp( hsim powerup, hsim ship );

prototype SimpleFragFest.SpeedPowerDown( hsim powerup, hsim ship );

// EOF /////////////////////////////////////////////////////////////////////////


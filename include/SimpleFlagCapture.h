//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// SimpleFlagCapture.h
//
// Compiler-generated export header for package "SimpleFlagCapture"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/SimpleFlagCapture.h 2     3/09/00 18:53 Carl $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype SimpleFlagCapture.ServerMain();

prototype SimpleFlagCapture.ServerPlayerEnter( hsim player );

prototype SimpleFlagCapture.ServerPlayerLeave( hsim player );

prototype SimpleFlagCapture.ServerOnUserMessage( hsim sim, int type, string data );

prototype SimpleFlagCapture.ClientMain();

prototype SimpleFlagCapture.ClientPlayerEnter( hsim ship );

prototype SimpleFlagCapture.ClientPlayerLeave();

prototype SimpleFlagCapture.ClientTauntPlayer();

prototype SimpleFlagCapture.ClientPlayerKilled();

prototype SimpleFlagCapture.ClientOpponentKilled( hsim opponent );

prototype SimpleFlagCapture.ClientOnUserMessage( hsim sim, int type, string data );

prototype SimpleFlagCapture.ClientEndGame();

prototype SimpleFlagCapture.ClientDebug();

prototype SimpleFlagCapture.ClientRespawn( hship ship );

prototype SimpleFlagCapture.ClientGUI();

prototype SimpleFlagCapture.ClientTauntReturn( string taunt );

prototype SimpleFlagCapture.ClientDefaultTaunt1();

prototype SimpleFlagCapture.ClientDefaultTaunt2();

prototype SimpleFlagCapture.ClientDefaultTaunt3();

prototype SimpleFlagCapture.ClientDefaultTaunt4();

prototype SimpleFlagCapture.WeaponAmmoPowerUp( hsim powerup, hsim ship );

prototype SimpleFlagCapture.HealthPowerUp( hsim powerup, hsim ship );

prototype SimpleFlagCapture.SpeedPowerUp( hsim powerup, hsim ship );

prototype SimpleFlagCapture.SpeedPowerDown( hsim powerup, hsim ship );

prototype SimpleFlagCapture.CaptureTheFlagScreen();

prototype SimpleFlagCapture.OnSelectRedTeam();

prototype SimpleFlagCapture.OnSelectBlueTeam();

prototype SimpleFlagCapture.ScoreScreenQuitButton();

prototype SimpleFlagCapture.OnQuit();

// EOF /////////////////////////////////////////////////////////////////////////


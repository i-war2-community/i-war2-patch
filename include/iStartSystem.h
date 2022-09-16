//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iStartSystem.h
//
// Compiler-generated export header for package "iStartSystem"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iStartSystem.h 13    2/04/01 10:41 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype iStartSystem.StartupNewGame();

prototype iStartSystem.StartupSession();

prototype iStartSystem.StartupSpace();

prototype iStartSystem.FinalSetup();

prototype iStartSystem.ShutdownSpace();

prototype iStartSystem.StartupSystem();

prototype iStartSystem.ShutdownSystem();

prototype iStartSystem.SkipCutscene();

prototype task iStartSystem.player_death_script( hsim sim );

prototype task iStartSystem.CriticalMissionFail( hsim sim, string caption );

prototype iStartSystem.SetPlayerBaseMoviesVisible( bool visible );

prototype iStartSystem.HideMapLocations();

prototype iStartSystem.JumpgateShieldOn( hisim jumpgate, bool force_on );

prototype iStartSystem.JumpgateShieldOff( hisim jumpgate );

prototype hmapentity iStartSystem.MovePlayerBase( string start_system, string destination_system );

// EOF /////////////////////////////////////////////////////////////////////////

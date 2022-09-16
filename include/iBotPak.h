//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iBotPak.h
//
// Compiler-generated export header for package "iBotPak"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iBotPak.h 2     9/01/01 12:27 Carl $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

enum eGameType {

	GT_DeathMatch,
	GT_CaptureTheFlag,
	GT_BombTag
};


prototype hobject iBotPak.CreateBotShips( string ini, int number_of_ships, float skill_level, hfaction faction, hship request_ship, string team_name );

prototype iBotPak.AssignGameType( hobject bots, eGameType game_type );

// EOF /////////////////////////////////////////////////////////////////////////


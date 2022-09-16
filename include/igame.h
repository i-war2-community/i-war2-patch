//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iGame.h
//
// API for the package iGame which collects various game functions.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iGame);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "igame" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else


// Describes the type of game being played
enum eIGameType
{
	// Standard game type
	IGT_SinglePlayer,

	// Demo single player game
	IGT_DemoSinglePlayer,

	// Mod game
	IGT_Mod,

	// Multiplayer game
	IGT_MultiPlayer
};

// Movies you've earned - maintain in parallel with the icGame class
enum eEarnableMovie
{
	EM_ComsecDiscovery,
	EM_BaseDiscovery,
	EM_BaseEntry,
	EM_JailBreak,
	EM_Outro
};

//
// iGame.StartNewGame
//
// Push on the single player master screen and set it to start a new game.
//
// Parameters:
//
// system_url - URL for the start system to use. 
// act - The act function to use.
//
prototype iGame.StartNewGame( string system_url, string act );

//
// iGame.NextAct
//
// Move to the next act. 
//
// Parameters:
// 
// act - The act function to use.
//
prototype iGame.NextAct( string act );

//
// iGame.MovePlayerBase( string system_name )
// 
// Move the player base. It will be attached to the first waypoint called
// "player_base_location" in the target system.
//
prototype iGame.MovePlayerBase( string system_url );

//
// iGame.SetStartSystem
// 
// Change the starting system for the game. The player base will move to the
// new system and be attached to the first waypoint called "player_base"
//
prototype iGame.SetStartSystem( string system_url );

//
// int iGame.NumberOfSavedGameSlots
//
// Get the number of saved game slots
//
prototype int iGame.NumberOfSavedGameSlots();

//
// string iGame.NameOfSaveInSlot( int slot )
//
// Get the name of the saved game in the given slot number. Returns an 
// empty string is that slot is not used.
//
prototype string iGame.NameOfSaveInSlot( int slot );

//
// bool iGame.LoadGame( string name )
//
// Load the save game with the given name.
//
prototype bool iGame.LoadGame( string save_name );

//
// iGame.SaveGame( int slot, string name )
//
// Save the current game in the given slot as the given name. 
//
prototype iGame.SaveGame( int slot, string name );

//
// iGame.SaveAutosave()
//
// Save the current game in the autosave slot
//
prototype iGame.SaveAutosave();

//
// bool iGame.AutosaveSaved()
//
// Has an autosave been performed?
//
prototype bool iGame.AutosaveSaved();


//
// iGame.JoinNetworkGame
//
// Set the icSpaceFlightScreenOverlay session
//
prototype iGame.JoinNetworkGame( int session );

//
// iGame.JoinNetworkGameFromLobby
//
// Set the icSpaceFlightScreenOverlay session
//
prototype iGame.JoinNetworkGameFromLobby();


//
// iGame.CreateFog
//
// Create fog which will fade in over time
//
prototype iGame.CreateFog( float fade_in_time );

//
// iGame.DestroyFog
//
// Create fog which will fade in over time
//
prototype iGame.DestroyFog( float fade_out_time );

//
// iGame.PlayMovie
//
// Play a movie. This will pause the game whilst playing
//
prototype iGame.PlayMovie( string url );

//
// iGame.PlayMovieLooped
//
// Play a movie. This will pause the game whilst playing
//
prototype iGame.PlayMovieLooped( string url );

//
// iGame.GameTime
//
// Returns the game time in seconds
//
prototype float iGame.GameTime();

//
// iGame.SystemTime
//
// Returns the system time in elapsed milliseconds.
//
prototype int   iGame.SystemTime();


//
// iGame.SessionName
//
// Returns the Session Name that the game wishes to connect to.
//
prototype string iGame.SessionName();

//
// iGame.ServerAddress
//
// Returns the IP address of the server that the game wishes to connect to.
//
prototype string iGame.ServerAddress();

//
// iGame.SetSessionName( string session_name );
//
// Set the session name
//
prototype iGame.SetSessionName( string session_name );


//
// iGame.IsMultiplayerOnly
//
// true if the game is enabled for multiplayer testing only
//
prototype bool iGame.IsMultiplayerOnly();

//
// string iGame.RealTime
//
// Probably shouldn't live here, but here's a string showing the real time.
//
prototype string iGame.RealTime();

//
// eGameType iGame.GameType
//
// Returns the current game type.
//
prototype int iGame.GameType();

//
// iGame.SetGameType
//
// Sets the current game type.
//
prototype iGame.SetGameType( int game_type );


//
// string iGame.CDKey();
//
// Returns the CD Key for validating multiplayer games
//
prototype string iGame.CDKey();

//
// iGame.SetCDKey( string key );
//
// Sets the CD Key for validating multiplayer games
//
prototype iGame.SetCDKey( string key );

//
// iGame.EnableBlackout
//
// Pass TRUE to hide the world and headup, FALSE to reveal them.
//
prototype iGame.EnableBlackout( bool enable );

//
// bool iGame.GotPlayDisk(string file_on_play_disk)
//
// Look for a file on the CD drive
//
prototype bool iGame.GotPlayDisk( string file_on_play_disk );

//
// bool iGame.GotEarnedMovie( eEarnableMovie movie )
//
// Has the player earned the given movie?
//
prototype bool iGame.GotEarnedMovie( eEarnableMovie movie );

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

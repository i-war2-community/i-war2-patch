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

FLUX_DECLARE_EXTENSION(iMultiplay);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "imultiplay" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else


// Dependencies
uses iSim, iShip, iHabitat;


enum eBcastMessageType
{
	BMT_None,
	BMT_Conversation,
	BMT_Info,
	BMT_Event,
	BMT_Audio
};


enum eScoreSortMode
{
	SSM_Frags,
	SSM_Flags
};



//
//
// Multiplay Server routines
//
//




//
// Add a sim that is propogated from server to client,
// but doesn't send periodic update info.
// Useful for adding static sims like asteriods and other space furniture.
//
prototype iMultiplay.SetTransmitFlag( hsim sim, bool set_it );

//
// Simialar to above, but allow server to send updates.
//
prototype iMultiplay.SetUpdateFlag( hsim sim, bool set_it);

//
// bool iMultiplay.AddAIShip ( hship ship , hsim marker)
//
// Creates a new sim on the server which is propogated to the clients
// The sim is placed next to the marker sim offset by x, y, z.
//
prototype bool iMultiplay.AddAIShip ( hship ship , hsim marker, float x, float y, float z);


//
// Installs a default AI pilot onto a ship
//
prototype iMultiplay.InstallAIPilot( hship ship );


//
// iMultiplay.InstallAIPilot( hship ship )
//
// Similar behaviour to iShip.InstallAIPilot
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
prototype iMultiplay.InstallAIPilotX( hship ship , float ignore_fight, float fight_flee,
							          float self_preserve, string fight_func,
								      string flee_func, string ignore_func, 
								      string self_preserve_func );



//
// Sets the default speed & acceleration limits
//
prototype iMultiplay.SetShipLimits( hship ship );

//
// Link all available weapons
//
prototype iMultiplay.LinkShipWeapons( hship ship );

// 
// Unlink linked weapons
//
prototype iMultiplay.UnlinkShipWeapons( hship ship );

//
// Add a weapon to the ship's loadout
//
// Add the weapon specified by the weapon_resource to ship,
// giving the powerup that triggered the event.
//
prototype iMultiplay.AddPowerupWeapon( hship ship, 
									   hisim powerup);




//
// Add a weapon to the ship's loadout
//
// Add the weapon specified by the weapon_resource to ship,
// giving a resource for the weapon directly
//
prototype iMultiplay.AddPowerupWeaponDirect( hship ship, 
									         string resource_ini );

//
// Remove weapons and optionally generate a list of powerups 
// 
//
prototype list iMultiplay.RemovePowerupWeapons( hship ship, bool power_ups );


//
// Remove an individual powerup from a ship directly.
//
prototype iMultiplay.RemovePowerupWeaponDirect( hship ship, string resource_ini );

//
// bool iMultiplay.EndGame()
//
// Inform the server to end the current game session and 
// let players know their scores etc.
//
prototype bool iMultiplay.EndGame ();


//
// iMultiplay.SendScores()
//
// Called on the server to send a score update
// to client with index i.
//
prototype iMultiplay.SendScores( hsim player );


//
// Augment score table with AI Bot info
//
prototype iMultiplay.AddBotEndGameInfo( string name,
									    string team,
										int    frags,
										int    flags,
										int    died );


//
// Set/Get the game's current limits.
// Used by the server script to decide when the game ends.
//
prototype		iMultiplay.SetFragLimit( int frags );
prototype int	iMultiplay.FragLimit();

prototype       iMultiplay.SetTimeLimit( int seconds );
prototype int   iMultiplay.TimeLimit();

prototype float iMultiplay.AIBotsSkillLevel();
prototype int   iMultiplay.AIBotsCount();
prototype bool  iMultiplay.UseAIBots();


//
// Sets the game type
// This string is queried by the server browser and
// is used as a key to localise the text.
// Standard is to use "DM"  for Death Match
//                and "CTF" for Capture the Flag
//
prototype       iMultiplay.SetGameType( string game_type );


//
// Tells server to send a respawn event to the client
// who owns this sim.
//
prototype bool iMultiplay.SetForRespawn ( hsim sim );

//
// Return the list of player ships
//
prototype list iMultiplay.ServerPlayerList();

//
// Return a random sim from the current list of players
//
prototype hsim iMultiplay.ServerRandomPlayer();



//
// Return the Killed count for player i.
//
prototype int iMultiplay.ServerPlayerDiedCount(  hsim sim_id  );

//
// Return the number of frags that player i has scored
//
prototype int iMultiplay.ServerPlayerFragCount( hsim sim_id  );

//
// Return the number of flags that player i has captured
//
prototype int iMultiplay.ServerPlayerFlagsCount( hsim sim_id );



//
// Set the number of flags captured by player i.
//
prototype iMultiplay.ServerSetPlayerFlagsCount( hsim sim_id, int count );

//
// Set the number of frags for player i.
//
prototype iMultiplay.ServerSetPlayerFragsCount( hsim sim_id, int count );


//
// Set the died count for player i.
//
prototype iMultiplay.ServerSetPlayerDiedCount( hsim sim_id, int count );


//
// Return the team associated with player i.
//
prototype string iMultiplay.ServerPlayerTeam( hsim sim_id );


//
// Set the winning team name, which is then sent to all clients
// in the eng game info message.
//
prototype iMultiplay.ServerSetWinningTeam( string team_name );


//
// Set the team for player i.
//
prototype iMultiplay.ServerSetPlayerTeam( hsim sim_id, string team );

//
// Reset the team list.
//
prototype iMultiplay.ServerResetTeams();


//
// Resets the frag count and killed count for all players
//
prototype bool iMultiplay.ServerResetScores();

//
// Return ping time for player sim
//
prototype int iMultiplay.ServerPlayerPing( hsim sim_id );

//
// Return IP address of player sim
//
prototype int iMultiplay.ServerPlayerIP( hsim isim_id );

//
// Return IP address of server machine
//
prototype int iMultiplay.ServerIP();

//
// Reject a client from the game
//
prototype iMultiplay.ServerRejectClient( hsim sim_id, string reason );


// 
// Send a message to all clients
//
prototype iMultiplay.ServerBroadcastMessage( hsim sender, string message, eBcastMessageType message_type );

//
// Send a message to a specific client only
//
prototype iMultiplay.ServerSendPlayerMessage( int i , string message, eBcastMessageType message_type );


//
// iMultiplay.ServerSendUserMessage( int i, hsim sim1, hsim sim2, string data );
//
// Send a user defined message to the server.
// i is a tag which distinguishes the type of message,
// hsim1 is the handle of the sim associated with the message event,
// (or none if it's not a sim specific message).
// hsim2 is the handle of an additional sim (or none if not needed)
// data is any additional data sent in string format.
//
// The message is sent to all clients that have a local copy of sim1.
//
prototype iMultiplay.ServerSendUserMessage( int i, hsim sim1, hsim sim2, string data );


//
// iMultiplay.ServerSetSortMode( eScoreSortMode mode );
//
// Determines wow the player scores get sorted
//
prototype iMultiplay.ServerSetSortMode( eScoreSortMode mode );


//
// For testing
//

prototype iMultiplay.DebugMessage( string message );
prototype iMultiplay.ServerSetDebugMode( int dm );

prototype int iMultiplay.ServerDebugMode();

prototype float iMultiplay.DebugSimPositionX( hsim sim );
prototype float iMultiplay.DebugSimPositionY( hsim sim );
prototype float iMultiplay.DebugSimPositionZ( hsim sim );


//
// Used by both client & server to modify ship properties
//

// Add an amount to all ammo-type weapons on a ship
// i.e. missiles.
prototype iMultiplay.AddAmmo( hship ship, int amount );

// multiply weapons firing rate by  percent_change.
prototype iMultiplay.ChangeWeaponFireRate( hship ship, float percent_change );


//
// Apply -ve weapon damage.
//
prototype iMultiplay.AddHealth( hship ship, float percent_increase );


//
// increase/decrease maximum speed limit
//
prototype iMultiplay.ChangeMaxSpeed( hship ship, float percent_change );



//
// Connect/Disconnect autorepair systems.
//
prototype iMultiplay.AutoRepair( hship ship, bool repair );


// bool iMultiplay.IsClient()
//
// returns true if we are running as a client
// false if we're the server
//
prototype bool iMultiplay.IsClient();


// bool iMultiplay.IsGameEnded()
//
// Called by the client to see if the game has ended
//
prototype bool iMultiplay.IsGameEnded();


//
//
// Multiplay Client routines
//
// Theses routines only make sense when called by the client.
//
//



//
// returns the list of player ids
prototype list iMultiplay.ClientPlayerList();


//
// bool iMultiplay.SetPlayerShip( hship ship, string playername, hship old_ship )
//
// Sets the ship's NetRole to NR_ClientSim and changes its name.
// This will cause the sim to be propogated first to the server and
// then from the server to any other clients on the network as and
// when they join the game.
//
// The list of players is also updated to include the new local player
// and remove any old instance of the player ship
//
prototype bool iMultiplay.SetPlayerShip( hship ship, string playername, hship old_ship );




//
// FtNat iMultiplay.ClientFragCount()
//
// Returns this client's player score
//
prototype int iMultiplay.ClientFragCount();


//
// FtNat iMultiplay.ClientFragCount()
//
// Returns this client's killed score
//
prototype int iMultiplay.ClientKilledCount();


//
// Returns frag/killed info for all players in last session
//
prototype string iMultiplay.ClientPlayerStats();


//
// Interface to the ClientEndGameInfo list
//
prototype int    iMultiplay.ClientEndGameInfoCount();

prototype string iMultiplay.ClientEndGameInfoName( int i );

prototype string iMultiplay.ClientEndGameInfoTeam( int i );

prototype int    iMultiplay.ClientEndGameInfoFrags( int i );

prototype int    iMultiplay.ClientEndGameInfoFlags( int i );

prototype int    iMultiplay.ClientEndGameInfoDied( int i );


//
// Resets the frag & killed count for our own player
//
prototype bool iMultiplay.ClientResetScores();


//
// bool iMultiplay.ClientBroadcast( string message )
//
// Sends a message to all other players on the network
//
prototype iMultiplay.ClientBroadcastMessage( hsim sim, string message, eBcastMessageType message_type );

//
// Send a message to all other team members on the network
//
prototype iMultiplay.ClientBroadcastTeamMessage( hsim sim, string message, eBcastMessageType message_type );


//
// Uses icComms to send a message locally to the hud.
//
prototype iMultiplay.ClientSay( hsim sim, string message );


//
// Returns the client's user id (2 .. n )
//
prototype int iMultiplay.ClientUID();


//
// Find out if we are a team game
//
prototype bool iMultiplay.ClientIsTeamGame();

//
// Set Team Game status
//
prototype iMultiplay.ClientSetTeamGame( bool team_game );





//
// iMultiplay.ClientSendUserMessage( int i, hsim sim1, hsim sim2, string data );
//
// Send a user defined message to the server.
// i is a tag which distinguishes the type of message,
// hsim1 is the handle of the sim associated with the message event,
// (or none if it's not a sim specific message).
// hsim2 is an additional sim handle.
// data is the actual data sent in string format.
//
prototype iMultiplay.ClientSendUserMessage( int i, hsim sim1, hsim sim2, string data );


//
// Stuff for storing a player's options
//
prototype			iMultiplay.ClientOptionsLoad();
prototype			iMultiplay.ClientOptionsSave();
prototype string	iMultiplay.ClientOptionsName();
prototype string	iMultiplay.ClientOptionsDefaultTaunt( int i );
prototype			iMultiplay.ClientOptionsSetName( string name);
prototype string	iMultiplay.ClientOptionsShip();
prototype			iMultiplay.ClientOptionsSetShip( string ship_resource );
prototype bool		iMultiplay.ClientOptionsHostSession();
prototype bool      iMultiplay.ClientOptionsSetHostSession( bool host_it );
prototype string    iMultiplay.ClientOptionsServerAddress();
prototype           iMultiplay.ClientOptionsSetServerAddress( string address );
prototype bool      iMultiplay.ClientOptionsServerAIBots();
prototype           iMultiplay.ClientOptionsSetServerAIBots( bool have_bots );
prototype float     iMultiplay.ClientOptionsServerAIBotsSkill();
prototype           iMultiplay.ClientOptionsSetServerAIBotsSkill( float skill_level );
prototype int       iMultiplay.ClientOptionsServerAIBotsCount();
prototype           iMultiplay.ClientOptionsSetServerAIBotsCount( int count );
prototype bool      iMultiplay.ClientOptionsServerArcadeMode();
prototype           iMultiplay.ClientOptionsSetServerArcadeMode( bool arcade_mode );

prototype string    iMultiplay.ClientOptionsServerName();
prototype string    iMultiplay.ClientOptionsServerPackage();
prototype string    iMultiplay.ClientOptionsServerMap();
prototype int       iMultiplay.ClientOptionsServerFragLimit();
prototype int       iMultiplay.ClientOptionsServerTimeLimit();
prototype           iMultiplay.ClientOptionsSetServerName( string name );
prototype           iMultiplay.ClientOptionsSetServerPackage( string package_name );
prototype           iMultiplay.ClientOptionsSetServerMap( string map );
prototype           iMultiplay.ClientOptionsSetServerFragLimit( int limit );
prototype           iMultiplay.ClientOptionsSetServerTimeLimit( int limit );

//
// Client SFX routines
//

// Creates the default respawn visual effect.
prototype iMultiplay.ClientAddRespawnEffect( hship ship );

// Add the 'taunt' edit box to the HUD.
// HUD edit box is initialised with the default_text string.
// <package>.ClientTauntReturn() isthe pog function that gets called with
// a copy of the edit box contents afterwards.
prototype iMultiplay.ClientOpenHUDTauntBox( string default_text );


//
//
// Networking stuff
//
//

//
// Return the number of server sessions active for the
// selected protcol.
//
prototype int    iMultiplay.NetworkSessionCount();

//
// Returnt the string name of session i.
//
prototype string iMultiplay.NetworkSessionItem( int i );

//
// Return current number of players for session i.
//
prototype int    iMultiplay.NetworkSessionPlayers( int i );

//
// Return maximum number of players for session i.
//
prototype int    iMultiplay.NetworkSessionMaxPlayers( int i );

//
// Return the number of supported protocols
// 
prototype int    iMultiplay.NetworkProtocolCount();

//
// Return the string name of protocol i.
// i.e. "DirectPlay TCP/IP Protocol" etc.
//
prototype string iMultiplay.NetworkProtocolItem( int i );

//
// Select the ith protocol.
//
prototype bool   iMultiplay.NetworkSetProtocol( int i );

//
// Connect a client to a host using network address host.
//
prototype bool   iMultiplay.NetworkConnectHost( string host );

//
// Connect a client using current protocol info only.
//
prototype bool   iMultiplay.NetworkConnect();

//
// Returns true if the client was started from a lobby session.
//
prototype bool iMultiplay.NetworkIsLobbySession();

//
//
//
prototype bool iMultiplay.NetworkBeginSessionFromLobby( hobject id);

//
// Start enumeration of active sessions for the currently
// selected protocol.
//
prototype bool iMultiplay.NetworkBeginSessionSearch();

//
// Stop enumeration of active sessions for the currently
// selected protocol.
//
prototype bool iMultiplay.NetworkEndSessionSearch();

//
// Reset the network device.
//
prototype bool iMultiplay.NetworkReset();

//
// Used by the client to spawn a copy of the server app.
// Command line specifies extra parameters other than
// the the executable and class name for the flux loader.
//
prototype iMultiplay.ServerAppSpawn( string command_line );

// 
// We only keep a handle to one spawned copy per client
// So this tells us if we can spawn another.
//
prototype bool iMultiplay.IsServerAppSpawned();

//
// Used to kill off the application
//
prototype iMultiplay.ServerAppTerminate();


//
//
// Interface to the new ServerBrowser class
//
//

prototype        iMultiplay.ServerBrowserCreate();
prototype        iMultiplay.ServerBrowserDestroy();
prototype        iMultiplay.ServerBrowserSetPogFunctions( string update_func, string complete_func );
prototype bool   iMultiplay.ServerBrowserUpdateComplete();
prototype        iMultiplay.ServerBrowserBeginLAN();
prototype        iMultiplay.ServerBrowserBeginInternet();
prototype int    iMultiplay.ServerBrowserCount();
prototype string iMultiplay.ServerBrowserDisplayItem( int i );
prototype string iMultiplay.ServerBrowserAddress( int i );
prototype int    iMultiplay.ServerBrowserPort( int i );
prototype int    iMultiplay.ServerBrowserPing( int i );
prototype int    iMultiplay.ServerBrowserPlayers( int i );
prototype int    iMultiplay.ServerBrowserMaxPlayers( int i );
prototype string iMultiplay.ServerBrowserGameType( int i );
prototype string iMultiplay.ServerBrowserMapName( int i );
prototype string iMultiplay.ServerBrowserSessionName( int i );
prototype string iMultiplay.ServerBrowserVersion( int i );
prototype int    iMultiplay.ServerBrowserSessionIndex( int i );
prototype bool   iMultiplay.ServerBrowserValidateKey( string key );

prototype int    iMultiplay.ServerSessionIndexFromName( string ip_address, string session_name );

//
// Find out our protocol version number.
//
prototype int iMultiplay.ProtocolVersion();


//
// The following routines get the list of server package ini files 
// contained in the resource/multiplayer/packages directory.
//

// Constructs the list of multiplayer package ini filenames,
// returning the current count.
prototype int    iMultiplay.GetServerPackageList();

// Constructs the list of maps available for the given package,
// returning the current count.
prototype int    iMultiplay.GetServerMapList( string package_name );

// Return ini file name for item i.
prototype string iMultiplay.ServerPackageListItem( int i );
prototype string iMultiplay.ServerMapListItem( int i );
// short version, just "tdm" or whatever
prototype string iMultiplay.ServerPackageListItemShort( int i);
prototype string iMultiplay.ServerMapListItemShort( int i );


// Constructs the list of multiplayer ship ini filenames,
// returning the current count.
prototype int    iMultiplay.GetServerShipList();

// Return ini file name for item i.
prototype string iMultiplay.ServerShipListItem( int i );



//
// Used by the client for map/package cycling
prototype bool     iMultiplay.ClientRequestedToCycle();
prototype          iMultiplay.ClientSetRequestedToCycle( bool cycling );
prototype string   iMultiplay.ClientLastAddress();
prototype string   iMultiplay.ClientLastSession();
prototype          iMultiplay.ClientSetLastAddress( string address );
prototype          iMultiplay.ClientSetLastSession( string session );
prototype int      iMultiplay.ClientRejectedCount();


//
// Used by client and server
//

//
// Returns the package ini file, i.e. "ini:\multiplay\packages\tdm" etc.
//
prototype string   iMultiplay.PackageINI();
prototype string   iMultiplay.MapINI();



// Remote link player pilot to the given ship
prototype iMultiplay.RemoteLinkTo( hship ship );
prototype iMultiplay.SeverRemoteLinkTo( hship ship );


#endif // FLUX_DLL

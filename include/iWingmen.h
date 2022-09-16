//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iWingmen.h
//
// Compiler-generated export header for package "iWingmen"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iWingmen.h 11    17/05/01 11:47 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses iShip; 

// Enumerated types ////////////////////////////////////////////////////////////

prototype iWingmen.Initialise();												// NO LONGER USED. INCLUDED FOR COMPATIBILITY.

prototype iWingmen.Terminate( bool destroy_sims );								// NO LONGER USED. INCLUDED FOR COMPATIBILITY.

prototype iWingmen.SetupKeys();													// NO LONGER USED. INCLUDED FOR COMPATIBILITY.

prototype hgroup iWingmen.Group();												// Returns the group of wingmen, with the player ship as leader.

prototype int iWingmen.Count();													// Returns the number of wingmen available.

prototype iWingmen.AddWingman( hship wingman );									// Adds a ship to the player's wingman group.

prototype iWingmen.RemoveWingman( hship wingman );								// Removes a wingman from the player's wingman group.

prototype iWingmen.FromGroup( hgroup new_wingman_group, bool destroy_group );	// Gets all the sims from a group and adds them as wingmen.

prototype iWingmen.Purge();														// Removes all wingmen from the wingman group.

prototype hgroup iWingmen.PurgeToGroup();										// Removes all wingmen and puts them into a group

prototype iWingmen.UpdateLeader( hgroup wingman_group, hship player_ship );				// Updates the leader of the wingmen group to the current player vessel.

prototype iWingmen.ReportStatus();												// Orders the wingmen to report status.

prototype iWingmen.DefendPlayer();												// Orders the wingmen to defend the player.

prototype iWingmen.AttackTarget();												// Orders the wingmen to attack the player's target.

prototype iWingmen.DefendTarget();												// Orders wingmen to formate with and defend the player's target	

prototype iWingmen.DockToTarget();												// Orders wingmen to dock with the player's target.

prototype iWingmen.Halt();														// Orders wingmen to halt.

prototype iWingmen.EscortShip( hgroup wingman_group, hship escorted_ship );		// Gets the wingmen to escort a given target - used in DefendPlayer and DefendTarget.

prototype iWingmen.AddTFighters( hship player_ship, list turret_fighters );		// Adds turret fighters to the named ship.

prototype iWingmen.TFighterAttachDetach();										// Orders the tfighters to attach or detach.

prototype iWingmen.TFighterAttackTarget();										// Orders t-fighters to attack your target.

prototype iWingmen.TFighterFireAtWill();										// Order t-fighters to fire at will.

prototype iWingmen.TFighterCeaseFire();											// Orders the t-fighters to cease-fire.

prototype list iWingmen.GetAllTFighters();										// Returns a list of all tfighters, both attached and detached.

prototype list iWingmen.GetAttachedTFighters();									// Returns a list of attached tfighters.

prototype list iWingmen.GetDetachedTFighters();									// Returns a list of detached tfighters.

prototype hship iWingmen.GetLiveTFighter();										// Finds a live tfighter.

prototype int iWingmen.TFighterCount();											// Returns a count of tfighters.

prototype list iWingmen.CreateTestTFighters( int number );						// Creates test tfighters.

prototype iWingmen.TFightersAttach();											// Gets tfighters to attach

prototype iWingmen.TFightersDetach();											// Gets tfighters to detach.

prototype hship iWingmen.GetAz();												// Get Az's handle

prototype hship iWingmen.GetLori();												// Get Lori's handle

prototype task iWingmen.WingmanDeathScript( hship wingman );					// Deathscript for wingman.

prototype task iWingmen.TFighterDeathScript( hship tfighter );					// Deathscript for turret fighter.

prototype list iWingmen.TrueWingmanList();										// Returns a list of true wingmen

// EOF

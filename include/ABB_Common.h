//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// ABB_Common.h
//
// Compiler-generated export header for package "ABB_Common"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/ABB_Common.h 2     7/08/00 9:28 Alex $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses iSim, Group, iShip;

// Enumerated types ////////////////////////////////////////////////////////////

enum eWatchSims // return values / select values for the watch_sims function
{								// as part of select value		as return value
	WS_Destroyed = 0,			// always on!											either sim is destroyed (or null for other reason)
	// bits 0-1 are used to indicate which subgroup or sim is affected, from 0 to 3.  groups larger than this number are not monitored!
	// mask output with WS_Enum_Mask to get clean enum
	// mask output with WS_Int_Mask to get clean int
	// bits 2-3 are currently reserved for future use
	WS_Enter_Close_Range = 16,   // exit if sims closer than close_range_radius			sims closer than close_range_radius
	WS_Leave_Close_Range = 32,   // exit if sims further than close_range_radius			sims further than close_range_radius
	WS_Enter_Long_Range = 64,
	WS_Leave_Long_Range = 128,	// exit if sims further than long_range_radius			sims further than long_range_radius
	WS_Leave_Same_System = 256,   // exit if sims no longer in same system				sims not in same system
	WS_Enter_Same_System = 512,  // exit if sims now in same system						sims in same system
	WS_Nothing = 1024,				// only test the above once	(don't wait)				none of the tested states occurred

	// ints are currently not returned for the non group version
	WS_Return_Which = 2048, // flag to enable using bits 0-3 to indicate which subgroup / sim is affected

	// special states for WatchGroupCombatTask

	WS_Task_Halted = 65536,				// exit when the task halts					when the task is halted

	// special states for watch...with_group
	//WS_Destroyed -			// always on!											either sim or a group member
	WS_SubGroup_Destroyed = 4096,  // exit if a subgroup of the additional group is destroyed
	WS_SubGroup_Sim_Destroyed = 8192, // exit if a sim of the additional group is destroyed

	WS_SubGroup_All_Leave_Close_Range = 16384, // exit if whole of subgroup further than close_range_radius
	WS_SubGroup_All_Enter_Close_Range = 32768, // exit if whole of subgroup nearer than close_range_radius

	// masks
	WS_Enum_Mask = 4294967280, // used to mask away subgroup / sim number to get pure enum
	WS_Int_Mask = 3 // used to mask away enum to get pure 2 bit int

};

// Functions ///////////////////////////////////////////////////////////////////

//
// ABB_Common.SetCullableGroup(...)
//
// recursively sets the cullable state of a compound group
//
prototype ABB_Common.SetCullableGroup(hgroup group, bool status);

//
// ABB_Common.SetGroupFaction(...)
//
// recursively sets the faction of a compound group
//
prototype ABB_Common.SetFactionGroup(hgroup group, hfaction faction);

//
// ABB_Common.SetPilotNoScriptsGroup(...)
//
// recursively sets the pilot of a compound group, without script options
//
prototype ABB_Common.SetPilotNoScriptsGroup(hgroup group, float ignore_fight, float fight_flee, float self_preserve);

//
// ABB_Common.RemovePilotGroup(...)
//
// recursively removes pilots from a group
//
prototype ABB_Common.RemovePilotGroup(hgroup group);

// 
// ABB_Common.EmptyGroup(...)
//
// non destructively and non recursively removes subgroups and sims from a group
// 
// input: group_to_empty: hgroup the group to remove the sims and subgroups from
//
prototype ABB_Common.EmptyGroup(hgroup group_to_empty);

// ABB_Common.int RecursiveSimCount(hgroup group);
//
// counts the number of sims in a compound group
// NOTE: the player is not counted.
//
prototype int ABB_Common.RecursiveSimCount(hgroup group);

//
// ABB_Common.MaterialiseGroupNear(...)
//
// routine to materialise a compound group near another sim
// recursive
// probably places ships randomly
//
prototype ABB_Common.MaterialiseGroupNear(hgroup group, // the group to materialise
				 						  hisim nearThis, // the loacation to materialise near
										  float distance); // the distance from the location to appear at

//
// ABB_Common.DisruptLDSGroup(...)
//
// recursively lds disrupts a compound group
//
prototype ABB_Common.DisruptLDSGroup( hgroup group_to_disrupt, float time_in_seconds );

//
// ABB_Common.AttachWayPointToGroupLeader(...)
//
// ensures that a sim (normally a waypoint) is continually bound as a child to a group leader
// if leader is destroyed, the child is reattached to the new leader
// if there is no leader, the task waits until a new leader appears
// input: group : hgroup - the group containing the leader
//
prototype task ABB_Common.AttachWayPointToGroupLeader(hgroup group, hisim waypoint);

//
// ABB_Common.WatchSimsMovement(...)
//
// watches / waits for cetain events to happen to two sims (mostly movement events)
// and indicates which one happened.
// programmer should use return value in a switch statement, or throw it away if simply waiting for an event
//
// see eWatchSims enum from more details
//
prototype int 
ABB_Common.WatchSimsMovement(	hisim sim_to_watch, hisim sim_relative_to,			// sims to monitor
								float close_range_radius, float long_range_radius, // check for entry / exits from these ranges
								int watch,											// what to check on : eWatchSims values ORed together
								float each_n_seconds);								// and how often to check (can be made to check only once)


//
// ABB_Common.WatchSimsAndGroupCombat(...)
//
// watches / waits for certains events to happen to two sims
// or events to happen to subgroups of a compound group (eg single sim dead, whole subgroup dead)
// used for quick construction of combat rules and dialogue
//
// return value is combination of eWatchSims indicating what happened, and 2 bit integer (LSB 0, 1) 
// indicating which subgroup (if any) it happened to
//
// see eWatchSims enum from more details
//
prototype int 
ABB_Common.WatchSimsAndGroupCombat(hisim sim_to_watch, hisim sim_relative_to, // sims to monitor
									 hgroup compound_combat_group,					// compound group (containing up to 4 subgroups selected from all sides)
								     float close_range_radius, float long_range_radius, // check for entry / exits from these ranges
									 int watch,									// what to check on : eWatchSims values ORed together
									float each_n_seconds);						// and how often to check (can be made to check only once)

//
// ABB_Common.WatchGroupCombatTask(...)
//
// watches / waits for certains events to happen to two sims
// or events to happen to subgroups of a compound group (eg single sim dead, whole subgroup dead)
// or a passed task to halt
// used for quick construction of combat rules and dialogue
//
// return value is combination of eWatchSims indicating what happened, and 2 bit integer (LSB 0, 1) 
// indicating which subgroup (if any) it happened to
//
// see eWatchSims enum from more details
prototype int 
ABB_Common.WatchGroupCombatTask(hisim sim_to_watch, 					
									hisim sim_relative_to,	// sims to monitor - normally the player
									hgroup compound_combat_group,					// compound group (containing up to 4 subgroups selected from all sides)
									float close_range_radius, float long_range_radius, // check for entry / exits from these ranges
									htask a_task,						// task, such as a timer, to watch
									int watch,						// what to check on : eWatchSims values ORed together
									float each_n_seconds);			// and how often to check (can be made to check only once by using a flag)

// EOF /////////////////////////////////////////////////////////////////////////


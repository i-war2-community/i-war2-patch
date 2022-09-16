//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iCutsceneUtilities.h
//
// Compiler-generated export header for package "iCutsceneUtilities"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iCutsceneUtilities.h 10    3/09/00 14:58 Alex $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses iShip, iSim, Group, Set, Task;

// Enumerated types ////////////////////////////////////////////////////////////

enum eAxis {
	AXIS_x,
	AXIS_y,
	AXIS_z
};

enum eStationModuleFind {
	SMF_Comms,
	SMF_Engineering,
	SMF_Docking_Arm,
	SMF_Pod_Spewer,
	SMF_Habitat,
	SMF_Hotel,
	SMF_Processing_Plant
};

// Functions ///////////////////////////////////////////////////////////////////

// Essential Functions
// -------------------

//
// HandleAbort( htask cutscene_task )
//
// usage: HandleAbort( start my_cut_scene_task() );
//
// cleans up after your cutscene, and allows player to use SPACE key to abort your cutscene
//
prototype bool iCutsceneUtilities.HandleAbort( htask cutscene_task ); // manages user abort, as well as cleanup

//
// EnablePlayerAutoPilot()
// DisablePlayerAutoPilot()
//
// allows you to manipulate the player ship as an AI ship
// safe to call more than once, if you are not sure
// DisablePlayerAutopilot is called automatically when your cutscene ends (if it was wrapped by HandleAbort)
// 
prototype hship iCutsceneUtilities.EnablePlayerAutopilot(); // allows you to manipulate the player ship as an AI ship
prototype iCutsceneUtilities.DisablePlayerAutopilot(); // used to deactivate the previous.

//
// GetKillGroup();
//
// returns a special group to which you should add sims and groups which should exist only for the duration of the cutscene.
// this group is cleaned up automatically when the cutscene ends (if it was wrapped by HandleAbort)
//
// Note: you should add the highest level group to the killgroup, otherwise when you add stuff to other groups, 
// they will be removed from the kill group, and vice versa
//
prototype hgroup iCutsceneUtilities.GetKillGroup(); // returns the cutscene kill group - to which you should add temporary sims

// Simple Utilities to save you time
// ---------------------------------

//
// hship CreateGhostShip() 
//
// creates and returns a special indestructible and invisible ghost ship
// for use as a piloted dolly, and by EnablePlayerAutopilot to put the player in
// includes free pilot - just plug it in and go...
//
prototype hship iCutsceneUtilities.CreateGhostShip(); 

//
// Watch(hsim from, hsim to);
//
// just setup the direction to look from (the position of) one sim to another
// use with CreateGhostShip to create a simple moving viewpoint
//
prototype iCutsceneUtilities.Watch(hsim from, hsim to);

//
// BuzzCamera(...)
//
// sets the focus to a position relative to the current position of another sim
// uses dolly camera, which it returns
// assumes ships will continue to fly in the direction they were going in
// this can be achieved by setting PointAt, GiveApproachOrder for the same sim
// the camera is aplced distanceahead of the current direction of the flyer
//
prototype hsim iCutsceneUtilities.BuzzCamera(hsim flying, float xoffset, float yoffset, float zdistanceahead );

// Complex Path Utilities
// ----------------------
prototype task iCutsceneUtilities.FollowRouteTask( hsim follower, hgroup route, float completion_ratio, float time_step, int loop_count, int index /* start index */);
prototype iCutsceneUtilities.FollowRoute( hsim follower, hgroup route, float completion_ratio, float time_step, int loop_count, int index /* start index */);
prototype hgroup iCutsceneUtilities.BuildCircularPath(hsim center, eAxis axis, float radius, float start_angle, float end_angle, int count);

// Predefined Path Utilities
// -------------------------

// have a look at the source to these if you want to find out how to build your own

prototype iCutsceneUtilities.OrbitSim(hsim look_from, hsim look_at, hsim moves, hsim move_around, string caption, eAxis axis, float radius, float start_angle, float end_angle);

// Death Script Functions
// ----------------------

//
// SetupDirectedDeath(hobject directed_death_object, hsim speaker, string speaker_name, string obituary_or_last_words, string epitaph, bool end_game) 
//
// Setup a directed death for a sim
// normally used for (and instead of other functions providing) a 'mission critical' sim - set end_game to true if this is the case
//
// <end_game>: if applied to a group, will be called if any ONE member of the group dies (contrast SetupDirectedGroupDeath)
// do not use in combination with SetupDirectedGroupDeath on same sims
//
// <speaker> and <speaker_name> : are used to say an <obituary_or_last_words>, 
//		either by the dying sim (set speaker = none and speaker_name = "") , 
//		or some other, eg Clay (in which case, use like iConverstaion.Oneliner)
// 
// epitaph : the caption for the directed movie
prototype iCutsceneUtilities.SetupDirectedDeath(hobject directed_death_object, hsim speaker, string speaker_name, string obituary_or_last_words, string epitaph, bool end_game);

//
// SetupDirectedGroupDeath(hobject directed_death_object, hsim speaker, string speaker_name, string obituary_or_last_words, string epitaph, bool end_game)
//
// Setup a directed death for a group
// normally used for a group of sims where death of the complete group (not just one or two) will fail the mission
//
// <end_game>: end the game forcibly after the direction
// do not use in combination with SetupDirectedDeath on same sims
//
// <speaker> and <speaker_name> : are used to say an <obituary_or_last_words>, 
//		either by the dying sim - the last member of the group (set speaker = none and speaker_name = "") , 
//		or some other, eg Clay (in which case, use like iConverstaion.Oneliner)
// 
// epitaph : the caption for the directed movie
//
// only works properly for flat groups!
// this function will accept sims, but this is for recursion only, and should not be used by the level scripter
prototype iCutsceneUtilities.SetupDirectedGroupDeath(hobject directed_death_object, hsim speaker, string speaker_name, string obituary_or_last_words, string epitaph, bool end_game);

// Station Utilities - will go in iUtilities soon
// -----------------

prototype set iCutsceneUtilities.GetStationModules( hsim station );
// returns a set containing all the modules of the current station

prototype set iCutsceneUtilities.GetThingsCalled( set in, string name );
// returns the first thing with the specified name in the set

prototype hisim iCutsceneUtilities.FindStationModule( hsim station, eStationModuleFind module_type );
// finds first station module of the specified type
//
// note: this function will need to be updated when station types change!
// it may also have problems after localisation! - the names may change to keys etc.

// EOF /////////////////////////////////////////////////////////////////////////

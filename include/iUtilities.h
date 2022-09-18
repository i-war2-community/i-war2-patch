//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iUtilities.h
//
// Compiler-generated export header for package "iUtilities"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iUtilities.h 45    9/03/01 10:28 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype set iUtilities.FilterOnFriendlyHabitats( set habitats, IeAllegiance faction );

prototype set iUtilities.FilterOnFriendlySims( set sims_to_filter, hsim checker );

prototype string iUtilities.FromAllegianceEnum( IeAllegiance allegiance );

prototype string iUtilities.FromLocationEnum( IeHabitatType location );

prototype string iUtilities.FromAllegianceEnumNoSpace( IeAllegiance allegiance );

prototype int iUtilities.FindNumberOfINIEntries( hinifile ini, string subsection, string entry );

prototype string iUtilities.GetCargoNameFromINI( string ini_name );

prototype string iUtilities.PickRandomLocationOfType( string location_type );

prototype float iUtilities.GetZoneOfControl( hmapentity location );

prototype float iUtilities.GetLargestShipRadius( hgroup group );

prototype bool iUtilities.PlayerInRange( hsim checker );

prototype bool iUtilities.PlayerInRangeOfGroup( hgroup group );

prototype iUtilities.KillListOfSims( list sim_stuff );

prototype task iUtilities.JettisonCargo( list cargo_list, hship requestor_ship );

prototype hsim iUtilities.CreateWaypointRelativeTo( hsim location, float x, float y, float z );

prototype hsim iUtilities.CreateWaypointBetween( hsim location1, hsim location2, float distance );

prototype hsim iUtilities.CreateWaypointRelativeToPlayer( float x, float y, float z );

prototype hsim iUtilities.CreateWaypointAt( hsim location );

prototype hsim iUtilities.CreateWaypointNear( hsim location, float radius );

prototype iUtilities.MakeWaypointVisible( hsim waypoint, bool switcher, string name );

prototype float iUtilities.ReturnHullStructure( hsim checker );

prototype bool iUtilities.RenameSim( hsim sim_to_rename, string name );

prototype set iUtilities.GetSurfaceLocationsFromOrbital( hhabitat location );

prototype set iUtilities.CleanInactiveMapEntities();

prototype iUtilities.ReleaseError( string message );

prototype iUtilities.AllowMissionSkipping();

prototype bool iUtilities.SkipMission( string mission_descriptor );

prototype bool iUtilities.SkipAct( string mission_descriptor, int act_number );

prototype iUtilities.SkipWaitForBool( string bool_text_key, string bool_name, bool value );

prototype iUtilities.SkipDialogue();

prototype iUtilities.JumpSystem();

prototype iUtilities.SimPlaceBetweenExact( hsim sim_to_place, hsim sim1, hsim sim2, float distance );

prototype task iUtilities.TaskSkipMission( string mission_descriptor, string global_to_set );

prototype bool iUtilities.WaitOnSkipMission( htask skipper, string global );

prototype iUtilities.GroupSetCullable( hgroup group_to_set, bool cullable );

prototype iUtilities.CapsuleJumpPlayer( hisim location );

prototype iUtilities.CapsuleJumpGroup( hgroup group_to_jump, hisim destination, float initial_delay );

prototype iUtilities.CapsuleJumpStaggeredWithWait( hisim sim, hisim destination );

prototype list iUtilities.ListFromCompoundGroup( hgroup the_group );

prototype hisim iUtilities.NearToGroup( hisim check_sim, hgroup check_group, float within_range, bool process_subgroups );

prototype hisim iUtilities.FarFromGroup( hisim check_sim, hgroup check_group, float outside_range, bool process_subgroups );

prototype hsim iUtilities.CreateWaypointBetweenExact( hsim location1, hsim location2, float distance );

prototype iUtilities.CreatePlayer( string template, hsim start_point );

prototype iUtilities.StartInGagarinCluster();

prototype string iUtilities.ConvertSecondsToTime( int passed_seconds );

prototype task iUtilities.Timer( string identifier, float duration );

prototype iUtilities.GroupSetFaction( hgroup group_to_set, hfaction faction );

prototype iUtilities.SuperSkip();

prototype float iUtilities.RandomCentreWeighted( float min, float max );

prototype bool iUtilities.SendStoryElement( string global_name, int act, int mission_number );

prototype task iUtilities.CriticalShipMonitor( hship ship, float shout_delay );

prototype iUtilities.RemoveMissionRestart();

prototype iUtilities.GroupSetLocalVelocity( hgroup group, float xvel, float yvel, float zvel, bool kill_angular, bool process_subgroups );

// EOF /////////////////////////////////////////////////////////////////////////


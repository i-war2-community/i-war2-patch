//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iTrafficCreation.h
//
// Compiler-generated export header for package "iTrafficCreation"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iTrafficCreation.h 16    28/06/00 14:50 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses iShipCreation;

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype bool iTrafficCreation.Start( hmapentity location );

prototype bool iTrafficCreation.Terminate( hmapentity location );

prototype task iTrafficCreation.MonitorTraffic();

prototype hgroup iTrafficCreation.CustomManeuvre( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomPoliceRaid( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomFlitter( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomSpeedTrap( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomCabbie( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomPiracy( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomOfficialVisit( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype iTrafficCreation.DisableTrafficReport();

prototype hgroup iTrafficCreation.CustomFreelanceMine( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomLocalSecurityPatrol( hsim start_loc, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

prototype hgroup iTrafficCreation.CustomGoToLagrangePoint( hsim start_loc, string lpoint, eShipType traffic_type, int number_to_create, IeAllegiance faction_for_vessels, bool act_as_group );

// EOF /////////////////////////////////////////////////////////////////////////


//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iScriptedOrders.h
//
// Compiler-generated export header for package "iScriptedOrders"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iScriptedOrders.h 21    25/07/00 10:45 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype iScriptedOrders.CreateNewOrders( hgroup ships );

prototype task iScriptedOrders.Haulage( hgroup ships, hmapentity local_station );

prototype task iScriptedOrders.Trade( hgroup ships );

prototype task iScriptedOrders.Supply( hgroup ships );

prototype task iScriptedOrders.Tanker( hgroup ships );

prototype task iScriptedOrders.LocalPatrol( hgroup ships );

prototype task iScriptedOrders.SystemPatrol( hgroup ships );

prototype task iScriptedOrders.FreelanceMine( hgroup ships );

prototype task iScriptedOrders.OfficialVisitor( hgroup ships );

prototype task iScriptedOrders.PoliceRaid( hgroup ships );

prototype task iScriptedOrders.Loiter( hgroup ships );

prototype task iScriptedOrders.SpeedTrap( hgroup ships );

prototype task iScriptedOrders.Cabbie( hgroup ships );

prototype task iScriptedOrders.HotRodder( hgroup ships );

prototype task iScriptedOrders.Tourist( hgroup ships );

prototype task iScriptedOrders.Flitter( hgroup ships );

prototype task iScriptedOrders.Piracy( hgroup ships );

prototype task iScriptedOrders.Scout( hgroup ships );

prototype task iScriptedOrders.FactoryMine( hgroup ships );

prototype task iScriptedOrders.Maneuvre( hgroup ships );

prototype task iScriptedOrders.Inspection( hgroup ships );

prototype task iScriptedOrders.StationConstruction( hgroup ships );

prototype task iScriptedOrders.StationRepair( hgroup ships );

prototype task iScriptedOrders.Wander( hgroup ships );

prototype task iScriptedOrders.Scavanger( hgroup ships );

prototype task iScriptedOrders.StationAssault( hgroup ships );

prototype task iScriptedOrders.LocalWander( hgroup ships );

prototype task iScriptedOrders.Pilgrimage( hgroup ships );

prototype task iScriptedOrders.Unpredictable( hgroup ships );

prototype task iScriptedOrders.AggressiveLoiter( hgroup ships );

prototype task iScriptedOrders.Naughty( hgroup ships );

prototype task iScriptedOrders.Recovery( hgroup ships, hship hulk );

prototype task iScriptedOrders.TravelTo( hship ship, hmapentity location_operator );

prototype task iScriptedOrders.TravelBetween( hship ship, hmapentity location_operator );

prototype task iScriptedOrders.MonkeyAbout( hship ship, hmapentity location_operator );

prototype task iScriptedOrders.LagrangeHandler ( hgroup ships, string destination );

prototype task iScriptedOrders.LoiterNearSim( hship ship, hsim loiter_target );

prototype task iScriptedOrders.FollowRoute( hship ship,
											hgroup route,
											float completion_ratio,
											float time_step,
											bool allow_avoidance,
											bool loop,
											int index );


// EOF /////////////////////////////////////////////////////////////////////////


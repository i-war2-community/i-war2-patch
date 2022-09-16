//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iShipCreation.h
//
// Compiler-generated export header for package "iShipCreation"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iShipCreation.h 39    9/03/01 12:08p Martyn $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses iShip, Object, Debug, iAI, Math, List, iFormation, MapEnumerations, 
	INIFile, String, iSim, iFaction, Global, iPilotSetup, iUtilities, Group,iCargo,
	iCargoScript;

// Enumerated types ////////////////////////////////////////////////////////////

enum ePilotType 
{ 
	PT_None, PT_Player, PT_AI 
};

// Formation types for create_ships _in_formation
enum eFormationType 
{ 
	FT_Wedge, FT_Goose, FT_LineAbreast, FT_LineAhead, FT_Parade,
	FT_SkirmishLine, FT_V, FT_Cross, FT_Loose, FT_Impi, FT_Outrider,
	FT_LineAstern, FT_Box, FT_Claw, FT_Wall
};

enum eShipType
{
	ST_FreightLight, ST_FreightHeavy, ST_FreightAll, ST_FreightSuperHeavy, 
	ST_FreightCourier, ST_CombatFighter, ST_CombatLight, ST_CombatHeavy,
	ST_CombatCaptial, ST_CombatAll, ST_Medical, ST_Interface, ST_PassengerLight, 
	ST_PassengerHeavy, ST_PassengerAll, ST_MiningLight, ST_MiningHeavy, ST_MiningAll,
	ST_TankerLight, ST_TankerHeavy, ST_TankerAll, ST_GeneralPurpose, ST_Flitter, ST_Recovery,
	ST_DemoShips, ST_Taxi

};

// Functions ///////////////////////////////////////////////////////////////////

prototype string iShipCreation.GetShip( IeAllegiance faction, eShipType ship_type );

prototype bool iShipCreation.PutShipsInFormation( hgroup ship_list, eFormationType formation_type, float spacing_offset, bool first_time );

prototype hgroup iShipCreation.GetTraffic( eShipType traffic_type, IeAllegiance allegiance, int number_req );

prototype iShipCreation.CreateHaulageCargo( hship cargo_vessel, IeHabitatType location_type );

prototype hgroup iShipCreation.CreateCharacterGroup( eShipType type, string pilot_type, int number, hfaction faction, string name_pointer );

prototype iShipCreation.CreateTradeCargo( hship trade_vessel, string trade_type );

prototype iShipCreation.CreateSupplyCargo( hship supply_vessel, int supply_type );

prototype string iShipCreation.ShipName( string name_type, int name_number );

prototype hgroup iShipCreation.CreateCharacterShips( eShipType carrier_type, string carrier_ship_name_pointer, string pilot_name_pointer, string carrier_pilot_type, int carrier_number, eShipType escort_type, string escort_ship_name_pointer, string escort_pilot_type, int escort_number, hfaction faction );

prototype hgroup iShipCreation.CreateCargoPods( eCargoType cargo_type, int number );

prototype list iShipCreation.ReturnHaulageCargo( hship cargo_vessel, IeHabitatType location_type );

prototype list iShipCreation.ReturnTradeCargo( hship trade_vessel, string trade_type );

prototype list iShipCreation.ReturnSupplyCargo( hship supply_vessel, int supply_type );

prototype hgroup iShipCreation.CreateMegapodCargo ( hship pod, int number_pods, int cargo_type );

prototype iShipCreation.StackCargo ( hship pod, hobject cargo );

// EOF /////////////////////////////////////////////////////////////////////////


//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iCargo.h
//
// API for the package iCargo.
//
// Revision control information:
//
// $Header: /iwar2/packages/iCargo.h 12    7/03/01 9:24 Tim $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iCargo);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "icargo" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Cargo type /////////////////////////////////////////////////////////////////

handle hcargo : hobject;

//
// hcargo has the following properties, which are all straightforward.
//
// string name (From hobject)
//
// int type
// bool player_knows_about
// int value
// bool can_manufacture
// int manufacture_value
// bool can_recycle
// int recycle_value
// string ship_system_template
// string encyclopedia_entry
// bool player_system
//

// Cast function //////////////////////////////////////////////////////////////

//
// iCargo.Cast
//
// Cast hobject to hcargo
//
prototype hcargo iCargo.Cast( hobject object_handle );

// Cargo type management //////////////////////////////////////////////////////

//
// iCargo.Create
//
// Define a new type of cargo. Only one cargo may be defined for each value 
// of 'type' - extra definitions will be ignored.
//
// The cargo object is automatically stored in an internal cargo registry so
// no handle is returned. It is normally only necessary to use the type numbers
// when referring to cargoes.
//
prototype iCargo.Create( int type,
						 string name_key,
						 bool player_knows_about,
						 int value,
						 bool can_manufacture,
						 int manufacture_value,
						 bool can_recycle,
						 int recycle_value,
						 string ship_system_template,
						 string encyclopedia_entry,
						 bool player_system );

//
// iCargo.Find
//
// Find a type of cargo from its index (it must already have been created)
// and return its handle. If the cargo doesn't exist the return value is 'none'.
//
prototype hcargo iCargo.Find( int type );

// Cargo property set and query ///////////////////////////////////////////////

//
// All these functions are conveniences for accessing the cargo properties.
//

prototype string iCargo.Name( hcargo cargo );

prototype bool iCargo.PlayerKnowsAbout( hcargo cargo );

prototype int iCargo.Value( hcargo cargo );

prototype bool iCargo.CanManufacture( hcargo cargo );
prototype int iCargo.ManufactureValue( hcargo cargo );

prototype bool iCargo.CanRecycle( hcargo cargo );
prototype int iCargo.RecycleValue( hcargo cargo );

prototype bool iCargo.PlayerSystem( hcargo cargo );

prototype string iCargo.ShipSystemTemplate( hcargo cargo );
prototype string iCargo.EncyclopediaEntry( hcargo cargo );


// 
// All these functions are conveniences for setting the cargo properties. Not
// all are provided since some properties are generally only set at create time.
//

prototype iCargo.SetPlayerKnowsAbout( hcargo cargo, bool knows );

prototype iCargo.SetValue( hcargo cargo, int value );

prototype iCargo.SetCanManufacture( hcargo cargo, bool can_manufacture );
prototype iCargo.SetManufactureValue( hcargo cargo, int value );

prototype iCargo.SetCanRecycle( hcargo cargo, bool can_recycle );
prototype iCargo.SetRecycleValue( hcargo cargo, int value );

//
// iCargo.MarkInsignificant( hcargo cargo )
//
// Register this cargo type as insignificant cargo...i.e. not worth showing
// to the player
//
prototype iCargo.MarkInsignificant( hcargo cargo );

// 
// bool iCargo.Significant( hcargo cargo )
//
// Is this cargo significant?
//
prototype bool iCargo.Significant( hcargo cargo );

// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

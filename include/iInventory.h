//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iInventory.h
//
// API for the package iInventory. Most inventory functions take cargo type
// parameters, which are associated with cargo objects when the cargoes are
// created. See iCargo for more details.
//
// Revision control information:
//
// $Header: /iwar2/packages/iInventory.h 31    10/04/01 11:45 Tim $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iInventory);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iinventory" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

uses GUI, List, CargoTypes;

// Inventory management ///////////////////////////////////////////////////////

//
// iInventory.Add( int cargo_type, int quantity )
//
// Add a quantity of an cargo to the player's inventory.
//
prototype iInventory.Add( eCargoType cargo_type, int quantity );

//
// iInventory.AddWithoutMarkingNew( int cargo_type, int quantity )
//
// Add the cargo, but don't mark the cargo as new for the inventory
//
prototype iInventory.AddWithoutMarkingNew( eCargoType cargo_type, int quantity );

//
// iInventory.Remove
//
// Remove a quantity of an item from the player's inventory. If the inventory
// cannot satisfy the request (if it does not contain a sufficient quantity of
// the item, for example) no items will be removed and the function will return
// false.
//
prototype bool iInventory.Remove( eCargoType cargo_type, int quantity );

//
// iInventory.CancelNewCargoFlags
//
// Clear the new-this-trip flags for each cargo type
//
prototype iInventory.CancelNewCargoFlags();

//
// bool iInventory.GotBlueprints( int cargo_type )
//
// Has the player got the blueprints to manufacture for the given cargo type
//
prototype bool iInventory.GotBlueprints( eCargoType cargo_type );

//
// iInventory.SetBlueprintsForCargo( int cargo_type, int blueprints )
//
// Forge the links between blueprints and the cargo which they manufacture
//
prototype iInventory.SetBlueprintsForCargo( eCargoType cargo_type, int blueprints );

//
// iInventory.ResetWindows()
//
// Pull the inventory windows out of their existing window manager and 
// back into the inventory
//
prototype iInventory.ResetWindows();

// Special inventory management ///////////////////////////////////////////////

//
// iInventory.Recycle
//
// Convert a quantity of an item into manufacture units. If the inventory cannot
// satisfy the entire request, it will (as above) recycle no items and return
// false.
//
prototype bool iInventory.Recycle( eCargoType cargo_type, int quantity );

//
// iInventory.Manufacture
//
// Convert a quantity of an item into resource units. If the inventory cannot
// satisfy the entire request, it will (as above) manufacture no items and return
// false.
//
prototype bool iInventory.Manufacture( eCargoType cargo_type, int quantity );

// Overall inventory properties ///////////////////////////////////////////////

//
// iInventory.TotalWorth
//
// Return the player's total worth, in terms of the _sell_ value of items in 
// the inventory.
//
prototype int iInventory.TotalWorth();

//
// iInventory.ManufactureUnits
//
// Return the player's total manufacture units.
//
prototype int iInventory.ManufactureUnits();

// Cargo category building functions //////////////////////////////////////////

//
// iInventory.CreateCargoCategory( int category_id, 
//								   string category_name_key,
//								   string encyclopaedia_entry,
//								   int start_type, 
//								   int end_type )
//
// Create a new cargo category. 
//
// The first parameter is the ID number for the new category. Only one category 
// can be created with a given ID number - all subsequent categories will be 
// ignored. Then come a localised text key for the category and a resource
// request for the encyclopedia entry for this category.
//
// The remaining parameters define a range of cargo types which make up the 
// category. Thus all cargos in the same category must have adjacent type numbers.
//
prototype iInventory.CreateCargoCategory( int category_id, 
										  string category_name_key,
										  string encyclopaedia_entry,
										  int start_type, 
										  int end_type );


//
// int iInventory.CargoCategoryFromName( string cargo_name );
//
// Convert a string localisation key into the number of the cargo type
// it references.

prototype int iInventory.CargoTypeFromName( string cargo_name );

prototype int iInventory.CargoCategoryFromName( string cargo_name );

prototype int iInventory.CargoSupertypeFromName( string cargo_name );


prototype int iInventory.CargoTypeFromCategoryIndex( int category_index);

prototype int iInventory.CargoTypeFromSupertypeIndex( int category_index);



// 
// iInventory.CreateCargoSuperSet( int super_set_id, 
//								   string super_set_name_key,
//								   string encyclopaedia_entry,
//								   int start_category, 
//								   int end_category )
//
// Create a new super set - a collection of cargo categories. 
//
// The first parameter is the ID number for the new super category to create. 
// Only one super category can have a given ID - subsequent super categories will
// be ignored. Then comes a localised text key for the name of the set and a 
// resource request for the encyclopaedia entry for it.
//
// The remaining paremeters define a range of cargo category IDs. It is these
// categories which form the super category, this all categories in a super 
// category must have adjacent IDs.
//
prototype iInventory.CreateCargoSuperSet( int super_set_id, 
										  string super_set_name_key,
										  string encyclopaedia_entry,
										  int start_category, 
										  int end_category );

// Inventory querying /////////////////////////////////////////////////////////

//
// int iInventory.NumberOfCargoTypes()
//
// How many cargo types are registered?
//
prototype int iInventory.NumberOfCargoTypes();

//
// int iInventory.NumberOfCargoType( int type )
//
// How many of a given cargo type does the player have?
//
prototype int iInventory.NumberOfCargoType( eCargoType type );

//
// int iInventory.NumberOfCargoInCategory( int category )
//
// How many of any cargo in a given category does the player have?
//
prototype int iInventory.NumberOfCargoInCategory( eCargoCategory category );

//
// int iInventory.NumberOfRecyclableCargoInCategory( int category )
//
// How many of any recyclable cargo in a given category does the player have?
//
prototype int iInventory.NumberOfRecyclableCargoInCategory( eCargoCategory category );

//
// int iInventory.NumberOfCargoInSuperSet( int super_set )
//
// How many of any cargo in a given super set does the player have?
//
prototype int iInventory.NumberOfCargoInSuperSet( eCargoSuperSet super_set );

//
// int iInventory.NumberOfRecyclableCargoInSuperSet( int super_set )
//
// How many of any recyclable cargo in a given super set does the player have?
//
prototype int iInventory.NumberOfRecyclableCargoInSuperSet( eCargoSuperSet super_set );

//
// bool iInventory.IsPieceOfAmmo( int cargo_type )
//
// Is the given cargo item a missile or an individual piece of ammo?
//
prototype bool iInventory.IsPieceOfAmmo( eCargoType cargo_type );

//
// int iInventory.NumTypesInInventory()
//
// Get the number of inventory types that the player has any of in the inventory
//
prototype int iInventory.NumTypesInInventory();

//
// int iInventory.QuantityOfNthTypeInInventory( int n )
//
// Get the amount of a thing that the player has of the nth item in the inventory
//
prototype int iInventory.QuantityOfNthTypeInInventory( int n );

//
// int iInventory.NumTypesInSuperSet( int id )
//
// Get the number of inventory types that the player has any of in a superset
//
prototype int iInventory.NumTypesInSuperSet( int id );

//
// int iInventory.QuantityOfNthTypeInSuperSet( int id, int n )
//
// Get the amount of a thing that the player has of the nth item in a superset
//
prototype int iInventory.QuantityOfNthTypeInSuperSet( int id, int n );

//
// int iInventory.NumTypesInCategory( int id )
//
// Get the number of inventory type that the player has any of in a category
//
prototype int iInventory.NumTypesInCategory( int id );

//
// int iInventory.QuantityOfNthTypeInCategory( int id, int n )
//
// Get the amount of a thing that the player has of the nth item in a category
//
prototype int iInventory.QuantityOfNthTypeInCategory( int id, int n );

//
// iInventory.FillRecyclingListBox( hwindow list_box, ref list cargos )
//
// Fill the given list box with inventory description windows for the recycling
// screen. Also fill a list of cargo handles representing each added list box 
// entry.
//
prototype iInventory.FillRecyclingListBox( hwindow list_box, ref list cargos );

//
// iInventory.FillInventoryListBox( 
//	hwindow list_box, bool player_systems, ref list cargos )
//
// Fill the given list box with inventory description windows for the inventory
// screen. Also fill a list of cargo handles representing each added list box 
// entry. Set to only display player systems (equipment) or cargo
//
prototype iInventory.FillInventoryListBox( 
	hwindow list_box, bool player_systems, ref list cargos );

//
// iInventory.FillAddCargoListBox( hwindow list_box, ref list cargos )
//
// Fill the given list box with inventory description windows for the add cargo
// screen. Also fill a list of cargo handles representing each added list box 
// entry.
//
prototype iInventory.FillAddCargoListBox( hwindow list_box, ref list cargos );

//
// int iInventory.CategoryContaining( int index )
//
// Find the index of the category containing the given cargo type
//
prototype int iInventory.CategoryContaining( int index );

//
// int iInventory.SuperSetContaining( int index )
//
// Find the index of the super set containing the given category
//
prototype int iInventory.SuperSetContaining( int index );

// Ship management functions //////////////////////////////////////////////////

//
// bool iInventory.GotCommandSection
//
// Does the player have the command section
//
prototype bool iInventory.GotCommandSection();

//
// bool iInventory.GotTug
//
// Does the player have the tug
//
prototype bool iInventory.GotTug();

//
// bool iInventory.GotFastAttackShip
//
// Does the player have the fast attack ship
//
prototype bool iInventory.GotFastAttackShip();

//
// bool iInventory.GotHeavyCorvette
//
// Does the player have the heavy corvette
//
prototype bool iInventory.GotHeavyCorvette();

//
// bool iInventory.GotStormPetrel
//
// Does the player have the Storm Petrel? 
//
prototype bool iInventory.GotStormPetrel();

//
// iInventory.AddCommandSection()
//
// Give the player the command section
//
prototype iInventory.AddCommandSection();

//
// iInventory.AddTug()
//
// Give the player the tug
//
prototype iInventory.AddTug();

//
// iInventory.AddFastAttackShip()
//
// Give the player the fast attack ship
//
prototype iInventory.AddFastAttackShip();

//
// iInventory.AddHeavyCorvette()
//
// Give the player the heavy corvette
//
prototype iInventory.AddHeavyCorvette();

//
// iInventory.AddStormPetrel()
//
// Give the player the storm petral
//
prototype iInventory.AddStormPetrel();

//
// iInventory.RemoveCommandSection()
//
// Remove the command section from the player
//
prototype iInventory.RemoveCommandSection();

//
// iInventory.RemoveTug()
//
// Remove the tug from the player
//
prototype iInventory.RemoveTug();

//
// iInventory.RemoveFastAttackShip()
//
// Remove the fast attack ship from the player
//
prototype iInventory.RemoveFastAttackShip();

//
// iInventory.RemoveHeavyCorvette()
//
// Remove the heavy corvette from the player
//
prototype iInventory.RemoveHeavyCorvette();

//
// iInventory.RemoveStormPetrel()
//
// Remove the storm petrel from the player
//
prototype iInventory.RemoveStormPetrel();






// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB


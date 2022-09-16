//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// imapentity.h
//
// API for the package imapentity - functions for manipulation of game geography
// entities such as celestial bodies, habitats and Lagrange points.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iMapEntity);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "imapentity" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies
uses iSim, Set, MapEnumerations;

// Declare handle types - actually an hwaypoint but maintained for backward
// compatability
handle hmapentity : hisim;

// System level functions //////////////////////////////////////////////////////

//
// hmapentity Cast( hobject thing )
//
// Cast a handle up to a map entity handle.
//
prototype hmapentity iMapEntity.Cast( hobject thing );

//
// string SystemName()
//
// Get the system name.
//
prototype string iMapEntity.SystemName();

//
// hmapentity SystemCentre()
//
// Get the system centre.
//
prototype hmapentity iMapEntity.SystemCentre();

//
// hmapentity SystemCentreForSystem( string name )
//
// Get the system centre for a given system.
//
prototype hmapentity iMapEntity.SystemCentreForSystem( string name );

//
// set SystemHabitats()
//
// Get a set of all habitats in the active system.
//
prototype set iMapEntity.SystemHabitats();

//
// set SystemHabitatsInSystem( string name )
//
// Get a set of all habitats in the given system.
//
prototype set iMapEntity.SystemHabitatsInSystem( string name );

//
// set SystemBodies()
//
// Get a set of all celestial bodies in the system.
//
prototype set iMapEntity.SystemBodies();

//
// set SystemBodiesInSystem( string name )
//
// Get a set of all celestial bodies in the given system.
//
prototype set iMapEntity.SystemBodiesInSystem(string name);

//
// set SystemLagrangePoints()
//
// Get a set of all Lagrange points in the system.
//
prototype set iMapEntity.SystemLagrangePoints();

//
// set SystemLagrangePointsInSystem( string name )
//
// Get a set of all Lagrange points in the given system.
//
prototype set iMapEntity.SystemLagrangePointsInSystem(string name);

//
// set SystemEntities()
//
// Get a set of all entities in the system.
//
prototype set iMapEntity.SystemEntities();

//
// set SystemEntitiesForSystem()
//
// Get a set of all entities in a given system.
//
prototype set iMapEntity.SystemEntitiesForSystem(string name);

// Generic map entity functions ////////////////////////////////////////////////

//
// string Name( mapentity entity )
//
// Get the name for a given map entity.
//
prototype string iMapEntity.Name( hmapentity entity );

//
// hmapentity Parent( hmapentity entity )
//
// Get the parent entity for this entity.
//
prototype hmapentity iMapEntity.Parent( hmapentity entity );

//
// set Children( hmapentity entity )
//
// Get a set of the children of a given map entity.
//
prototype set iMapEntity.Children( hmapentity entity );

//
// hsim SimForEntity( hmapentity entity )
//
// Get the sim representing the given entity. Note that not all entities will
// have a physical representation sim.
//
prototype hsim iMapEntity.SimForEntity( hmapentity entity );

//
// hsim WaypointForEntity( hmapentity entity )
//
// Get a handle to the waypoint for a given entity.
//
prototype hsim iMapEntity.WaypointForEntity( hmapentity entity );

//
// float EntityToEntityDistance( hmapentity e1, hmapentity e2 )
//
// Get the distance between two map entities. Takes entity sizes into account.
//
prototype float iMapEntity.EntityToEntityDistance( hmapentity e1, hmapentity e2 );

//
// float EntityToSimDistance( hmapentity entity, hsim sim )
//
// Get the distance between a map entity and a sim. Takes entity size into 
// account.
//
prototype float iMapEntity.EntityToSimDistance( hmapentity entity, hsim sim );

//
// set ShipsInRadius( hhabitat habitat, float radius )
//
// Get a set of all ships within a given radius of the given entity.
//
prototype set iMapEntity.ShipsInRadius( hmapentity entity, float radius );

//
// IeAllegiance CastIntToAllegiance( int index )
//
// Cast an int up to a member of the allegiance enumerator
//
prototype IeAllegiance iMapEntity.CastIntToAllegiance( int index );

//
// float RadiusOfInfluence( hmapentity entity )
//
// Retuns the radius of influence of a map entity.  Note that lagrange points
// currently have no radius of influence
//
prototype float iMapEntity.RadiusOfInfluence( hmapentity entity );

//
// hmapentity FindByName( string name )
//
// Try to find an entity in the system with the given name.
//
prototype hmapentity iMapEntity.FindByName( string name );

//
// hmapentity FindByNameInSystem( string name, string system )
//
// Try to find an entity in the given system with the given name.
//
prototype hmapentity iMapEntity.FindByNameInSystem( string name, string system );

//
// SetMapVisibility( hmapentity waypoint, bool visible )
//
// Sets the map visibility of the given map entity
//
prototype iMapEntity.SetMapVisibility( hmapentity waypoint, bool visible );

//
// IsVisible( hmapentity waypoint )
//
// Returns true if we are visible
//
prototype bool iMapEntity.IsVisibleOnMap( hmapentity waypoint );

//
// SetHidden( hmapentity waypoint, bool hidden )
//
// Set to true if we are hidden, false otherwise
//
prototype iMapEntity.SetHidden( hmapentity waypoint, bool hidden );

//
// IsHidden( hmapentity waypoint )
//
// Returns true or false depending on whether or not we are hidden
//
prototype bool iMapEntity.IsHidden( hmapentity waypoint );

//
// SetDestroyed( hmapentity waypoint, bool destroyed )
//
// Changes the destroyed status of geography
//
prototype iMapEntity.SetDestroyed( hmapentity waypoint, bool destroyed );

//
// IsDestroyed( hmapentity waypoint )
//
// Returns true or false depending on whether or not we have been registered
// as destroyed
//
prototype bool iMapEntity.IsDestroyed( hmapentity waypoint );


prototype int  iMapEntity.GeogIndex( hmapentity entity );



#endif // FLUX_LIB

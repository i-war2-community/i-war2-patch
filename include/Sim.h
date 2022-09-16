//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Sim.h
//
// API for the package Sim.
//
// Revision control information:
//
// $Header: /flux/packages/Sim.h 43    3/04/01 16:19 Tim $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Sim);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "sim" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Declare a hsim handle type.
handle hsim : hobject;

// Dependencies
uses Set, Group, Subsim;

// Handle operations ///////////////////////////////////////////////////////////

//
// hsim Sim.Cast( hobject )
//
// Create a sim as a dynamic cast from the hobject
//
prototype hsim Sim.Cast( hobject object_handle );

// Sim creation and deletion ///////////////////////////////////////////////////

//
// hsim Create( string class_name, string sim_name, string filename )
//
// Create a new sim from the given template, and set its name to be sim_name.
//
prototype hsim Sim.Create( string template_name, string sim_name );

//
// bool IsDead( hsim sim )
//
// Returns true if the sim is dead (or has been culled)
//
prototype bool Sim.IsDead( hsim sim );

//
// bool IsAlive( hsim sim )
//
// Returns true if the sim is alive
//
prototype bool Sim.IsAlive( hsim sim );

//
// Preload( string template )
//
// Preload a sim with the given template.
//
prototype Sim.Preload( string template );

//
// Destroy( hsim sim )
//
// Destroys a sim and removed it from the world.
//
prototype Sim.Destroy( hsim sim );

//
// TemplateName( hsim sim )
//
// Returns the resource template originally used
// to create the sim.
//
prototype string Sim.TemplateName( hsim sim );


// Sim placement ///////////////////////////////////////////////////////////////

//
// bool PlaceAt( hsim sim, hsim marker )
//
// Place the sim at the given sim. Return false if either handle is 
// invalid. Again, the world will be set if it is not already.
//
prototype bool Sim.PlaceAt( hsim sim, hsim marker );

//
// void PointAt( hsim sim, hsim marker )
//
// Point the sim at the given sim.
// Again, the world will be set if it is not already.
//
prototype Sim.PointAt( hsim sim, hsim marker );

//
// PointAway( hsim sim, hsim marker )
//
// Point the sim away from the given sim.
// Again, the world will be set if it is not already.
//
prototype Sim.PointAway( hsim sim, hsim marker );

//
// bool IsInFOV( hsim sim1, hsim sim2 )
//
// Returns true if sim2 is within sim1's field of view (fov - degrees)
//
prototype bool Sim.IsInFOV( hsim sim1, hsim sim2, float fov );

//
// float Speed( hsim sim )
//
// Returns the speed of the given sim
//
prototype float Sim.Speed( hsim sim );

//
// bool PlaceRelativeTo( hsim sim, hsim marker, float x, float y, float z )
//
// Place the sim relative to the given sim with sim aligned coordinate
// axis. Return false if either handle is invalid.
//
// The world will be set if it is not already.
//
prototype bool Sim.PlaceRelativeTo( hsim sim, hsim marker, float x, float y, float z );

//
// bool PlaceBetween( hsim sim, hsim begin, hsim end, float distance )
//
// Place the given sim between the two given sims at the given distance from
// the start sim. The distance is between [0,1]
//
prototype bool Sim.PlaceBetween( hsim sim, hsim begin, hsim end, float distance );

//
// bool PlaceNear( hsim sim, hsim marker, float distance )
//
// Place the given sim in the area around the given sim at the given distance.
//
prototype bool Sim.PlaceNear( hsim sim, hsim marker, float distance );

//
// bool PlaceInFrontOf( hsim sim, hsim other_sim, float distance )
//
// Place the other_sim in front of the given sim by the given distance
//
prototype bool Sim.PlaceInFrontOf( hsim sim, hsim other_sim, float distance );

//
// bool PlaceRelativeToInside( hsim sim, hsim other_sim, float x, float y, float z )
//
// Similiar to PlaceRelativeTo except it allows placemenet of objects inside objects.
// Use with caution!!!
//
prototype bool Sim.PlaceRelativeToInside( hsim sim, hsim other_sim, float x, float y,
										  float z );

//
// void SetOrientationEuler( hsim sim, float yaw, float pitch, float roll )
//
// 
//
prototype Sim.SetOrientationEuler( hsim sim, float yaw, float pitch, float roll );

//
// void CopyOrientation( hsim dest, hsim src )
//
// Give the given sim the orientation of the other given sim
//
prototype Sim.CopyOrientation( hsim dest, hsim src );

//
// void SetAngularVelocityEuler( hsim sim, float yaw_dps, float pitch_dps, float roll_dps)
//
// Give the sim a rotational velocity, with Euler angular rates in degrees per second.
//
prototype Sim.SetAngularVelocityEuler( hsim sim, float yaw_dps, float pitch_dps, float roll_dps );

//
// void SetAngularVelocity( hsim sim, float x, float y, float z, float dps )
//
// Set a rate of rotation around a vector axis. The vector will be normalised by the function.
//
prototype Sim.SetAngularVelocity( hsim sim, float x, float y, float z, float dps );

//
// void SetVelocity( hsim sim, float x, float y, float z )
//
// Give the sim an initial linear velocity in world coordinates.
//
prototype Sim.SetVelocity( hsim sim, float x, float y, float z );

//
// void SetVelocityLocalToSim( hsim sim, float x, float y, float z )
//
// Give the sim an initial linear velocity in local coordinates
//
prototype Sim.SetVelocityLocalToSim( hsim sim, float x, float y, float z );

//
// void SetRadius( float radius )
//
// Sets the radius of a sim
//
prototype Sim.SetRadius( float radius );

// Sim property accessors //////////////////////////////////////////////////////

//
// bool IsInteresting( hsim sim )
//
// Returns TRUE if the given sim is flagged as interesting.
//
prototype bool Sim.IsInteresting( hsim sim );

//
// IsCullable( hsim sim )
//
// Returns TRUE if the given sim will be culled if uninteresting.
//
prototype bool Sim.IsCullable( hsim sim );

//
// IsHidden( hsim sim )
//
// Returns TRUE if the given sim is flagged as hidden.
//
prototype bool Sim.IsHidden( hsim sim );

//
// SetHidden( hsim sim, bool hidden )
//
// Sets the hidden status of a sim.
//
prototype bool Sim.SetHidden( hsim sim, bool hidden );

//
// SetCullable( hsim sim, bool cullable )
//
// Sets the cull-if-not-interesting flag of the sim
//
prototype Sim.SetCullable( hsim sim, bool cullable );

//
// float DistanceBetween( hsim sim1, hsim sim2 )
//
// Find the distance between two sims.
//
prototype float Sim.DistanceBetween( hsim sim1, hsim sim2 );

//
// float DistanceBetweenCentres( hsim sim1, hsim sim2 )
//
// Find the distance between the centres of two sims.
//
prototype float Sim.DistanceBetweenCentres( hsim sim1, hsim sim2 );

// Sim tree manipulation ///////////////////////////////////////////////////////

//
// AttachChild( hsim parent, hsim child )
//
// Attach the sim child as a child of the sim parent, keeping their current
// physical locations.
//
prototype Sim.AttachChild( hsim parent, hsim child );

//
// DetachChild( hsim parent, hsim child )
//
// Detach the sim child from the sim parent.
//
prototype Sim.DetachChild( hsim parent, hsim child );

//
// AddChildRelativeTo( hsim parent, hsim child, float x, float y, float z )
//
// Add the given child to the given parent at the given offset.
//
prototype Sim.AddChildRelativeTo( hsim parent, hsim child, float x, float y, float z );

// Sim Organisation Queries ////////////////////////////////////////////////////

//
// hsim First()
//
// Get the first sim in the world.
//
prototype hsim Sim.First();

//
// int ChildCount( hsim sim )
//
// Returns the number of children -- Note that this should be atomic if 
// used in a loop with NthChild as (in theory) ChildCount could change
// between script time slices.
//
prototype int Sim.ChildCount( hsim sim );

//
// hsim NthChild( hisim sim, int child_num )
//
// Returns the nth child of the given sim (see above)
//
prototype hsim Sim.NthChild( hsim sim, int child_num );

//
// hsim Parent()
//
// Get the parent of the given sim
//
prototype hsim Sim.Parent( hsim sim );

//
// string Name()
//
// Gets the name of the sim
//
prototype string Sim.Name( hsim sim );

//
// hsim FindByName( string name )
//
// Return the first sim found that matches the Name given.
//
prototype hsim Sim.FindByName( string name );

//
// set FindByWildcard( string wildcard )
//
// Use a wildcard to retrieve a set of sims from the current world.
//
prototype set Sim.FindByWildcard( string wildcard );

//
// set Children( hsim sim )
//
// Get a set of all the children of a given sim
//
prototype set Sim.Children( hsim sim );

// Sim event management ////////////////////////////////////////////////////////

//
// bool GetEvent( hsim sim, string event_name )
//
// Test to see if an event flag is set. If it is then clear it.
//
prototype bool Sim.GetEvent( hsim sim, string event_name );

//
// bool PeekEvent( hsim sim, string event_name )
//
// Test to see if an event flag is set. Do not unset it if it is.
//
prototype bool Sim.PeekEvent( hsim sim, string event_name );

//
// bool SetEvent( hsim sim, string event_name )
//
// Set an event.
//
prototype bool Sim.SetEvent( hsim sim, string event_name );

//
// bool ClearEvent( hsim sim, string event_name )
//
// Set or clear the event flag on a sim.
//
prototype bool Sim.ClearEvent( hsim sim, string event_name );

// Group accessors ///////////////////////////////////////////////////////////

//
// hgroup Sim.Group( hsim sim )
//
// Returns our current group if we have one.
//
prototype hgroup Sim.Group( hsim sims );

// Subsim support ////////////////////////////////////////////////////////////

//
// int Sim.SubsimCount( hsim sim )
//
// Returns the number of subsims carried by a sim.
//
prototype int Sim.SubsimCount( hsim sim );

//
// hsubsim Sim.NthSubsim( hsim sim, int n )
//
// Returns the nth subsim carried by a sim
//
prototype hsubsim Sim.NthSubsim( hsim sim, int n );

//
// hsubsim Sim.RemoveNthSubsim( hsim sim, int n )
//
// Removes the nth subsim carried by a sim.  All other subsims are shuffled
// downwards.
//
prototype hsubsim Sim.RemoveNthSubsim( hsim sim, int n );

//
// bool Sim.AddSubsim( hsim sim, hsubsim subsim )
//
// Adds a subsim to a sim.  Returns true if it succeeds.
//
prototype bool Sim.AddSubsim( hsim sim, hsubsim subsim );

//
// hsubsim Sim.FindSubsimByName( hsim sim, string subsim_name )
//
// Finds the first subsim to match the given name.
//
prototype hsubsim Sim.FindSubsimByName( hsim sim, string subsim_name );

//
// Channels
//

//
// AvatarAddChannel( hsim sim, string name, float init_value)
//
// Creates a channel called name onto the sim's avatar.
//
prototype Sim.AvatarAddChannel( hsim sim, string name, float init_value);


//
// AvatarRemoveChannel( hsim sim, string name )
//
// Remove the called name onto the sim's avatar.
//
prototype Sim.AvatarRemoveChannel( hsim sim, string name);

//
// AvatarSetChannel( hsim sim, string name, float value)
//
// Set the named channel's value
//
prototype Sim.AvatarSetChannel( hsim sim, string name, float value);

//
// float AvatarChannelValue( hsim sim, string name)
//
// Return the named channel's value
//
prototype float Sim.AvatarChannelValue( hsim sim, string name);

//
// SetCollision(hsim sim, bool on)
//
// Turn collision on or off for a sim. Intended for cutscene use only.
//
prototype Sim.SetCollision( hsim sim, bool on);

//
// IsCollisionOn(hsim sim)
//
// Determine if collision is on the given sim
//
prototype bool Sim.IsCollisionOn( hsim sim );

//
// SetMass( hsim sim, float value )
//
// Sets the mass of the sim. Zero means infinite mass.
//
prototype Sim.SetMass( hsim sim, float value );

#endif // FLUX_LIB

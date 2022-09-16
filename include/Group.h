//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Group.h
//
// Sim group package API.
//
// Revision control information:
//
// $Header: /flux/packages/Group.h 11    26/06/00 16:11 Brett $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Group);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "group" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Handle definition /////////////////////////////////////////////////////////

// The handle to a group
handle hgroup : hobject;

uses Sim;

//
// prototype hgroup Group.Cast( hobject object )
//
// Casts the object to a group
//
prototype hgroup Group.Cast( hobject obj );

//
// prototype hgroup Group.Create()
//
// Creates a new group
//
prototype hgroup Group.Create();

// 
// prototype Group.Destroy( hgroup group, bool including_sims )
//
// Destroys this group and subgroups, including their sims if the 
// including_sims argument is true
//
prototype Group.Destroy( hgroup group, bool including_sims );

//
// prototype Group.AddGroup( hgroup group, hgroup subgroup )
//
// Adds the subgroup to the group.
//
prototype Group.AddGroup( hgroup group, hgroup subgroup );

//
// prototype Group.RemoveGroup( hgroup group, hgroup subgroup )
//
// Removes a subgroup from a group.  The old group removes the subgroup and
// its children, the subgroup now being a new group in its own right.
//
prototype Group.RemoveGroup( hgroup group, hgroup subgroup );

//
// prototype Group.RemoveNthGroup( hgroup group, int nth )
//
// Removes the nth subgroup from a group.  The old group removes the subgroup
// and its children, the subgroup now being a new group in its own right.
//
prototype Group.RemoveNthGroup( hgroup group, int nth );

//
// prototype int Group.GroupCount( hgroup group )
//
// Returns the number of subgroups in the given group
//
prototype int Group.GroupCount( hgroup group );

//
// prototype hgroup Group.NthGroup( hgroup group, int nth )
//
// Returns the nth subgroup group (indexed from 0) in the group.
//
prototype hgroup Group.NthGroup( hgroup group, int nth );

//
// prototype Group.AddSim( hgroup group, hsim sim )
//
// Adds a sim to the group.  If this is the first sim added it becomes the 
// leader.
//
prototype Group.AddSim( hgroup group, hsim sim );

//
// prototype Group.RemoveSim( hgroup group, hsim sim )
//
// Removes a sim from the group.  If this is the leader (the "1-nth" sim is 
// promoted)
//
prototype Group.RemoveSim( hgroup group, hsim sim );

//
// prototype Group.RemoveNthSim( hgroup group, int nth )
//
// Removes the nth sim from the group.  If n = 0 this is the leader and the
// "1-nth" sim is promoted.
//
prototype Group.RemoveNthSim( hgroup group, int nth );

//
// prototype int Group.SimCount( hgroup group )
//
// Returns the number of sims in a group
//
prototype int Group.SimCount( hgroup group );

//
// prototype hsim Group.NthSim( hgroup group, int nth )
//
// Returns the nth sim in a group
//
prototype hsim Group.NthSim( hgroup group, int nth );

//
// prototype Group.PromoteSim( hgroup group, int nth )
//
// Promote the nth sim to leader
//
prototype Group.PromoteSim( hgroup group, int nth );

//
// prototype int Group.TotalSimCount( hgroup group )
//
// Returns the total number of sims in the group and subgroups
//
prototype int Group.TotalSimCount( hgroup group );

//
// prototype hsim Group.Leader( hgroup group )
//
// Returns the leader of a group
//
prototype hsim Group.Leader( hgroup group );

//
// prototype Group.Flatten( hgroup group )
//
// Flatten the group, recursively destroying all subgroups and adding their
// sims to our list.
//
prototype Group.Flatten( hgroup group );

//
// prototype int Group.Depth( hgroup group )
//
// Returns the depth of the group in the group tree.
//
prototype int Group.Depth( hgroup group );

//
// prototype hgroup Group.Parent( hgroup group )
//
// Returns the parent of the group.
//
prototype hgroup Group.Parent( hgroup group );

//
// prototype hgroup Group.Root( hgroup group )
//
// Returns the top-most (root) parent group.
//
prototype hgroup Group.Root( hgroup group );

//
// hgroup Group.FromList( ref list the_list )
//
// Forms a single group from a list.
//
prototype hgroup Group.FromList( ref list the_list );

//
// hgroup Group.FromSet( ref set the_set )
//
// Forms a single group from a set.
//
prototype hgroup Group.FromSet( ref set the_set );

// EOF ///////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB


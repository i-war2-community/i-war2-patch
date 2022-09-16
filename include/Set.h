//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Set.h
//
// API for the package Set.
//
// Revision control information:
//
// $Header: /flux/packages/Set.h 7     6/12/00 11:36 Carl $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Set);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "set" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else
// Declare the script object type as a script set object
object set ( FcScriptSet );

// Include the list header so that we can make conversion functions
uses List;

//
// hobject Set.FirstElement( ref set the_set )
//
// Accessor for the first handle stored in the_set
//
prototype hobject Set.FirstElement( ref set the_set );

//
// Set.Remove( ref set the_set, hobject the_handle ) 
//
// Remove the handle from the_set
//
prototype Set.Remove( ref set the_set, hobject the_handle );

//
// Set.Add( ref set the_set, hobject the_handle )
//
// Add the handle to the set
//
prototype Set.Add( ref set the_set, hobject the_handle );

//
// bool Set.Contains( ref set the_set, hobject the_handle )
//
// Check whether the_set contains the_handle
//
prototype bool Set.Contains( ref set the_set, hobject the_handle );

//
// bool Set.IsEmpty( set the_set )
//
// Returns true if the set is empty
//
prototype bool Set.IsEmpty( ref set the_set );

//
// int Set.ItemCount( ref set the_set )
//
// Get the item count of the_set
//
prototype int Set.ItemCount( ref set the_set );

//
// Set.Union( set set_one, set set_two )
//
// The union of set_one and set_two
//
prototype Set.Union( ref set set_one, ref set set_two );

//
// Set.Intersection( ref set set_one, ref set set_two )
//
// The intersection of set_one and set_two
//
prototype Set.Intersection( ref set set_one, ref set set_two );

//
// Set.Difference( ref set set_one, ref set set_two )
//
// The difference of set_one and set_two
//
prototype Set.Difference( ref set set_one, ref set set_two );

//
// Set.FromList( ref list the_list )
//
// Create a set from the_list
//
prototype set Set.FromList( list the_list );





#endif // FLUX_LIB

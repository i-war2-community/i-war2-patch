//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// List.h
//
// API for the package List.
//
// Revision control information:
//
// $Header: /flux/packages/List.h 10    23/02/01 14:35 Carl $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(List);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "List" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Declare the script object type as a script list object
object list ( FcScriptList );

// Include set so that conversion functions can be written
uses Set;

//
// hobject List.Head( ref list the_list )
//
// Accessor for the head of the list
//
prototype hobject List.Head( ref list the_list );

//
// hobject List.Tail( ref list the_list )
//
// Accessor for the tail of the list
//
prototype hobject List.Tail( ref list the_list );

//
// hobject List.GetNth( ref list the_list, int N )
//
// Accessor for the Nth handle stored in the_list
//
prototype hobject List.GetNth( ref list the_list, int N );

//
// hobject List.SetNth( ref list the_list, int N, hobject the_handle )
//
// Settor for the Nth handle stored in the list
//
prototype hobject List.SetNth( ref list the_list, int N, hobject the_handle );

//
// List.AddHead( ref the_list, hobject the_handle )
//
// Add a handle to the head (top) of the_list
//
prototype List.AddHead( ref list the_list, hobject the_handle );

//
// ref List.AddTail( ref the_list, hobject the_handle )
//
// Add a handle to the tail (end) of the_list
//
prototype List.AddTail( ref list the_list, hobject the_handle );

//
// List.Append( ref list_one, list list_two )
//
// Append list_two onto the end of list_one and return this new list
//
prototype List.Append( ref list list_one, ref list list_two );

//
// List.RemoveHead( ref list the_list )
//
// Removes the head of the_list
//
prototype List.RemoveHead( ref list the_list );

//
// List.RemoveTail( ref list the_list )
//
// Removes the tail of the_list
//
prototype List.RemoveTail( ref list the_list );

//
// List.Remove( ref list the_list, hobject the_handle )
//
// Removes the_handle from the_list
//
prototype List.Remove( ref list the_list, hobject the_handle );

//
// List.RemoveNth( ref list the_list, int N )
//
// Removes the Nth handle from the_list
//
prototype List.RemoveNth( ref list the_list, int N );

//
// List.RemoveMembers( ref list the_list, ref list the_members )
//
// Removes all of the_members from the_list
//
prototype List.RemoveMembers( ref list the_list, ref list the_members );

//
// List.RemoveAll( ref list the_list )
//
// Removes all elements from the_list
//
prototype List.RemoveAll( ref list the_list );

//
// bool List.IsEmpty( ref list the_list )
//
// Returns true if the list is empty
//
prototype bool List.IsEmpty( ref list the_list );

//
// int List.ItemCount( ref list the_list )
//
// Returns the number of items in the_list
//
prototype int List.ItemCount( ref list the_list );

//
// bool List.Contains( ref list the_list, hobject the_handle )
//
// Returns true if the_list contains the_handle
//
prototype bool List.Contains( ref list the_list, hobject the_handle );

//
// list List.FromSet( set the_set )
//
// Returns a list that contains all the elements of the set
//
prototype list List.FromSet( ref set the_set );

//
// list List.SortByStringProperty( ref set the_set, ref string property )
//
// Return a list from the set sorted in alphanumeric order of the given property
//
prototype list List.SortByStringProperty( ref list the_list, ref string property );


//
// list List.SortByStringProperty( ref set the_set, ref string property )
//
// Return a list from the set sorted in numeric order of the given property
//
prototype list List.SortByIntProperty( ref list the_list, ref string property );


//
// list List.SortByFloatProperty( ref set the_set, ref float property )
//
// Return a list from the set sorted in float order of the given property
//
prototype list List.SortByFloatProperty( ref list the_list, ref string property );

//
// list List.SortByHandle( ref set the_set )
//
// Return a list from the set sorted by handle id.
//
prototype list List.SortByHandle( ref list the_list );

#endif // FLUX_LIB

//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Global.h
//
// API for the package Global.
//
// Revision control information:
//
// $Header: /flux/packages/Global.h 3     21/04/01 11:52 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Global);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "global" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Include other packages
uses String, List, Set;

// Enumeration for access to global
enum eGlobalAccess 
{ 
	GA_Read           = 1, 
	GA_Write          = 2,
	GA_Indestructible = 4,
	GA_NoSave         = 8
};

// Enumeration for the type of the global value
enum eGlobalType
{ 
    GT_Int, 
	GT_Float, 
	GT_Bool, 
    GT_Handle,
    GT_String, 
	GT_List, 
	GT_Set
};

//
// Creation functions
//

//
// Global.CreateInt( string name, int access, int initial_value )
//
// Create a global integer 
//
prototype Global.CreateInt( string name, int access, int initial_value );

//
//  Global.CreateFloat( string name, int access, float initial_value )
//
// Create a global floating-point 
//
prototype Global.CreateFloat( string name, int access, float initial_value );

//
// Global.CreateBool( string name, int access, bool initial_value )
//
// Create a global boolean 
//
prototype Global.CreateBool( string name, int access, bool initial_value );

//
// Global.CreateHandle( string name, int access, hobject initial_value )
//
// Create a global handle 
//
prototype Global.CreateHandle( 
    string name, int access, hobject initial_value );

//
// Global.CreateString( string name, int access, string initial_value )
//
// Create a global string 
//
prototype Global.CreateString( string name, int access, string initial_value );

//
// Global.CreateList( string name, int access, list initial_value )
//
// Create a global list 
//
prototype Global.CreateList( string name, int access, list initial_value );

//
// Global.CreateSet( string name, int access, set initial_value )
//
// Create a global set 
//
prototype Global.CreateSet( string name, int access, set initial_value );

//
// prototype Global.Destroy( string name )
//
// Destroy function
//
prototype Global.Destroy( string name );

//
// Queries
//

//
// prototype bool Global.Exists( string name )
//
// Query global for existance
//
prototype bool Global.Exists( string name );

//
// prototype eGlobalType Global.Type( string name )
//
// Query global for type
//
prototype eGlobalType Global.Type( string name );

//
// Accessors
//

//
// int Global.Int( string name )
//
// Integer global accessor
//
prototype int Global.Int( string name );

//
// float Global.Float( string name )
//
// Floating-point global accessor
//
prototype float Global.Float( string name );

//
// bool Global.Bool( string name )
//
// Boolean global accessor
//
prototype bool Global.Bool( string name );

//
// hobject Global.Handle( string name )
//
// Handle global accessor
//
prototype hobject Global.Handle( string name );

//
// string Global.String( string name )
//
// String global accessor
//
prototype string Global.String( string name );

//
// list Global.List( string name )
//
// List global accessor
//
prototype list Global.List( string name );

//
// set Global.Set( string name )
//
// Set global accessor
//
prototype set Global.Set( string name );

//
// Settors
//

//
// Global.SetInt( string name, int value )
//
// Set the global integer
//
prototype Global.SetInt( string name, int value );

//
// Global.SetFloat( string name, float value )
//
// Set the global float
//
prototype Global.SetFloat( string name, float value );

//
// Global.SetBool( string name, bool value )
//
// Set the global bool
//
prototype Global.SetBool( string name, bool value );

//
// Global.SetHandle( string name, hobject value )
//
// Set the global handle
//
prototype Global.SetHandle( string name, hobject value );

//
// Global.SetString( string name, string value )
//
// Set the global string
//
prototype Global.SetString( string name, string value );

//
// Global.SetList( string name, list value )
//
// Set the global list
//
prototype Global.SetList( string name, list value );

//
// Global.SetSet( string name, set value )
//
// Set the global set
//
prototype Global.SetSet( string name, set value );

//
// Global.SetAccess(string name, int access)
//
// Set the access rights for the global
//
prototype Global.SetAccess(string name, int access);


#endif // FLUX_LIB

//
// (c) 2000 Particle Systems Ltd. All Rights Reserved
//
// iOptions.h
//
// Package API for I-War 2 options management
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iOptions);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "ioptions" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// iOptions.RegisterFloat
//
// Register a float option with the options screen
//
prototype iOptions.RegisterFloat( 
	string name,	
	string class_name,
	string property,
	float start_value,		
	float end_value,
	bool immediate_update );		

//
// iOptions.RegisterInt
//
// Register an integer option with the options screen
//
prototype iOptions.RegisterInt( 
	string name,	
	string class_name,
	string property,
	int start_value,		
	int end_value,
	bool immediate_update );		

//
// iOptions.RegisterBool
//
// Register a boolean option with the options screen
//
prototype iOptions.RegisterBool( 
	string name,		
	string class_name,	
	string property,
	bool immediate_update );	

//
// iOptions.RegisterString
//
// Register a string option with the options screen
//
prototype iOptions.RegisterString( 
	string name,		
	string class_name,	
	string property,
	string first_option,
	bool immediate_update );	

//
// iOptions.RegisterStringProperyOption
//
// We can't add a list of strings, so we have to add each possible
// value in a string property manually
//
prototype iOptions.RegisterStringPropertyOption( string name, string value );

//
// iOptions.Apply
//
// Go through the registered options and apply the changes made
//
prototype iOptions.Apply();	

//
// iOptions.Update
//
// Check that the options haven't changed
//
prototype iOptions.Update();

// 
// iOptions.UnregisterAll
//
// Unregister all the registered options
//
prototype iOptions.UnregisterAll();	

// 
// iOptions.CreateWindows( hwindow list_box )
//
// Once all the options are registered, we create the windows to display
// and control the option settings.
//
prototype iOptions.CreateWindows( hwindow list_box );	

//
// iOptions.OnSelect( hwindow list_box )
//
// When the list box entries get selected
//
prototype iOptions.OnSelect( hwindow list_box );

//
// iOptions.OnLeft( hwindow list_box )
//
// When the list box entries get a left command
//
prototype iOptions.OnLeft( hwindow list_box );

//
// iOptions.OnRight( hwindow list_box )
//
// When the list box entries get a right command
//
prototype iOptions.OnRight( hwindow list_box );

//
// list iOptions.CreateGraphicsDeviceOptionButtons()
//
// Create a list of parentless, list-box-ready buttons for the various
// supported graphics devices. 
//
prototype list iOptions.CreateGraphicsDeviceOptionButtons();

//
// int iOptions.GraphicsDeviceIndex()
//
// Get the index into the list of graphics devices of the selected device
//
prototype int iOptions.GraphicsDeviceIndex();

//
// iOptions.SetGraphicsDevice( int device_index, int resolution_index )
//
// Set a new graphics device and resolution from the given indices
//
prototype iOptions.SetGraphicsDevice( int device_index, int resolution_index );

//
// int iOptions.NumberOfResolutionOptions( int device_index )
//
// Get the number of resolution options
//
prototype int iOptions.NumberOfResolutionOptions( int device_index );

//
// list iOptions.CreateGraphicsResolutionOptionButtons( 
//		int device_index,
//		bool thin_buttons )
//
// Create a list of parentless, list-box-ready buttons for the various
// supported graphics resolution. Also pass in whether or not we want thin
// buttons (because of a scrollbar)
//
prototype list iOptions.CreateGraphicsResolutionOptionButtons( 
	int device_index,
	bool thin_buttons );

//
// int iOptions.GraphicsResolutionIndex()
//
// Get the index into the list of graphics resolutions of the selected device
//
prototype int iOptions.GraphicsResolutionIndex( int device_index );

//
// iOptions.RestoreDefaults()
//
// Restore defaults
//
prototype iOptions.RestoreDefaults();

//
// iOptions.DirectX8Available
//
// Determine if directx8 is a valid option 
//
prototype bool iOptions.DirectX8Available();

#endif // FLUX_LIB

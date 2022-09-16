//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Input.h
//
// API for the package 'Input'.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#include "FInput.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Input);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "input" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Dependencies ///////////////////////////////////////////////////////////////

// Exported functions /////////////////////////////////////////////////////////

//
// Input.BindKey( string function, string key )
//
// Bind the given key to a Pog function.
//
prototype Input.BindKey( string function, string key );

//
// Input.SuspendBindings
//
// Suspends key bindings
//
prototype Input.SuspendBindings();

//
// Input.ResumeBindings
//
// Resumes key bindings
//
prototype Input.ResumeBindings();

//
// Input.PurgeBindings()
//
// Purge the scriptable bindings
//
prototype Input.PurgeBindings();

//
// string Input.KeyCombinations( string function )
//
// Returns a neatly formatted string of key combinations for the given function.
//
prototype string Input.KeyCombinations( string function );

//
// int Input.NumInputSchemes()
//
// Get the number of input schemes available in the resource tree
//
prototype int Input.NumInputSchemes();

//
// string Input.NthInputSchemeName( int index )
//
// Get the name of the Nth input scheme 
//
prototype string Input.NthInputSchemeName( int index );

//
// int Input.CurrentInputScheme()
//
// Get the index of the current input scheme
//
prototype int Input.CurrentInputScheme();

//
// Input.SelectInputScheme( int index )
//
// Switch to the given input scheme
//
prototype Input.SelectInputScheme( int index );

#endif // FLUX_LIB

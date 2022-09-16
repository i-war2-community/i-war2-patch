//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// String.h
//
// API for the package String.
//
// Revision control information:
//
// $Header: /flux/packages/String.h 8     2/11/00 16:13 Tim $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(String);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "string" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// string Join( string left, string right )
//
// Concatenate two strings and return the result.
//
prototype string String.Join( string left, string right );

//
// string FromInt( int value )
//
// Returns a string containing the integer.
//
prototype string String.FromInt( int value );

//
// string FromFloat( float value )
//
// Returns a string containing the floating point value.
//
prototype string String.FromFloat( float value );

//
// int ToInt( string str_int )
//
// Returns the integer taken from the given string.
//
prototype int String.ToInt( string str_int );

//
// float ToFloat( string str_float )
//
// Returns the floating point value taken from the given string.
//
prototype float String.ToFloat( string str_float );

//
// string UpperCase( string str_in )
//
// Returns the upper case version of the given string
//
prototype string String.UpperCase( string str_int );

//
// string Left( string str_in, int n )
//
// Returns the left n characters of str_in,
// or the entire string if n is greater than the string's length
//
prototype string String.Left( string str_in, int n );


//
// string Right( string str_in, int n )
//
// Returns the right n characters of str_in,
// or the entire string if n is greater than the string's length
//
prototype string String.Right( string str_in, int n );


//
// string Mid( string str_in, int start, int n )
//
// Returns the middle n characters of str_in, starting at index first
//
prototype string String.Mid( string str_in, int first, int n );


//
// string TrimLeft( string str_in, int n )
//
// Return a string excluding the leftmost n characters
// of str_in.
//
prototype string String.TrimLeft( string str_in, int n );


//
// string TrimRight( string str_in, int n )
//
// Return a string excluding the rightmost n characters
// of str_in.
//
prototype string String.TrimRight( string str_in, int n );


//
// string FormatStrStr( string format_str, string param_1, string_param2 )
//
// Return a string formatted in the fprintf style :
// i.e. format_str contains text and exactly two %s format specifiers.
//
prototype string String.FormatStrStr( string format_str, string param_1, string param_2 );

//
// string FormatInt( string format_str, int param_1 )
//
// Return a string formatted in the fprintf style :
// i.e. format_str contains text and exactly one %d or %u format specifier.
//
prototype string String.FormatInt( string format_str, int param_1 );

//
// int Length( string in )
//
// Get the length
//
prototype int String.Length( string in );

#endif // FLUX_LIB

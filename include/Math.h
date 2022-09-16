//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Math.h
//
// API for the package Math.
//
// Revision control information:
//
// $Header: /flux/packages/Math.h 5     11/06/00 11:24 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Math);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "math" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

//
// float Math.Sqrt( float f )
//
// Square-root function, computes the square-root of x.
//
prototype float Math.Sqrt( float f );

//
// float Math.CubeRoot( float f )
//
// Cube root function, computes x^(1/3).
//
prototype float Math.CubeRoot( float f );

//
// float Math.Power( float f, float exponent )
//
// Power function, computes x^exponent.
//
prototype float Math.Power( float f, float exponent );

//
// float Math.Sin( float x )
//
// Sin function, computes the sine of x (in degrees).
//
prototype float Math.Sin( float x );

//
// float Math.Cos( float x )
//
// Cos function, computes the cosine of x (in degrees).
//
prototype float Math.Cos( float x );

//
// float Math.Tan( float x )
//
// Tan function, computes the tangent of x (in degrees).
//
prototype float Math.Tan( float x );

//
// float Math.Abs( float f )
//
// Absolute function, returns the absolute value of f.
//
prototype float Math.Abs( float f );

//
// float Math.Sign( float f )
//
// Signum function. Determine the sign of f.
//
prototype float Math.Sign( float f );

//
// float Math.Clamp( float f, float min, float max )
//
// Clamp function, Clamp f to a range.
//
prototype float Math.Clamp( float f, float min, float max );

//
// float Math.Random( float min, float max )
//
// Generates a random number in the range min to max
//
prototype float Math.Random( float min, float max );

//
// int Math.RandomInt( int min, int max )
//
// Generates a random number in [min,max]
//
prototype int Math.RandomInt( int min, int max );

#endif // FLUX_LIB

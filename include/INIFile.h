//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// inifile.h
//
// API for the package INIFile.
//
// Revision control information:
//
// $Header: /flux/packages/INIFile.h 5     11/06/00 11:24 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(INIFile);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "inifile" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// declare handle type for INIFile handles
handle hinifile : hobject;

//
// hinifile INIFile.Cast( hobject h )
//
// Cast function
//
prototype hinifile INIFile.Cast( hobject h );

//
// hinifile INIFile.Create( string filename )
//
// Create an INIFile object around the INI file.
//
prototype hinifile INIFile.Create( string filename );

//
// INIFile.Destroy( hinifile handle )
//
// Destroys an INIFile object
//
prototype INIFile.Destroy( hinifile h );

//
// String INIFile.String( hinifile handle, string section, string key,
//						  string default )
//
// Get the string value from the given INI file member.
//
prototype string INIFile.String( hinifile h,
								 string section, 
								 string key,
								 string defaultstring );

//
// String INIFile.NumberedString( hinifile handle, string section, string key,
//								  int number, string default )
//
// Get the string value from the given INI file member.
//
prototype string INIFile.NumberedString( hinifile h,
										 string section, 
										 string key,
										 int number,
										 string defaultstring );

//
// int INIFile.Int( hinifile handle, string section, string key, int default )
//
// Get the int value from the given INI file member.
//
prototype int INIFile.Int( hinifile h,
						   string section, 
						   string key,
						   int defaultint );

//
// int INIFile.NumberedInt( hinifile handle, string section, string key,
//							int number, int default )
//
// Get the int value from the given INI file member.
//
prototype int INIFile.NumberedInt( hinifile h,
								   string section, 
								   string key,
								   int number,
								   int defaultint );

//
// float INIFile.Float( hinifile handle, string section, string key,
//						float default )
//
// Get the float value from the given INI file member.
//
prototype float INIFile.Float( hinifile h,
							   string section, 
							   string key,
							   float defaultfloat );

//
// float INIFile.NumberedFloat( hinifile handle, string section, string key,
//								int number, float default )
//
// Get the float value from the given INI file member.
//
prototype float INIFile.NumberedFloat( hinifile h,
									   string section, 
									   string key,
									   int number,
									   float defaultfloat );

//
// float INIFile.VectorX( hinifile handle, string section, string key )
//
// Get the x component of the vector value from the given INI file member.
//
prototype float INIFile.VectorX( hinifile h,
							     string section, 
							     string key );

//
// float INIFile.VectorY( hinifile handle, string section, string key )
//
// Get the y component of the vector value from the given INI file member.
//
prototype float INIFile.VectorY( hinifile h,
							     string section, 
							     string key );

//
// float INIFile.VectorZ( hinifile handle, string section, string key )
//
// Get the z component of the vector value from the given INI file member.
//
prototype float INIFile.VectorZ( hinifile h,
							     string section, 
							     string key );

//
// float INIFile.NumberedVectorX( hinifile handle, string section, string key,
//								  int number )
//
// Get the x component of the vector value from the given INI file member.
//
prototype float INIFile.NumberedVectorX( hinifile h,
									     string section, 
									     string key,
									     int number );

//
// float INIFile.NumberedVectorY( hinifile handle, string section, string key,
//								  int number )
//
// Get the y component of the vector value from the given INI file member.
//
prototype float INIFile.NumberedVectorY( hinifile h,
									     string section, 
									     string key,
									     int number );

//
// float INIFile.NumberedVectorZ( hinifile handle, string section, string key,
//								  int number )
//
// Get the z component of the vector value from the given INI file member.
//
prototype float INIFile.NumberedVectorZ( hinifile h,
									     string section, 
									     string key,
									     int number );

//
// bool INIFile.Exists( hinifile handle, string section, string key )
//
// Tests whether or not a given section and key exists 
//
prototype bool INIFile.Exists( hinifile h,
							   string section,
							   string key );

//
// bool INIFile.NumberedExists( hinifile handle, string section, string key,
//								int number )
//
// Tests whether or not a given section and numbered key exists 
//
prototype bool INIFile.NumberedExists( hinifile h,
									   string section,
									   string key,
									   int number );

#endif // FLUX_LIB

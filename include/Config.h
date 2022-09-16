//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Config.h
//
// API for the package Config.
//
// Revision control information:
//
// $Header: /flux/packages/Config.h 9     12/04/01 14:52 Tim $
//

#include "Flux.h"

#if (FLUX_COMPILE)

FLUX_DECLARE_EXTENSION(Config);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "config" )
#endif // _MSC_VER >= 1000
#endif

#else

//
// float GetFloat( string filename, string section, string key )
//
// Get the float value from the given INI file member.
//
prototype float Config.GetFloat( string filename, 
								 string section, 
								 string key );

//
// float GetNumberedFloat( string filename, 
//						   string section, 
//						   string key,
//						   int number ) 
//
// Get the float value from the given INI file member.
//
prototype float Config.GetNumberedFloat( string filename, 
										 string section, 
										 string key,
										 int number );

//
// int GetInt( string filename, string section, string key )
//
// Get the int value from the given INI file member.
//
prototype int Config.GetInt( string filename, 
							 string section, 
							 string key );

//
// int GetNumberedInt( string filename, 
//					   string section, 
//					   string key,
//					   int number )
//
// Get the int value from the given INI file member.
//
prototype int Config.GetNumberedInt( string filename, 
									 string section, 
									 string key,
									 int number );

//
// bool GetBool( string filename, string section, string key )
//
// Get the bool value from the given INI file member.
//
prototype int Config.GetBool( string filename, 
							  string section, 
							  string key );

//
// int GetNumberedBool( string filename, 
//					    string section, 
//					    string key,
//					    int number )
//
// Get the bool value from the given INI file member.
//
prototype int Config.GetNumberedBool( string filename, 
									  string section, 
									  string key,
									  int number );

//
// string GetString( string filename, string section, string key )
//
// Get the string value from the given INI file member.
//
prototype string Config.GetString( string filename, 
								   string section, 
								   string key );

//
// string GetNumberedString( string filename, 
//							 string section, 
//							 string key,
//							 int number )
//
// Get the string value from the given INI file member.
//
prototype string Config.GetNumberedString( string filename, 
										   string section, 
										   string key,
										   int number );

//
// float GetVectorX( string filename, string section, string key )
//
// Get the x component of a vector value from the given INI file member.
//
prototype float Config.GetVectorX( string filename, 
								   string section, 
								   string key );

//
// float GetNumberedVectorX( string filename, 
//							 string section, 
//							 string key,
//							 int number )
//
// Get the x component of a vector value from the given INI file member.
//
prototype float Config.GetNumberedVectorX( string filename, 
										   string section, 
										   string key,
										   int number );

//
// float GetVectorY( string filename, string section, string key )
//
// Get the y component of a vector value from the given INI file member.
//
prototype float Config.GetVectorY( string filename, 
								   string section, 
								   string key );

//
// float GetNumberedVectorY( string filename, 
//							 string section, 
//							 string key,
//							 int number )
//
// Get the y component of a vector value from the given INI file member.
//
prototype float Config.GetNumberedVectorY( string filename, 
										   string section, 
										   string key,
										   int number );

//
// float GetVectorZ( string filename, string section, string key )
//
// Get the z component of a vector value from the given INI file member.
//
prototype float Config.GetVectorZ( string filename, 
								   string section, 
								   string key );

//
// float GetNumberedVectorZ( string filename, 
//							 string section, 
//							 string key,
//							 int number )
//
// Get the z component of a vector value from the given INI file member.
//
prototype float Config.GetNumberedVectorZ( string filename, 
										   string section, 
										   string key,
										   int number );

//
// void CreateFloat( string filename, string section, string key, float value )
//
// Create a new slot in the INI file and set the given value there. Fails if
// there is already such a value.
//
prototype Config.CreateFloat( string filename, 
							  string section, 
							  string key, 
							  float value );

//
// void CreateInt( string filename, string section, string key, int value )
//
// Create a new slot in the INI file and set the given value there. Fails if
// there is already such a value.
//
prototype Config.CreateInt( string filename, 
						    string section, 
							string key, 
							int value );

//
// void CreateBool( string filename, string section, string key, bool value )
//
// Create a new slot in the INI file and set the given value there. Fails if
// there is already such a value.
//
prototype Config.CreateBool( string filename, 
						     string section, 
							 string key, 
							 bool value );

//
// void CreateString( string filename, string section, string key, string value )
//
// Create a new slot in the INI file and set the given value there. Fails if
// there is already such a value.
//
prototype Config.CreateString( string filename, 
							   string section, 
							   string key, 
							   string value );

//
// void CreateVector( string filename, 
//					  string section, 
//					  string key, 
//					  float x,
//					  float y,
//                    float z )
//
// Create a new slot in the INI file and set the given value there. Fails if
// there is already such a value.
//
prototype Config.CreateVector( string filename, 
							   string section, 
							   string key, 
							   string value );

//
// SetFloat( string filename, string section, string key, float value )
//
// Set the given value to the given slot. Fails if the key does not exist 
// in that section of the file.
//
prototype Config.SetFloat( string filename, 
						   string section, 
						   string key, 
						   float value );

//
// SetInt( string filename, string section, string key, int value )
//
// Set the given value to the given slot. Fails if the key does not exist 
// in that section of the file.
//
prototype Config.SetInt( string filename, 
						 string section, 
						 string key, 
						 int value );

//
// SetBool( string filename, string section, string key, bool value )
//
// Set the given value to the given slot. Fails if the key does not exist 
// in that section of the file.
//
prototype Config.SetBool( string filename, 
						  string section, 
						  string key, 
						  bool value );

//
// SetString( string filename, string section, string key, string value )
//
// Set the given value to the given slot. Fails if the key does not exist 
// in that section of the file.
//
prototype Config.SetString( string filename, 
							string section, 
							string key, 
							string value );

//
// SetVector( string filename, 
//			  string section, 
//			  string key, 
//			  float x,
//			  float y,
//			  float z )
//
// Set the given value to the given slot. Fails if the key does not exist 
// in that section of the file.
//
prototype Config.SetVector( string filename, 
							string section, 
							string key, 
							float x,
							float y,
							float z );

//
// bool Exists( string filename, string section, string key )
//
// Tests whether or not a given section and key exists in the given file.
//
prototype bool Config.Exists( string filename, string section, string key );

//
// int CountNumber( string filename, string section, string key )
//
// How many entries are there for the given key?
//
prototype int Config.CountNumber( string filename, string section, string key );

#endif // FLUX_LIB

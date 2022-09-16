//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Object.h
//
// API for the package 'Object'.
//
// Revision control information:
//
// $Header: /flux/packages/Object.h 9     27/11/00 21:45 Will $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Object);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "Object" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Accessors for object properties ////////////////////////////////////////////

//
// float Object.FloatProperty( hobject o, string property )
//
// Retrieve the float property value for the object
//
prototype float Object.FloatProperty( hobject o, string property );

//
// int Object.IntProperty( hobject o, string property )
//
// Retrieve the integer property value for the object
//
prototype int Object.IntProperty( hobject o, string property );

//
// int Object.BoolProperty( hobject o, string property )
//
// Retrieve the bool property value for the object
//
prototype bool Object.BoolProperty( hobject o, string property );

//
// int Object.IDModulus( hobject o, int modulus );
// 
// Return the modulus of the object's id with the int supplied.
//
prototype int Object.IDModulus( hobject o, int modulus );


//
// hobject Object.HandleProperty( hobject o, string property )
//
// Retrieve the handle property value for the object
//
prototype hobject Object.HandleProperty( hobject o, string property );

//
// string Object.StringProperty( hobject o, string property )
//
// Retrieve the string property value for the object
//
prototype string Object.StringProperty( hobject o, string property );

//
// list Object.ListProperty( hobject o, string property )
//
// Retrieve the object property value for the object
prototype list Object.ListProperty( hobject o, string property );


//
// float Object.VectorPropertyX( hobject o, string property )
//
// Retrieve the x coordinate of the vector property value for the object
//
prototype float Object.VectorPropertyX( hobject o, string property );

//
// float Object.VectorPropertyY( hobject o, string property )
//
// Retrieve the y coordinate of the vector property value for the object
//
prototype float Object.VectorPropertyY( hobject o, string property );

//
// float Object.VectorPropertyZ( hobject o, string property )
//
// Retrieve the z coordinate of the vector property value for the object
//
prototype float Object.VectorPropertyZ( hobject o, string property );

// Settor for object properties ///////////////////////////////////////////////

//
// Object.SetFloatProperty( hobject o, string property, float value )
//
// Set the float property value for the object
//
prototype Object.SetFloatProperty( hobject o, string property,
								   float value );

//
// Object.SetIntProperty( hobject o, string property, int value )
//
// Set the int property value for the object
//
prototype Object.SetIntProperty( hobject o, string property,
								 int value );

//
// Object.SetBoolProperty( hobject o, string property, bool value )
//
// Set the Bool property value for the object
//
prototype Object.SetBoolProperty( hobject o, string property,
								  bool value );

//
// Object.SetHandleProperty( hobject o, string property, handle value )
//
// Set the handle property value for the object
//
prototype Object.SetHandleProperty( hobject o, string property,
								    hobject value );

//
// Object.SetStringProperty( hobject o, string property, string value )
//
// Set the string property value for the object
//
prototype Object.SetStringProperty( hobject o, string property,
								    string value );

//
// Object.SetListProperty( hobject o, string property, list value )
//
// Set the list property value for the object
//
prototype Object.SetListProperty( hobject o, string property, list value );


//
// Object.SetVectorProperty( hobject o, 
//							 string property, 
//							 float x, float y, float z )
//
// Set a vector property value for the object
//
prototype Object.SetVectorProperty( hobject o, 
									string property,
								    float x,
									float y,
									float z );

// Query existence ////////////////////////////////////////////////////////////

//
// bool Object.PropertyExists( hobject o, string property )
//
// Does the object implement this property?
//
prototype bool Object.PropertyExists( hobject o, string property );

// Add user properties /////////////////////////////////////////////////////

//
// bool Object.AddFloatProperty( hobject o, string property, float value )
//
// Attach float property to the sim, if it does not overwrite inbuilt
// properties
//
prototype bool Object.AddFloatProperty( hobject o, string property,
										float value );

//
// bool Object.AddIntProperty( hobject o, string property, int value )
//
// Attach int property to the sim, if it does not overwrite inbuilt
// properties
//
prototype bool Object.AddIntProperty( hobject o, string property,
									  int value );

//
// Object.AddBoolProperty( hobject o, string property, bool value )
//
// Add the Bool property value to the object
//
prototype Object.AddBoolProperty( hobject o, string property,
								  bool value );

//
// bool Object.AddHandleProperty( hobject o, string property, hobject value )
//
// Attach handle property to the sim, if it does not overwrite inbuilt
// properties
//
prototype bool Object.AddHandleProperty( hobject o, string property,
										 hobject value );

//
// bool Object.AddStringProperty( hobject o, string property, string value )
//
// Attach string property to the sim, if it does not overwrite inbuilt
// properties
//
prototype bool Object.AddStringProperty( hobject o, string property,
										 string value );

//
// bool Object.AddListProperty( hobject o, string property, list value )
//
// Attach list property to the sim
//
prototype bool Object.AddListProperty( hobject o, string property, list value );

//
// Object.AddVectorProperty( hobject o, 
//							 string property, 
//							 float x, float y, float z )
//
// Attach vector property to the sim, if it does not overwrite inbuilt
// properties
//
prototype Object.AddVectorProperty( hobject o, 
									string property,
								    float x,
									float y,
									float z );

// Remove user properties /////////////////////////////////////////////////////

//
// Object.RemoveProperty( hobject o, string property )
//
// Remove user property from object. Inbuilt properties cannot be removed
// using this method
//
prototype Object.RemoveProperty( hobject o, string property );

#endif // FLUX_LIB

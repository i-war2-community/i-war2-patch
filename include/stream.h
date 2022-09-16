//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// Stream.h
//
// API for the package FcSoundStreamingManager.
//
// Revision control information:
//
// $Header: /flux/packages/stream.h 4     9/04/01 12:03 Will $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(stream);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "stream" )
#endif // _MSC_VER >= 1000
#endif

#else

uses String;

//
// Streaming sound API
//

/**
 * Play a stream in a slot
 */
prototype Stream.Play( int slot, string url, bool fade, bool loop );

/**
 * Stop a stream in a slot
 */
prototype Stream.Stop( int slot, bool fade );

/**
 * Is the slot playing?
 *
 * @return TRUE if the slot is playing
 */
prototype bool Stream.IsPlaying( int slot );

/**
 * Which stream is playing in a slot?
 *
 * @return The URL of the stream in the given slot.
 */
prototype bool Stream.IsPlayingURL( int slot, string url );


#endif // FLUX_LIB

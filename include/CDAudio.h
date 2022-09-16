//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// CDAudio.h
//
// API for the package CDAudio.
//
// Revision control information:
//
// $Header: /flux/packages/CDAudio.h 4     12/06/00 10:55 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(CDAudio);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "cdaudio" )
#endif // _MSC_VER >= 1000
#endif

#else

//
// State
//

/**
 * Open (as in open file not open CD draw) the CD file system
 *
 * @return TRUE if there is a CD to play
 */
prototype bool CDAudio.Open();

/**
 * Determine if the CD is currently playing
 *
 * @return TRUE if the CD is playing
 */
prototype bool CDAudio.IsPlaying();

/**
 * Determine if there is a CD to play
 *
 * @return TRUE if there is a CD
 */
prototype bool CDAudio.IsCDAvailable();


//
// Playing
//

/**
 * Play the CD from the beginning, or continue play after a pause
 *
 * @see Pause, Play
 *
 * @return Status
 */
prototype CDAudio.Play();

/**
 * Play the given track.
 *
 * @param track The track to play
 */
prototype CDAudio.PlayTrack(int track);

/**
 * Play the CD from time start to end.
 *
 * @param start The start time (in seconds)
 * @param end   The end time (in seconds)
 */
prototype CDAudio.PlayStartEnd(float start_time, float end_time);

/**
 * Pause the CD. The CD can be restarted through Pause or Play
 */
prototype CDAudio.Pause();

/**
 * Stop playing the CD. If Play() is called subsequently then the CD will
 * start at the beginning.
 */
prototype CDAudio.Stop();

//
// Position
//

/**
 * The currently playing track. Returns S_Fail if no track is currently
 * playing.
 *
 * @return The track number
 */
prototype int CDAudio.CurrentTrack();

/**
 * The current position within the CD. This is the time from the
 * beginning of the disk. Returns 0 if the disk is not currently playing.
 *
 * @return The time into the disk
 *
 * @see CurrentTrackPosition
 */
prototype float CDAudio.CurrentPosition();

/**
 * The time into the currently playing track.
 *
 * @return The time into the current track
 *
 * @see CurrentPosition, TrackStart, TrackEnd, TrackLength
 */
prototype float CDAudio.CurrentTrackPosition();

//
// Volume
//

/**
 * Set the current volume for CD output. Volume
 * is defined in the range [0..1]
 *
 * @param left The left volume
 * @param right The right volume
 */
prototype CDAudio.SetVolume( float left,  float right);

//
// Disk information
// 

/**
 * Returns the number of tracks on the CD.
 *
 * @return The number of tracks 
 */
prototype int CDAudio.NumberOfTracks();

/**
 * Return the length (in seconds) of the disk.
 *
 * @return Length of the disk (in seconds). 
 */
prototype float CDAudio.DiskLength();

//
// Track information
//

/**
 * Return the length (in seconds) of the given track.
 *
 * @param track  The track to query
 *
 * @return The lenth of the track (in seconds)
 *
 * @return status
 */
prototype float CDAudio.TrackLength(int track);

/**
 * The time at the start of the given track.
 *
 * @param track The track to query
 *
 * @return  The start time of the track
 *
 * @see TrackLength, TrackEnd
 */
prototype float CDAudio.TrackStart(int track);

/**
 * The time at the start of the given track.
 *
 * @param track The track to query
 *
 * @return The end time of the track
 *
 *
 * @see TrackLength, TrackStart
 */
prototype float CDAudio.TrackEnd(int track);

#endif // FLUX_LIB

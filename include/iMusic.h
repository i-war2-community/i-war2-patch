//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iMusic.h
//
// Compiler-generated export header for package "iMusic"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iMusic.h 4     11/04/01 20:10 Will $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

//
// Musical suite
//
enum eMusicSuite
{
	MS_Down,
	MS_Corporate,
	MS_AlienThreat,

	eMusicSuiteCount
};

//
// Musical mood 
//
enum eMusicMood
{
	MM_Theme,
	MM_Ambient,
	MM_Discovery,
	MM_Tension,
	MM_Action,

	eMusicMoodCount
};

//
// Musical events
//
enum eMusicEvent
{
	ME_ShortCymbal,
	ME_LongCymbal,
	ME_SoftTimpani,
	ME_LoudTimpani,

	eMusicEventCount
};

//
// Ambient environments - these provide background sounds
// 
enum eAmbientEnvironment
{
	// Normal deep space environment
	AE_DeepSpace,

	// Effrit environment
	AE_Effrit,

	// Aliens environment
	AE_Aliens,

	eAmbientEnvironmentCount
};	

// Local types ////////////////////////////////////////////////////////////////

// Forward declarations
prototype iMusic.SetSuite( eMusicSuite suite );
prototype iMusic.SetMood( eMusicMood mood );

// Play a specific piece of music - if iMusic is active this may be overridden
// by the context-sensitive music
prototype iMusic.Play( string track, bool crossfade, bool loop );

// Play a specific event
prototype iMusic.PlayEvent( eMusicEvent event );

// Suspend iMusic's automatic music queueing
prototype iMusic.Pause();

// Resume iMusic's automatic music queueing
prototype iMusic.Resume();

// Tell iMusic to add in environmental effacts
prototype iMusic.SetAmbientEnvironment( eAmbientEnvironment ae );
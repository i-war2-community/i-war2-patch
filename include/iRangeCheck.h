//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iRangeCheck.h
//
// Compiler-generated export header for package "iRangeCheck"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iRangeCheck.h 10    3/05/01 9:49a Martyn $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype task iRangeCheck.MonitorRange();

prototype iRangeCheck.AddTrafficException( hmapentity location );

prototype iRangeCheck.AddTrafficExceptionsInArea( hmapentity location, float radius );

prototype iRangeCheck.RemoveTrafficException( hmapentity location );

prototype iRangeCheck.RemoveTrafficExceptionsInArea( hmapentity location, float radius );

prototype iRangeCheck.PurgeTrafficException();

prototype iRangeCheck.AddOutOfSystemTrafficException ( hmapentity location );

prototype iRangeCheck.RemoveOutOfSystemTrafficException ( hmapentity location );

prototype iRangeCheck.PurgeOutOfSystemTrafficExceptions ();

// EOF /////////////////////////////////////////////////////////////////////////


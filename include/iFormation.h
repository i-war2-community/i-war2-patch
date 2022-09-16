//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iFormation.h
//
// Compiler-generated export header for package "iFormation"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iFormation.h 12    7/03/00 9:57a Martyn $
//

// Dependencies ////////////////////////////////////////////////////////////////

uses Group;

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype iFormation.V( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Wedge( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.LineAbreast( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.LineAhead( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Parade( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.SkirmishLine( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Cross( hgroup ship_list, float offset, bool first_time );

prototype iFormation.Loose( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Impi( hgroup ship_list, float offset, bool first_time );

prototype iFormation.Outrider( hgroup ship_list, float offset, bool first_time );

prototype iFormation.Goose( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.LineAstern( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Box( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Claw( hgroup ship_list, float offset, bool first_time );

prototype iFormation.Wall( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.RandomRectangle( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.RandomSphere( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.Stack( hgroup group, float spacing_offset, bool first_time );

prototype iFormation.LockGroupsInFormation ( hgroup lead_group, hgroup secondary_group, float x, float y, float z, bool first_time );

prototype iFormation.ApplyRandomRotation ( hgroup group_to_apply_to );

prototype iFormation.Jiggle( hgroup formation_group, float rand_distance, float rand_angle );

// EOF /////////////////////////////////////////////////////////////////////////


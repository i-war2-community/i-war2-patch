//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iEscort.h
//
// Compiler-generated export header for package "iEscort"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iEscort.h 4     13/06/00 12:13p Martyn $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype iEscort.V( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Wedge( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.LineAbreast( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.LineAhead( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Parade( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.SkirmishLine( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Cross( hgroup ship_list, float offset, float radius, bool first_time );

prototype iEscort.Loose( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Impi( hgroup ship_list, float offset, float radius, bool first_time );

prototype iEscort.Outrider( hgroup ship_list, float offset, float radius, bool first_time );

prototype iEscort.Goose( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.LineAstern( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Box( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Claw( hgroup ship_list, float offset, float radius, bool first_time );

prototype iEscort.Wall( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.RandomRectangle( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.RandomSphere( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.Stack( hgroup group, float spacing_offset, float radius, bool first_time );

prototype iEscort.LockGroupsInFormation( hgroup lead_group, hobject secondary_group, float x, float y, float z, float radius, bool first_time );

prototype iEscort.InFormationImpi ( hgroup ship_list, hobject convoy, int ship_no, float x_offset, float y_offset, float z_offset, float spacing, float radius, bool first_time );

prototype iEscort.InFormationV ( hgroup ship_list, hobject convoy, int ship_no, float x_offset, float y_offset, float z_offset, float spacing, float radius, bool first_time );

prototype iEscort.InFormationGoose ( hgroup ship_list, hobject convoy, int ship_no, float x_offset, float y_offset, float z_offset, float spacing, float radius, bool first_time );

prototype iEscort.InFormationClaw ( hgroup ship_list, hobject convoy, int ship_no, float x_offset, float y_offset, float z_offset, float offset, float radius, bool first_time );

prototype iEscort.InFormationSkirmishLine ( hgroup ship_list, hobject convoy, int ship_no, float x_offset, float y_offset, float z_offset, float spacing_offset, float radius, bool first_time );

// EOF /////////////////////////////////////////////////////////////////////////


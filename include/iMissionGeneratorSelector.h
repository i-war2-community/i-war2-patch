//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iJafsScript.h
//
// Compiler-generated export header for package "iJafsScript"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iMissionGeneratorSelector.h 3     12/06/99 5:18p Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

enum IeMissionStatus
{
	MS_NotAvailable = 4,
	MS_Available = 0,
	MS_TeaserSent = 1,
	MS_InProgress = 2,
	MS_Completed = 3
};

// Functions ///////////////////////////////////////////////////////////////////

prototype hinifile ini_for_mission( hinifile list_of_missions_ini, string mission_act, int mission );

prototype start_mission( hinifile mission_ini, string current_mission );

prototype send_teaser( hinifile mission_ini );

prototype Select();

prototype test( );

// EOF /////////////////////////////////////////////////////////////////////////


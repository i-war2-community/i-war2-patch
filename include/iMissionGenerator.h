//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iMissionGenerator.h
//
// Compiler-generated export header for package "iMissionGenerator"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iMissionGenerator.h 9     10/05/01 16:44 Richard $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////


enum eGMCommType
{
	COM_None,
	COM_Jafs,		//A statement from Jaffs
	COM_Smith,
	COM_Clay,
	COM_EMail,		//An email from the relevant patron
	COM_Patron,		//A face-to-face encounter with the patron
	COM_Owner
};


// Functions ///////////////////////////////////////////////////////////////////

prototype iMissionGenerator.testPiracyRating( float value );

prototype iMissionGenerator.testGlobalInt( string global_name, int value );

prototype iMissionGenerator.testGlobalBool( string global_name, bool value );

prototype iMissionGenerator.testEmail( string reference );

prototype iMissionGenerator.OwnerSetEscortFaction( htask mission_task, string faction_name);

prototype iMissionGenerator.ExclusiveTrades( htask mission_task, bool exclusive );

prototype iMissionGenerator.testFactionRating( string faction_name, float value );

prototype iMissionGenerator.CargoToGet( htask mission_task, int cargo_enum, int cargo_quantity );

prototype iMissionGenerator.CargoToGetCategory( htask mission_task, int cargo_enum, int cargo_quantity );

prototype iMissionGenerator.CargoReward( htask mission_task, int cargo_enum, int cargo_quantity );

prototype iMissionGenerator.PersonalDelivery( htask mission_task, bool value );

prototype htask iMissionGenerator.NewMission( string mission_name );

prototype iMissionGenerator.NumberOfRepeats( htask mission_task, int value );

prototype iMissionGenerator.PatronDetails( htask mission_task, string ship_type, string function, string ship_name, string character_name, string pilot_type, string faction );

prototype iMissionGenerator.PatronName( htask mission_task, string name);

prototype iMissionGenerator.PatronLocation( htask mission_task, int base_type, string star_system, string location_name );

prototype iMissionGenerator.PatronEscortDetails( htask mission_task, string ship_type, string function, string ship_name, string pilot_type, int quantity );

prototype iMissionGenerator.OwnerDetails( htask mission_task, int ship_type, string function, string ship_name, string character_name, string pilot_type, string faction );

prototype iMissionGenerator.OwnerLocation( htask mission_task, int base_type, string star_system, string location_name );

prototype iMissionGenerator.OwnerEscortDetails( htask mission_task, int ship_type, string function, string ship_name, string pilot_type, int quantity );

prototype iMissionGenerator.SetBriefing( htask mission_task, string reference1, string reference2, int comm_enum );

prototype iMissionGenerator.SetPrompt( htask mission_task, string reference1, string reference2, int comm_enum );

prototype iMissionGenerator.SetVerification( htask mission_task, string reference1, string reference2, int comm_enum );

prototype iMissionGenerator.SetRepeatMsg( htask mission_task, string reference1, string reference2, int comm_enum );

prototype iMissionGenerator.SetConclusion( htask mission_task, string reference1, string reference2, int comm_enum );

prototype iMissionGenerator.FailIfPatronDead( htask mission_task );

prototype iMissionGenerator.FailIfOwnerDead( htask mission_task );

prototype iMissionGenerator.FailIfGlobalBool( htask mission_task, string variable_name, bool value );

prototype iMissionGenerator.FailPrecludes( htask mission_task, int mission_enum );

prototype iMissionGenerator.SuccessFactionModifier( htask mission_task, hfaction faction_handle, float modifier );

prototype iMissionGenerator.SuccessBool( htask mission_task, string bool_name, bool value );

prototype iMissionGenerator.SuccessAddMission( htask mission_task, int mission_enum );

prototype iMissionGenerator.Activate( htask mission_task );

prototype iMissionGenerator.ObjectiveStub( htask mission_task, string stub);

prototype task iMissionGenerator.BaseMain();

prototype iMissionGenerator.FlushGMs(int param);

// EOF /////////////////////////////////////////////////////////////////////////


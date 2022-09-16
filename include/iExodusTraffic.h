//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iExodusTraffic.h
//
// Compiler-generated export header for package "iExodusTraffic"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iExodusTraffic.h 1     7/09/00 11:36 Alex $
//

// Dependencies ////////////////////////////////////////////////////////////////

// NOTE! the dialogue used in this mission is loaded by the iActThree package from the iAct3Master.csv, not by iExodusTraffic package itself.


// Enumerated types ////////////////////////////////////////////////////////////

enum eStationSize
{
	Station_Small	= 999,		// Small size  - 3 slots
	Station_Medium	= 5000,		// Medium size - 8
	Station_Big		= 10000		// The maximum station size used. 12 slots
};

enum eRetreatType
{
	Retreat_Armed,
	Retreat_Civilian,
	Retreat_Mining,
	Retreat_Pillager,
	Retreat_Police,
	Retreat_Tanker,
	Retreat_Trade,
	Retreat_Stranded
};

// Function Prototypes ////////////////////////////////////////////////////////


// get_interstellar_l_point_in ( string system )
//
// Finds the interstellar l-point in a system
// This is an ugly bug kludge and won't work outside gagarin!

prototype hmapentity iExodusTraffic.GetInterstellarLPointIn ( string system );

//
// set CreateMagicCubeRelativeTo(hisim center, float x, float y, float z)
//
// builds the magic cube: (locations of refugee fleet in fomalhaut)
//
// being a set of waypoints arranged in a 3d grid (5x5x5) in space
// each distant from it's nearest neighbors by 750km
//
// as the player approaches each waypoint, refugee ships will be created there.
//
// helper function for Event3_40_PreparingTheDefences
prototype set iExodusTraffic.CreateMagicCubeRelativeTo(hisim center, float x, float y, float z);

// create fomalhaut refugees
//
// Create a stack of refugees in the fomalhaut system

prototype hgroup iExodusTraffic.CreateFomalhautRefugees(hsim waypoint);

// main exported function
// deals with traffic fleeing in most systems, and special traffic in fomalhaut
prototype task iExodusTraffic.ExodusTrafficGenerator();

prototype iExodusTraffic.DisableAllTrafficInSystem(string system);

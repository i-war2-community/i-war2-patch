//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iGMTemplates.h
//
// Compiler-generated export header for package "iGMTemplates"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iGMTemplates.h 2     10/05/01 16:44 Richard $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

enum eGMSet
{													//					-mission class			mission	
	//GM_ZebraBurgers,	// These first two ...
	//GM_GiraffeMission,	// ... are only here for the template mission. 

	/// Act one jobbies ...

	GM_11_FistfulOfNanites = 1,	//steal mass nanites						-Stepson				hoffa gm06
	GM_01_NeedOre,		// some miners need ore							-Hoffa Wake				hoffa gm01
	GM_03_Gardener,		// Stepson reputation builder / soil collector	-Stepson				hoffa gm03
	GM_02_CounterfeitGoods,	// Jafs mate is in a  pickle				-Hoffa Wake				hoffa gm02
	GM_14_Gunrobber,		//steal guns for the stepsons				-stepson				hoffa gm09
	GM_13_MedicalSupplies,	//steal medical supplies for the league		-hoffas wake			hoffa gm08
	GM_10_RareAnimalChef,	//steal animals to make new dishes			-Hoffas Wake			
	GM_16_TheFreak,		//wants data.									-Hoffa's wake			hoffa gm04
	GM_12_LibraryFine,	//steal a mass execs books						-stepson				hoffa gm07
	GM_08_SimplePiracy,	//simple hoffa's wake piracy					-Hoffa Wake / Simple Piracy		Stepson gm03
	GM_20_StationParts,		//steal station parts for teh league		-Hoffa's wake			Hoffa gm13
	GM_18_Goldminers,		// steal equipment for a secret gold mine	-hoffa's wake			hoffa gm12
	GM_06_AcidBurn,		//miners injuries								-Stepson				Stepson gm01
	GM_07_ThePayoff,		//beat up corrupt cops						-Stepson lead-on		Stepsom gm02
	
	
	/// Act two jobbies ........
	
	GM_04_OmanExoticMetals,	//steal stuff for the oman					-Oman					oman gm01
	GM_05_OmanPowerPlant,	//the oman powerplant is breaking down		-Oman					oman gm02
	GM_23_OmanRaider,	//the oman send you out to rob things			-Oman					oman gm03
	GM_24_OmanPayback,	// steal things from NOMEX as payback			-Oman					oman gm04
	GM_25_OmanDisease,	//steal a Maas vaccine for the Oman				-OMan					oman gm05
	GM_26_OmanWeaponParts,	// supply parts to the oman factory			-Oman					oman gm06
	GM_27_OmanAntiPropaganda, //oman want to burn corporarte propaganda	-oman					oman gm07
	GM_28_OmanMalfunction,	// the oman's airconditioning breaks		-Oman					oman gm08
	GM_29_Omantechnology,	// steal other electronics for them			-Oman					oman gm09
	GM_19_BigJacksJewels,	//steal some jewels of miners for big jack	-hoffa's wake			hoffa gm11
	GM_09_PrisonData,	//Simple piracy - steal data from cops			-Hoffas wake / piracy	
	GM_15_TheSurvey,	//steal the results of the systems survey		-hoffa's wake			hoffa gm10
	GM_21_CrookedCops,		//cops peddling goods on blackmarket		-Hoffa's Wake			Hoffa gm14
	GM_22_MaraudersDealing, 	//two marauder ships selling			-hoffa's wake			hoffa gm15
	GM_17_GeriatricCyborgs,	//steal cybernetics for old borgs			-hoffa's wake			hoffa gm05
	GM_30_OmanCelebration,	// the oman have a big fast and feast		-Oman					oman gm10
	GM_31_MCAExcavations,	// the MCA want to dig bunkers				-MCA					MCA gm02
	GM_32_MCATerraforming,	// the mca want more growing space			-MCA					MCA gm03
	GM_33_MCAPlague,	//	The mca are hit by an engineered plague		-MCA					MCA gm04
	GM_34_MCAArmy,		// teh mca want to build up their army			-MCA					MCA gm05
	GM_35_MCASafetyDrive // teh mca need more ship saftey stuff			-MCA					MCA gm01
} ;


prototype bool iGMTemplates.InstantiateMission( int mission_enum );

prototype iGMTemplates.TestMissionGenerator();

// EOF /////////////////////////////////////////////////////////////////////////


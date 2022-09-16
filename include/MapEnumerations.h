//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// MapEnumerations.h
//
// C++ and Pog shared enumerations for the game geography. 
//
// Revision control information:
//
// $Header: /iwar2/Src/MapEnumerations.h 10    4/09/00 15:24 Brett $
//

// Include once only
#ifndef MAP_ENUMERATIONS_HDR
#define MAP_ENUMERATIONS_HDR

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

// Dependencies ///////////////////////////////////////////////////////////////

// Master include file
#include "Flux.h"

// Global dependencies

// Preprocessor definitions ///////////////////////////////////////////////////

// Class/Global function declarations /////////////////////////////////////////

//
// Enumerated types
//

// The types of allegiance
enum IeAllegiance
{
	A_Neutral,
	A_Independent,
	A_Exile,
	A_Military,
	A_Underworld,
	A_Government,
	A_Transient,
	A_Society,
    A_Invalid,
	A_Stepson,
	A_Kong,
	A_MAASCorporation,
	A_CarvaCartel,
	A_Junkers,
	A_Police,
	A_NOMEXCorporation,
	A_NSOLaplace,
	A_Marauders,
	A_Angels,
	A_TheOman,
	A_MCA,
	A_Player,
	A_League,
	A_TrimannShipping,
	A_RhondusGasMining,
	A_AshantiInvestment,
	A_CrosspointMinerals,
	A_HeliosMining,
	A_JardinTerraforming ,
	A_ChonBodifule,
	A_OrionProducts,
	A_VonShellingIndustries,
	A_MegalithCorp,
	A_HibatshPMC,
	A_DesterCorporation,
	A_WhindWeaponsSystems,
	A_AdvancedSecurityCorp,
	A_Network54,
	A_Infonet,
	A_StellarNet,
	A_WordsworthTechnology ,
	A_NetcomSA,
	A_CoventryEngineeringResearch,
	A_NINEXWetware,
	A_UniversalConsumerProducts,
	A_HighlifeProducts,
	A_LowOrbitRecovery,
	A_KIMOShipping,
	A_DatagonTechnologies,
	A_MicoriaCommunications,
	A_LOMAXEngines,
	A_LOMAXTechnologies,
	A_NumikoProducts,
	A_TheThirdWay,
	A_Aliens,
	eIeAllegianceCount
};

// The type of a habitat
enum IeHabitatType
{
	HT_Invalid = 0,
	HT_Disused = 1,
	HT_WaterMine = 2,
	HT_OrganicsMine = 3,
	HT_InorganicsMine = 4,
	HT_BiomassMine = 5,
	HT_CommonMetalsMine = 6,
	HT_RareMetalsMine = 7,
	HT_ExoticMetalsMine = 8,
	HT_RadioactivesMine = 9,
	HT_FusionableGasesMine = 10,
	HT_WaterProcessingPlant = 11,
	HT_OrganicsProcessingPlant = 12,
	HT_InorganicsProcessingPlant = 13,
	HT_BiomassProcessingPlant = 14,
	HT_CommonMetalsProcessingPlant = 15,
	HT_RareMetalsProcessingPlant = 16,
	HT_ExoticMetalsProcessingPlant = 17,
	HT_RadioactivesProcessingPlant = 18,
	HT_FusionableGasesProcessingPlant = 19,
	HT_NeutroniumProcessingPlant = 20,
	HT_Shipyard = 21,
	HT_HeavyManufacturingPlant = 22,
	HT_BiologicalManufacturingPlant = 23,
	HT_WetwareManufacturingPlant = 24,
	HT_HiTechManufacturingPlant = 25,
	HT_ElectronicsManufacturingPlant = 26,
	HT_WeaponsManufacturingPlant = 27,
	HT_PharmaceuticalsManufacturingPlant = 28,
	HT_PlasticsManufacturingPlant = 29,
	HT_FusionReactorsManufacturingPlant = 30,
	HT_EnergyCellsManufacturingPlant = 31,
	HT_StationFabricationManufacturingPlant = 32,
	HT_LuxuriesManufacturingPlant = 33,
	HT_TerraformingStation = 34,
	HT_BioBomber = 35,
	HT_Waystation = 36,
	HT_RepairStation = 37,
	HT_OreTransferStation = 38,
	HT_ResearchAndDevelopmentLab = 39,
	HT_ResearchStation = 40,
	HT_MedicalResearchCentre = 41,
	HT_BlackBudgetResearchStation = 42,
	HT_SensitiveResearchStation = 43,
	HT_FinancialCentre = 44,
	HT_RegionalHQ = 45,
	HT_Villa = 46,
	HT_CentralHQ = 47,
	HT_AgriculturalSettlement = 48,
	HT_Resort = 49,
	HT_LuxuryResort = 50,
	HT_MedicalFacility = 51,
	HT_LeisureComplex = 52,
	HT_NeutroniumMine = 53,
	HT_SecurityStation = 54,
	HT_Fortress = 55,
	HT_HighSecurityPrison = 56,
	HT_LowSecurityPrison = 57,
	HT_HardLabourPrison = 58,
	HT_Homestead = 59,
	HT_MercenaryBase = 60,
	HT_TradingPost = 61,
	HT_Warehousing = 62,
	HT_BlackMarket = 63,
	HT_DryDock = 64,
	HT_DockingStation = 65,
	HT_EntertainmentStation = 66,
	HT_Settlement = 67,
	HT_PoliceBase = 68,
	HT_PoliceOutpost = 69,
	HT_SystemDefenceStation = 70,
	HT_SystemDefenceDock = 71,
	HT_NavalAcademy = 72,
	HT_NavalTrainingBase = 73,
	HT_Outpost = 74,
	HT_Base = 75,
	HT_RepairDock = 76,
	HT_MarineBarracks = 78,
	HT_PerimeterDefences = 79,
	HT_NavalTestingSite = 80,
	HT_NavalResearchFacility = 81,
	HT_JumpFortress = 82,
	HT_SupplyDepot = 84,
	HT_DefenceStation = 85,
	HT_STCPost = 86,
	HT_STCHQ = 87,
	HT_FTLArray = 88,
	HT_FTLInterchange = 89,
	HT_STLTranceiver = 90,
	HT_STLInterchange = 91,
	HT_PlanetaryAdministration = 92,
	HT_SystemAdministration = 93,
	HT_ClusterAdministration = 94,
	HT_RegionalDepartment = 95,
	HT_University = 96,
	HT_Ark = 97,
	HT_Garden = 98,
	HT_Asylum = 99,
	HT_Hospice = 100,
	HT_PirateBase = 101,
	HT_PirateCove = 102,
	HT_PirateOutpost = 103,
	HT_GangsterHideout = 104,
	HT_ViceDen = 105,
	HT_Casino = 106,
	HT_CollectiveSettlement = 107,
	HT_Hermitage = 108,
	HT_ReligiousCentre = 109,
	HT_MadScientistLab = 110,
	HT_Hideout = 111,
	HT_Habitat = 112,
	HT_Junkyard = 113,
	HT_BoxTown = 114,
	HT_AsteroidSculptures = 115,
	HT_PlayerBase = 116,
	HT_GunstarArray = 117,
	HT_JumpAccelerator = 118,
	HT_HoffersGap = 119,
	HT_HoffersHeel = 120,
	HT_Beanstalk = 121,
	HT_TransferStation = 122

};	
	
// Types of celestial body
enum IeBodyType
{
	BT_SystemCentre = 0,
	BT_Star = 1,
	BT_Planet = 2,
	BT_Moon = 3,
	BT_GasGiant = 4,
	BT_Asteroid = 5,
	BT_DeadGasGiantCore = 6,
	BT_AsteroidBelt = 7,
	BT_Nebula = 8,
	BT_Invalid = 9
};

// Resource quantities for celestial bodies
enum IeResourceQuantity
{
	RQ_None = 0,
	RQ_Trace = 1,
	RQ_Rare = 2,
	RQ_Uncommon = 3,
	RQ_Common = 4,
	RQ_Rich = 5,
	RQ_Abundant = 6
};

// EOF ////////////////////////////////////////////////////////////////////////

#endif // MAP_ENUMERATIONS_HDR

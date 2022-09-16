//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// IAI.h
//
// API for the package AI.
//
// Revision control information:
//
// $Header:
//

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iAI);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iai" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Dependencies
uses iShip, iDockport, iLagrangePoint;

//
// iAI.GiveApproachOrder( hobject us, hobject target )
//
// Gives the ship or group an order to approach the target ship or group. 
// We attempt to get within a factor of our radii with group-group 
// orders pairing off.
//
prototype iAI.GiveApproachOrder( hobject us, hobject target ); 

//
// iAI.GiveApproachOrderNoDropOff( hobject us, hobject target )
//
// Gives the ship or group an order to approach the target ship or group. 
// We attempt to get within a factor of our radii with group-group 
// orders pairing off.  This order (in a similar fashion to formate) will
// never be removed.
//
prototype iAI.GiveApproachOrderNoDropOff( hobject us, hobject target ); 

//
// iAI.GiveApproachOrderAdvanced( hobject us, hobject target,
//								  float radius, bool allow_avoidance )
//
// An advanced version of the approach order.  Allows specification of an
// approach radius, completion radius and whether or not to use avoidance
//
prototype iAI.GiveApproachOrderAdvanced( hobject us, hobject target,
					float radius, float completion_radius,
					bool allow_avoidance );

//
// iAI.RemoveOrder( hobject ship_or_group )
//
// Removes the current order from the AI pilot of a ship or group of ships
//
prototype iAI.RemoveOrder( hobject ship_or_group );

//
// iAI.PurgeOrders( hobject ship_or_group )
//
// Removes all orders from the AI pilot of a ship or group of ships
//
prototype iAI.PurgeOrders( hobject ship_or_group );

//
// iAI.GiveFormateOrder( hobject ship, hobject target, float x, float y, float z )
//
// Gives a ship or group a formate order with another ship or group.
// The x, y, z positions represent local offsets with group-group orders pairing
// off piecewise.
//
prototype iAI.GiveFormateOrder( hobject us, hobject target, float x, float y, float z );

//
// iAI.GiveAttackOrder( hobject us, hobject target )
//
// Gives the ship or group an attack order against the given target sim or group.
//
prototype iAI.GiveAttackOrder( hobject us, hobject target );

//
// The various attack styles - NOTE Keep this up to date with Functions.cpp
//
enum eAttackStyle
{
	AS_TailBite,
	AS_Strafe,
	AS_GunStation,
	AS_FacingAttack,
	AS_MissileBoat
};

//
// iAI.GiveSpecificAttackOrder( hobject us, hobject target, enum attack_style )
//
// Gives an attack order to a ship or group of ships using the given attack style
//
prototype iAI.GiveSpecificAttackOrder( hobject us, hobject target, int attack_style );

//
// iAI.GiveFleeOrder( hobject us, hisim aggressor )
//
// Gives the ship or group a flee order from the given aggressor.
//
prototype iAI.GiveFleeOrder( hobject us, hisim target );

//
// iAI.GiveGenericAttackOrder( hobject us )
//
// Gives the ship a generic attack order (will attack closest vessels)
//
prototype iAI.GiveGenericAttackOrder( hobject us );

//
// iAI.GiveDockOrder( hobject ship, hobject target )
//
// Gives the ship or group a dock order with another ship or group.
//
prototype iAI.GiveDockOrder( hobject us, hobject target );

//
// iAI.GiveReservedDockOrder( hobject us, hobject targ )
//
// Gives a standard dock order with immediate reserving of ports
//
prototype iAI.GiveReservedDockOrder( hobject us, hobject target );

//
// iAI.GiveEscortOrder( hobject ship, hobject target, float x, float y,
// float z, float radius )
//
// Gives the ship an escort order with the target ship or group, guarding the
// given radius.
//
prototype iAI.GiveEscortOrder( hobject ship, hobject target, 
							   float x, float y, float z, float radius );

//
// iAI.GiveDockOrderWithDockport( hdockport dockport1, hdockport dockport2 )
//
// Gives the ship a dock order with a specific dockport.
//
prototype iAI.GiveDockOrderWithDockport( hdockport dockport1, 
										 hdockport dockport2 );

//
// bool iAI.HasOrder( hship ship )
//
// Returns TRUE if we have an order.
//
prototype bool iAI.HasOrder( hship ship );

//
// bool iAI.IsOrderComplete( hobject ship_or_group )
//
// Returns TRUE if the order is complete (no orders are on the stack) or
// the top-most agent is complete.  Can now be used with groups
//
prototype bool iAI.IsOrderComplete( hobject ship_or_group );

//
// Enumeration for the type of order
//
enum eOrderType
{
	OT_None,
	OT_Attack,
	OT_Formate,
	OT_Approach,
	OT_Dock,
	OT_Flee,
	OT_Escort
};

//
// eOrderType iAI.CurrentOrderType( hship ship )
//
// Returns the current order type
//
prototype eOrderType iAI.CurrentOrderType( hship ship );

//
// hisim iAI.CurrentOrderTarget( hship ship )
//
// Returns the current order target
//
prototype hisim iAI.CurrentOrderTarget( hship ship );

//
// string iAI.CurrentOrderName( hship ship )
//
// Returns the current order name
//
prototype string iAI.CurrentOrderName( hship ship );

//
// bool iAI.ForceLPRoute( hship ship, hlagrangepoint start, hlagrangepoint end )
//
// Forces the given ship (if its AI is currently active) to head through the given LP
// to arrive at the end LP.
//
prototype bool iAI.ForceLPRoute( hship ship, hlagrangepoint start_lp, hlagrangepoint end_lp );

//
// iAI.ClearAutopilot
//
// Clears any player autopilot
//
prototype iAI.ClearAutopilot();

//
// iAI.AvoidanceRadius( hisim target, hisim us )
//
// Returns the avoidance radius for us avoiding the given target
//
prototype float iAI.AvoidanceRadius( hisim target, hisim us );

//
// iAI.InnerMarkerRadius( hisim target, hisim us )
//
// Returns the inner marker radius for approach/formate
//
prototype float iAI.InnerMarkerRadius( hisim target, hisim us );

//
// iAI.SetIgnoreFunction( hship ship, string func )
//
// Sets the ignore function
//
prototype iAI.SetIgnoreFunction( hship ship, string func );

//
// iAI.SetFightFunction( hship ship, string func )
//
// Sets the fight function
//
prototype iAI.SetFightFunction( hship ship, string func );

//
// iAI.SetFleeFunction( hship ship, string func )
//
// Sets the flee function
//
prototype iAI.SetFleeFunction( hship ship, string func );

//
// iAI.SetWimpyFunction( hship ship, string func )
//
// Sets the wimpy function
//
prototype iAI.SetWimpyFunction( hship ship, string func );

//
// iAI.IsCapsuleJumpAccelerating( hship ship )
//
// Returns true if we are accelerationg for a capsule jump
//
prototype bool iAI.IsCapsuleJumpAccelerating( hship ship );

#endif // FLUX_LIB

//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iTrade.h
//
// Pog header file for the iTrade package.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iTrade);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "itrade" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB
#else

// Dependencies ///////////////////////////////////////////////////////////////

uses iFaction;

// Type definitions ///////////////////////////////////////////////////////////

//
// htrade
//
// Handle type for trading - represents an opportunity for a trade.
//
handle htrade : hobject;

// Function prototypes ////////////////////////////////////////////////////////

//
// htrade iTrade.Cast( hobject trade_object )
//
// Cast an object handle up to a handle to a trade opportunity.
//
prototype htrade iTrade.Cast( hobject trade_object );

//
// iTrade.CreateTradeForCargoType( hfaction offering_faction,
//								   int cargo_type_offered,
//								   int num_offered,
//								   int cargo_type_wanted,
//								   int num_wanted,
//								   int offers )
//
// Create a trade. The trade is offered by the given faction, and consists of
// an offer of a given number of a given cargo in exchange for a given number
// of another cargo. Finally, how many times can this trade be taken advantage
// of.
//
prototype htrade iTrade.CreateTradeForCargoType( 
	hfaction offering_faction,
	int cargo_type_offered,
	int num_offered,
	int cargo_type_wanted,
	int num_wanted,
	int offers );

//
// iTrade.CreateTradeForCargoCategory( hfaction offering_faction,
//									   int cargo_type_offered,
//									   int num_offered,
//									   int cargo_category_wanted,
//									   int num_wanted,
//									   int offers )
//
// Create a trade. The trade is offered by the given faction, and consists of
// an offer of a given number of a given cargo in exchange for a given number
// of any cargo from the given cargo category.
//
// The final parameter determines whether or not this trade should be a one-off
// trade - that is to say a trade which can only be taken up once. Finally, how 
// many times can this trade be taken advantage of.
//
prototype htrade iTrade.CreateTradeForCargoCategory( 
	hfaction offering_faction,
	int cargo_type_offered,
	int num_offered,
	int cargo_category_wanted,
	int num_wanted,
	int offers );

//
// iTrade.CreateTradeForCargoSuperSet( hfaction offering_faction,
//									   int cargo_type_offered,
//									   int num_offered,
//									   int cargo_super_set_wanted,
//									   int num_wanted,
//									   int offers )
//
// Create a trade. The trade is offered by the given faction, and consists of
// an offer of a given number of a given cargo in exchange for a given number
// of any cargo from the given cargo super-set.
//
// The final parameter determines whether or not this trade should be a one-off
// trade - that is to say a trade which can only be taken up once. Finally, 
// how many times can this trade be taken advantage of.
//
prototype htrade iTrade.CreateTradeForCargoSuperSet( 
	hfaction offering_faction,
	int cargo_type_offered,
	int num_offered,
	int cargo_super_set_wanted,
	int num_wanted,
	int offers );

//
// int iTrade.NumOffers( htrade trade )
//
// How many times can the player take advantage of this trade?
//
prototype int iTrade.NumOffers( htrade trade );

//
// iTrade.OfferTrade( htrade trade )
//
// Offer the given trade to the player.
//
prototype iTrade.OfferTrade( htrade trade );

//
// iTrade.RemoveTrade( htrade trade )
//
// Remove the given trade from the player's current trade opportunities.
//
prototype iTrade.RemoveTrade( htrade trade );

//
// int iTrade.NumTrades()
//
// How many trades are currently being offered to the player.
//
prototype int iTrade.NumTrades();

//
// htrade iTrade.NthTrade( int n )
//
// Get the nth trade in the list of trades currently being offered to the 
// player.
//
prototype htrade iTrade.NthTrade( int n );

//
// hfaction iTrade.Faction( htrade trade )
//
// Get the faction
//
prototype hfaction iTrade.Faction( htrade trade );

//
// string iTrade.Offered( htrade trade )
//
// Get the name of the offered trade commodity.
//
prototype string iTrade.Offered( htrade trade );

//
// string iTrade.Wanted( htrade trade )
//
// Get the name of the wanted trade commodity, category or super set.
//
prototype string iTrade.Wanted( htrade trade );

//
// iTrade.CanSatisfyTrade
//
// Can the player satisfy the given trade?
//
prototype bool iTrade.CanSatisfyTrade( htrade trade );

//
// bool iTrade.PerformTrade( htrade trade )
//
// Action the given trade
//
prototype bool iTrade.PerformTrade( htrade trade );

//
// string iTrade.JaffsTradeDescription( htrade trade )
//
// Update Jaffs box with a description of the trade
//
prototype string iTrade.JaffsTradeDescription( htrade trade );

//
// string iTrade.JaffsTradeAdvice( htrade trade )
//
// Update Jaffs box with information about the trade
//
prototype string iTrade.JaffsTradeAdvice( htrade trade );




////
//	MetatypeOfTrade
//
//	Return an int indicating the metatype of a trade.
//
//	0 Type
//	1 Category
//	2 Superset

prototype int iTrade.MetatypeOfTrade( htrade trade);


// EOF ////////////////////////////////////////////////////////////////////////

#endif // FLUX_LIB

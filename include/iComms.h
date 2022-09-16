//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iComms.h
//
// Package API for I-War 2 comms management
//
// Revision control information:
//
// $Header: /iwar2/packages/iComms.h 10    2/04/01 14:15 Derekm $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iComms);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "icomms" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else


//
// iComms.IsInConversation
//
// Return TRUE if there is a conversation going on, or waiting 
// for the phrase to be printed.
//
prototype bool iComms.IsInConversation();

//
// iComms.IsBusy
//
// Return TRUE if the player is listening to a conversation phrase or 
// choosing a response.
//
prototype bool iComms.IsBusy();

//
// iComms.Shout
//
// Shout a message to the player, which will only be heard if no other
// phrase is currently in progress.
//
prototype iComms.Shout( hobject speaker, string speaker_key, string phrase_key );

//
// bool iComms.BeginConversation
//
// Begin a conversation with the given speaker. This function will not 
// begin a conversation unless the conversation lock is free.
//
prototype bool iComms.BeginConversation();

//
// iComms.EndConversation
//
// End the current conversation and release the conversation lock.
//
prototype iComms.EndConversation();

//
// iComms.ClearResponses
//
// Clear the current set of responses.
//
prototype iComms.ClearResponses();

//
// iComms.AddResponse
//
// Add a conversation response to the list. 
//
prototype iComms.AddResponse( string menu_key, string phrase_key );

//
// iComms.AddResponseWithCode
//
// Add a conversation response to the list, specifying a particular code.
//
prototype iComms.AddResponseWithCode( string menu_key, string phrase_key, int code );

//
// iComms.Say
//
// Say a conversation phrase.
//
prototype iComms.Say( hobject speaker, string speaker_key, string phrase_key );

//
// iComms.CanEnd
//
// Can the conversation be ended safely. The conversation can be ended
// if there's nothing being said that can't be interrupted. This function
// is especially important after questions have been asked, where a response
// is being displayed that the script doesn't know about
//
prototype bool iComms.CanEnd();

//
// iComms.Abort
//
// Stops any current conversation immediately. If start_new_conversation
// is set to true, a new conversation will be started. This has the benefit
// of locking out any new conversations.
//
prototype iComms.Abort(bool start_new_conversation);

//
// iComms.AbortEnd
//
// Reenable the conversation after an abort
//
prototype iComms.AbortEnd();

//
// iComms.IsSaying
//
// Test if the phrase is waiting to be said
//
prototype bool iComms.IsSaying( hobject speaker, string speaker_key, string phrase_key );

//
// iComms.Ask
//
// Ask a conversation question. When the question is finished the player
// will be able to select a response. 
//
prototype iComms.Ask( hobject speaker, string speaker_key, string phrase_key );

//
// iComms.Response
//
// Returns the player's response, or zero if no response has been chosen
// yet.
//
prototype int iComms.Response();

//
// bool iComms.IsOwner()
//
// Does the current task own the conversation?
//
prototype bool iComms.IsOwner();

#endif // FLUX_LIB

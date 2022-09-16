//
// (c) 1999-2000 Particle Systems Ltd. All Rights Reserved
//
// iConversation.h
//
// Simple conversation API. This package wraps calls to the iComms package
// and handles conversation timing issues.
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iConversation.h 2     4/04/00 17:12 Will $
//

// Dependencies ///////////////////////////////////////////////////////////////

// Type definitions ///////////////////////////////////////////////////////////

// Function prototypes ////////////////////////////////////////////////////////

//
// iConversation.Begin
//
// Begin a conversation with the given speaker. This function will not return
// until the conversation can be started (i.e. until the comms system is not
// busy.)
//
prototype iConversation.Begin();

//
// iConversation.End
//
// End the current conversation.
//
prototype iConversation.End();

//
// iConversation.Say
//
// Say a phrase in a conversation. This function will not start the phrase 
// until the comms system is free, and will not return until the phrase has
// finished.
//
prototype iConversation.Say( hobject speaker, 
							 string speaker_key, 
							 string phrase_key );

//
// iConversation.AddResponse
//
// Add a response to the current conversation response list. Response are 
// numbered starting from 1 in the order in which they are added, and are
// displayed on the screen in this order.
//
// The response list is cleared at the start of a conversation and also
// following each question.
//
prototype iConversation.AddResponse( string menu_key, string phrase_key );

//
// iConversation.Ask
//
// Ask a question in a conversation. This function will not return until
// the player has selected a response. The return value is the number of
// the player's response in the response list. (See above for details.)
//
prototype int iConversation.Ask( hobject speaker, 
								 string speaker_key, 
								 string phrase_key );

//
// iConversation.OneLiner
//
// Hold a one-line conversation. This is different from a shout in that the
// function will wait for the comms system to become free.
//
prototype iConversation.OneLiner( hobject speaker,
								  string speaker_key,
								  string phrase_key );

// EOF ////////////////////////////////////////////////////////////////////////


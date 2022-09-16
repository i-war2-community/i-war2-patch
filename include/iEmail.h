//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// iEmail.h
//
// API for the package iEmail.
//
// Revision control information:
//
// $Header:
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(iEmail);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "iemail" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Handle to an email
handle hemail : hobject;

// We use the GUI for hwindow
uses GUI;

// Email store functions //////////////////////////////////////////////////////

//
// iEmail.SendEmail( string sender,
//					 string subject,
//					 string email_body_request,
//					 bool urgent );
//
// Send the player the email specified by the parameters.
//
prototype iEmail.SendEmail( string sender,
							string subject,
							string email_body_request,
							bool urgent );

//
// hemail iEmail.Find( string email_body_request );
//
// Attempt to find the given email in the player's email store
//
prototype hemail iEmail.Find( string email_body_request );

//
// int iEmail.InboxSize()
//
// Get the number of emails in the inbox.
//
prototype int iEmail.InboxSize();

//
// int iEmail.Unread()
//
// Get the number of unread emails in the inbox.
//
prototype int iEmail.Unread();

//
// hemail iEmail.NthInInbox( int n )
//
// Get the nth email in the inbox.
//
prototype hemail iEmail.NthInInbox( int n );

//
// int iEmail.ArchiveSize()
//
// Get the number of emails in the archive.
//
prototype int iEmail.ArchiveSize();

//
// hemail iEmail.NthInArchive( int n )
//
// Get the nth email in the archive.
//
prototype hemail iEmail.NthInArchive( int n );

//
// bool iEmail.Received( string email_body_request )
//
// Has the player received the email identified by the given email body
// resource request?
//
prototype bool iEmail.Received( string email_body_request );

//
// prototype ShuntReadEmailToArchive();
//
// Move all read email in the inbox to the archive
//
prototype iEmail.ShuntReadEmailToArchive();

//
// iEmail.FillArchivedEmailListBox( hwindow list_box )
//
// Fill the given list box with windows describing archived emails
//
prototype iEmail.FillArchivedEmailListBox( hwindow list_box );

//
// iEmail.ResetWindows()
//
// Pull the email windows out of their existing window manager and 
// back into the email store
//
prototype iEmail.ResetWindows();

// Email functions ////////////////////////////////////////////////////////////

//
// hemail iEmail.Cast( hobject email )
//
// Cast.
//
prototype hemail iEmail.Cast( hobject email );

//
// string iEmail.Sender( hemail email )
//
// Get the sender of a given email.
//
prototype string iEmail.Sender( hemail email );

//
// string iEmail.Subject( hemail email )
//
// Get the subject of a given email.
//
prototype string iEmail.Subject( hemail email );

//
// string iEmail.Body( hemail email )
//
// Get the message body of a given email.
//
prototype string iEmail.Body( hemail email );

//
// int iEmail.ID( hemail email )
//
// Get the ID number of a given email.
//
prototype int iEmail.ID( hemail email );

//
// bool iEmail.Read( hemail email )
//
// Has the given email been read yet?.
//
prototype bool iEmail.Read( hemail email );

//
// bool iEmail.Urgent( hemail email )
//
// Is the given email urgent?
//
prototype bool iEmail.Urgent( hemail email );

//
// iEmail.MarkAsRead( hemail email )
//
// Mark the given email as read.
//
prototype iEmail.MarkAsRead( hemail email );


#endif // FLUX_LIB

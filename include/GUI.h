//
// (c) 1999 Particle Systems Ltd. All Rights Reserved
//
// GUI.h
//
// Pog header for the GUI creation package. 
//
// Revision control information:
//
// $Header: /flux/packages/GUI.h 44    11/04/01 16:11 Tim $
//

#include "Flux.h"

#ifdef FLUX_COMPILE

FLUX_DECLARE_EXTENSION(Gui);

#ifdef FLUX_LIB
#if _MSC_VER >= 1000
#pragma comment( lib, "gui" )
#endif // _MSC_VER >= 1000
#endif // FLUX_LIB

#else

// Enumeration ////////////////////////////////////////////////////////////////

// The GUI sounds enum - maintain in parallel with FcWindow::eSound
enum eSound
{
	S_None,
	S_Minor,
	S_Confirm,
	S_Error,
	S_Loadout,
	S_MechConfirm,
	S_AddProgram,
	S_RemoveProgram,
	S_AddUpgrade,
	S_RemoveUpgrade
};

// Icon types which can be used on customisable buttons - maintain in parallel
// with icCustomisableWindowAvatar::eIcon
enum eIcon
{
	I_None,
	I_LeftArrowOn,
	I_LeftArrowOff,
	I_RightArrowOn,
	I_RightArrowOff,
	I_CircleOn,
	I_CircleOff,
	I_Count
};

// Handle definitions /////////////////////////////////////////////////////////

// We need a handle to a window to control the GUI
handle hwindow : hobject;

// Screen manipulation and access functions ///////////////////////////////////

//
// hwindow GUI.Cast( hobject window )
//
// Cast up to a window
//
prototype hwindow GUI.Cast( hobject window );

//
// GUI.PushScreen( string screen_class )
//
// Creates a new screen of the class given in the screen_class parameter. Pushes
// the new screen onto the screen stack, making it current.
//
prototype GUI.PushScreen( string screen_class );

//
// GUI.PopScreen()
//
// Pops the current screen from the screen stack, deleting it.
//
prototype GUI.PopScreen();

//
// GUI.OverlayScreen()
//
// Overlays an instance of the given screen class onto the current screen.
//
prototype GUI.OverlayScreen(string screen_class);

//
// GUI.RemoveLastOverlay()
//
// Remove the last (i.e. top) overlay
//
prototype GUI.RemoveLastOverlay();

//
// GUI.RemoveOverlaysAfter( string screen_class )
//
// Remove all overlays from the overlay list from the given class on.
//
prototype GUI.RemoveOverlaysAfter( string screen_class );

//
// GUI.SetScreen( string screen_class )
//
// Set the given screen at the expense of the current one.
//
prototype GUI.SetScreen( string screen_class );

//
// GUI.ClearAllScreens()
//
// Pops all screens off the stack.
//
prototype GUI.ClearAllScreens();

//
// GUI.PopScreensTo( string screen_class )
//
// Pops screens until we run out or arrive at the named screen
//
prototype GUI.PopScreensTo( string screen_class );

//
// string GUI.CurrentScreenClassname()
//
// Returns the classname of the topmost GUI screen.
//
prototype string GUI.CurrentScreenClassname();

//
// int GUI.NumScreens()
//
// Get the number of screens (excluding overlays) on the screen stack
//
prototype int GUI.NumScreens();

// Window manager functions ///////////////////////////////////////////////////

//
// hwindow GUI.TopWindow()
//
// Gets the top level window from the current GUI screen's window frame.
//
prototype hwindow GUI.TopWindow();

//
// int GUI.FrameWidth()
//
// The width in frame units of the current GUI screen's window frame.
//
prototype int GUI.FrameWidth();

//
// int GUI.FrameHeight()
//
// The height in frame units of the current GUI screen's window frame.
//
prototype int GUI.FrameHeight();

//
// GUI.SetDefaultFont( string font_request )
//
// Set the default font for the screen.
//
prototype GUI.SetDefaultFont( string font_request );

//
// GUI.SetDefaultColour( float red, float green, float blue )
//
// Set the default colour for text and drawing on the screen. All colour values
// should be in [0,1].
//
prototype GUI.SetDefaultColour( float red, float green, float blue );

//
// GUI.SetBackgroundImage( string image_request, bool dim )
//
// Set the image to use as a background for this GUI screen and determine
// whether nor not to dim it.
//
prototype GUI.SetBackgroundImage( string image_request, 
								  bool dim );

//
// GUI.SetFirstControlFocus( hwindow first_focus )
//
// Set the first control focus - i.e. the first window to select from none selected
//
prototype GUI.SetFirstControlFocus( hwindow first_focus );

//
// GUI.DeleteWindow( hwindow window )
//
// Delete the window with the given handle
//
prototype GUI.DeleteWindow( hwindow window );

//
// GUI.SetControlFocusCancelFunction( string function )
//
// If the control focus 'Cancel' is performed at a level where no windows above
// the focused one will accept the control focus then this function is called
// instead.
//
prototype GUI.SetControlFocusCancelFunction( string function );

//
// GUI.SetFocus( hwindow window )
//
// Used to manually set the focus to the given window
//
prototype GUI.SetFocus( hwindow window );

//
// hwindow GUI.FocusedWindow()
//
// Get the currently focused window
//
prototype hwindow GUI.FocusedWindow();

//
// GUI.CancelFocusLock()
//
// Cancel any current focus locking.
//
prototype GUI.CancelFocusLock();

// Sound support //////////////////////////////////////////////////////////////

//
// GUI.RegisterSound( string sound_request, eSound sound )
//
// Set a sound for a class of GUI event
//
prototype GUI.RegisterSound( string sound_request, eSound sound );

//
// bool GUI.QueueSound( eSound sound )
//
// Play a GUI audio cue next frame
//
prototype bool GUI.QueueSound( eSound sound );

//
// bool GUI.PlaySound( eSound sound )
//
// Play a GUI audio cue immediately. Also purges the sound queue.
//
prototype bool GUI.PlaySound( eSound sound );

//
// bool GUI.StartSound( eSound sound )
//
// Start a GUI looping sound.
//
prototype bool GUI.StartSound( eSound sound );

//
// bool GUI.StopSound( eSound sound )
//
// Stop any looping sound.
//
prototype bool GUI.StopSound( eSound sound );

//
// GUI.SetBeepOnGainFocus( bool beep )
//
// Set a window to beep when it gains focus
//
prototype GUI.SetBeepOnGainFocus( bool beep );

// Base window /////////////////////////////////////////////////////////////////

//
// hwindow GUI.CreateWindow( int x, int y, 
//							 int width, int height, 
//							 hwindow parent )
//
// Create a basic window. It doesn't do anything, but it can be used to group
// radio buttons together (radio buttons group with their siblings).
//
prototype hwindow GUI.CreateWindow( int x, int y, 
									int width, int height, 
									hwindow parent );

//
// GUI.SetWindowClientArea( hwindow window, int left, int top, int right, int bottom )
//
// Set the window's client area. Will increase the canvas too if necessary
//
prototype GUI.SetWindowClientArea( hwindow window, 
								   int left, int top, int right, int bottom );

//
// GUI.RepositionWindow( hwindow window, hwindow parent, 
//                       int x_offset, int next_y )
//
// Remove a window from its current parent and reset the window with a new parent
// and offset into that parent.
//
prototype GUI.RepositionWindow( hwindow window, hwindow parent, 
								int x_offset, int next_y );
		
//
// GUI.SetWindowFont( hwindow window, string font_request )
//
// Set the font for a given window.
//
prototype GUI.SetWindowFont( hwindow window, string font_request );

//
// GUI.SetWindowTitle( hwindow window, string title )
//
// Set the title for a given window.
//
prototype GUI.SetWindowTitle( hwindow window, string title );

//
// string GUI.WindowTitle( hwindow window )
//
// Get the title for a given window.
//
prototype string GUI.WindowTitle( hwindow window );

//
// GUI.SetWindowPreviousFocus( hwindow window, hwindow focus )
//
// Set the window that the control focus will be shifted to if the focus is shifted
// to the next window.
//
prototype GUI.SetWindowPreviousFocus( hwindow window, hwindow focus );

//
// GUI.SetWindowNextFocus( hwindow window, hwindow focus )
//
// Set the window that the control focus will be shifted to if the focus is shifted
// to the next window.
//
prototype GUI.SetWindowNextFocus( hwindow window, hwindow focus );

//
// hwindow GUI.WindowPreviousFocus( hwindow window )
//
// Get the previous focus
//
prototype hwindow GUI.WindowPreviousFocus( hwindow window );

//
// hwindow GUI.WindowNextFocus( hwindow window )
//
// Get the next focus
//
prototype hwindow GUI.WindowNextFocus( hwindow window );

//
// GUI.SetWindowAcceptFocus( hwindow window, bool accept )
//
// Set whether or not a window will accept focus
//
prototype GUI.SetWindowAcceptFocus( hwindow window, bool accept );

//
// int GUI.WindowCanvasWidth( hwindow window )
//
// Get the width of a window canvas
//
prototype int GUI.WindowCanvasWidth( hwindow window );

//
// int GUI.WindowCanvasHeight( hwindow window )
//
// Get the height of a window canvas
//
prototype int GUI.WindowCanvasHeight( hwindow window );

//
// GUI.SetVisible( hwindow window, bool visible )
//
// Set whether or not the given window is visible
//
prototype GUI.SetVisible( hwindow window, bool visible );

//
// GUI.SetInputOverrideFunctions( hwindow window,
//								  string cf_left,
//								  string cf_up,
//								  string cf_right,
//								  string cf_down,
//								  string cf_select,
//								  string cf_cancel,
//								  string mouse_down,
//								  string mouse_up,
//								  string mouse_down_held );
//
// Set functions overriding the normal window behaviour in the situation of
// the various control focus commands being given.
//
prototype GUI.SetInputOverrideFunctions( 
	hwindow window,
	string cf_left,
	string cf_up,
	string cf_right,
	string cf_down,
	string cf_select,
	string cf_cancel,
	string mouse_down,
	string mouse_up,
	string mouse_down_held );

//
// GUI.SelectWindow( hwindow window )
//
// Select a window
//
prototype GUI.SelectWindow( hwindow window );

//
// GUI.DeselectWindow( hwindow window )
//
// Deselect a window
//
prototype GUI.DeselectWindow( hwindow window );

//
// hwindow GUI.FirstChild( hwindow window )
//
// Get the first child of the given window
//
prototype hwindow GUI.FirstChild( hwindow window );

//
// hwindow GUI.NextSibling( hwindow window )
//
// Get the next sibling of the given window
//
prototype hwindow GUI.NextSibling( hwindow window );

// Script generated input messages ///////////////////////////////////////////

prototype GUI.OnControlFocusLeft( hwindow window );
prototype GUI.OnControlFocusUp( hwindow window );
prototype GUI.OnControlFocusRight( hwindow window );
prototype GUI.OnControlFocusDown( hwindow window );
prototype GUI.OnControlFocusSelect( hwindow window );
prototype GUI.OnControlFocusCancel( hwindow window );

// Customisable windows - e.g. buttons, text controls and checkboxes /////////

// 
// GUI.SetWindowStateColours( hwindow customisable_window, 
//						      float n_red, float n_green, float n_blue, 
//						      float f_red, float f_green, float f_blue,
//                            float s_red, float s_green, float s_blue );
//
// Set the window colour for each of the four possible window states.
//
prototype GUI.SetWindowStateColours( hwindow customisable_window, 
									 float n_red, float n_green, float n_blue, 
								     float f_red, float f_green, float f_blue,
							         float s_red, float s_green, float s_blue );

// 
// GUI.Window[Neutral|Focused|Selected][Red|Green|Blue]
//
// Get the window colours for the various states
//
prototype float GUI.WindowNeutralRed( hwindow window );
prototype float GUI.WindowNeutralGreen( hwindow window );
prototype float GUI.WindowNeutralBlue( hwindow window );
prototype float GUI.WindowFocusedRed( hwindow window );
prototype float GUI.WindowFocusedGreen( hwindow window );
prototype float GUI.WindowFocusedBlue( hwindow window );
prototype float GUI.WindowSelectedRed( hwindow window );
prototype float GUI.WindowSelectedGreen( hwindow window );
prototype float GUI.WindowSelectedBlue( hwindow window );

//
// GUI.SetWindowStateTextures( hwindow customisable_window,
//							   string texture_request, 
//							   int n_l_l, int n_l_t, int n_l_r, int n_l_b,
//							   int n_b_l, int n_b_t, int n_b_r, int n_b_b,
//							   int n_r_l, int n_r_t, int n_r_r, int n_r_b,
//							   int f_l_l, int f_l_t, int f_l_r, int f_l_b,
//							   int f_b_l, int f_b_t, int f_b_r, int f_b_b,
//							   int f_r_l, int f_r_t, int f_r_r, int f_r_b,
//							   int s_l_l, int s_l_t, int s_l_r, int s_l_b,
//							   int s_b_l, int s_b_t, int s_b_r, int s_b_b,
//							   int s_r_l, int s_r_t, int s_r_r, int s_r_b )
//
// Set the textures to display on customisable controls for each of its states.
// The textures are drawn piece meal so we need three for each - one for the
// left hand end, one for the right hand end and one for the body of the window -
// between the two ends. 
// 
// Each page area is passed as a four integers forming a rectangle - such that
// 'n_l_t' is the top part of the page area for the left hand side for the 
// neutral state.
//
prototype GUI.SetWindowStateTextures( hwindow customisable_window,
									  string texture_request, 
									  int n_l_l, int n_l_t, int n_l_r, int n_l_b,
									  int n_b_l, int n_b_t, int n_b_r, int n_b_b,
									  int n_r_l, int n_r_t, int n_r_r, int n_r_b,
									  int f_l_l, int f_l_t, int f_l_r, int f_l_b,
									  int f_b_l, int f_b_t, int f_b_r, int f_b_b,
									  int f_r_l, int f_r_t, int f_r_r, int f_r_b,
									  int s_l_l, int s_l_t, int s_l_r, int s_l_b,
									  int s_b_l, int s_b_t, int s_b_r, int s_b_b,
									  int s_r_l, int s_r_t, int s_r_r, int s_r_b );

// 
// GUI.SetWindowTextFormatting( hwindow customisable_window, 
//								bool centred, 
//								int text_offset );
//
// Set the window's text formatting - should the text be centred? If not, how
// much offset from the left of the canvas should there be?
//
prototype GUI.SetWindowTextFormatting( hwindow customisable_window, 
									   bool centred, 
									   int text_offset );

//
// GUI.SetWindowStateIcons( 
//	hwindow window, 
//	eIcon neutral,
//	eIcon focused,
//	eIcon selected )
//
// Set icons for this window for the various window states
//
prototype GUI.SetWindowStateIcons( 
	hwindow window, 
	eIcon neutral,
	eIcon focused,
	eIcon selected );

// Decorators //////////////////////////////////////////////////////////////////

//
// hwindow GUI.CreateBorder( hwindow target )
//
// Create a border around the given window
//
prototype hwindow GUI.CreateBorder( hwindow target );

//
// hwindow GUI.CreateFancyBorder( hwindow target )
//
// Create a fancy border around the given window
//
prototype hwindow GUI.CreateFancyBorder( hwindow target );

//
// hwindow GUI.CreateHorizontalScrollbarDecorator( hwindow target )
//
// Create a horizontal scrollbar around the given window
//
prototype hwindow GUI.CreateHorizontalScrollbarDecorator( hwindow target );

//
// hwindow GUI.CreateHorizontalScrollbar( int x, int y,
//										  int width,
//										  hwindow parent,
//										  hwindow target )
//
// Create a horizontal scrollbar. Note that this function does not create a 
// window as a decorator, but still attaches and monitors another window.
//
prototype hwindow GUI.CreateHorizontalScrollbar( int x, int y,
											     int width,
											     hwindow parent,
											     hwindow target );

//
// hwindow GUI.CreateVerticalScrollbarDecorator( hwindow target, 
//												 float button_length_factor )
//
// Create a vertical scrollbar around the given window. This creates a normal
// scrollbar - not a fancy one.
//
prototype hwindow GUI.CreateVerticalScrollbarDecorator( hwindow target );

//
// hwindow GUI.CreateVerticalScrollbar( int x, int y,
//										int height,
//										hwindow parent,
//										hwindow target,
//										float button_length_to_width_ratio,
//										string avatar_hint );
//
// Creates a vertical scrollbar at the given point of the given size, attached
// to the given target. We also pass in the ratio between scrollbar width and
// button length (to allow the new window to set it's clickable mouse areas 
// correctly) and a hint to the avatar factory, which allows us to tailor the 
// avatar used to draw the scrollbar.
//
prototype hwindow GUI.CreateVerticalScrollbar( 
	int x, int y,
	int width, int height,
	hwindow parent,
	hwindow target,
	float button_length_to_width_ratio,
	string avatar_hint );

//
// hwindow GUI.CreateDualScrollbars( hwindow target );
//
// Create both horizontal and vertical scrollbars around the given window. This 
// creates normal scrollbars - not fancy ones.
//
prototype hwindow GUI.CreateDualScrollbars( hwindow target );

//
// GUI.ReattachScrollbar( hwindow scrollbar, hwindow target )
//
// Change the window that a scrollbar is attached to
//
prototype GUI.ReattachScrollbar( hwindow scrollbar, hwindow target );

// Static window /////////////////////////////////////////////////////////////// 

//
// hwindow GUI.CreateStaticWindow( int x, int y,
//								   int width, int height,
//							       hwindow parent )
//
// Create a static window - displays its title and an image
//
prototype hwindow GUI.CreateStaticWindow( int x, int y,
										  int width, int height,
										  hwindow parent );

// Button ////////////////////////////////////////////////////////////////////// 

//
// hwindow GUI.CreateButton( int x, int y,
//							 int width, int height, 
//						     hwindow parent )
//
// Create a normal 'button' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
//
prototype hwindow GUI.CreateButton( int x, int y,
								    int width, int height,
									hwindow parent );

//
// hwindow GUI.CreateBackButton( int x, int y,
//								 int width, int height, 
//								 hwindow parent )
//
// Create a back button - like a normal button, but with added avatar
//
prototype hwindow GUI.CreateBackButton( int x, int y,
										int width, int height,
										hwindow parent );

//
// GUI.SetButtonFunctionPog( hwindow button, string function )
//
// Set a button's execution function to the given pog function.
//
prototype GUI.SetButtonFunctionPog( hwindow button, string function );

// Text window /////////////////////////////////////////////////////////////////

//
// hwindow GUI.CreateTextWindow( int x, int y, 
//							     int width, int height, 
//							     hwindow parent )
//
// Create a 'text window' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
//
prototype hwindow GUI.CreateTextWindow( int x, int y,
									    int width, int height,
									    hwindow parent );

//
// GUI.SetTextWindowString( hwindow text_window, string text );
//
// Sets the text contained in a text window to the given string.
//
prototype GUI.SetTextWindowString( hwindow text_window, string text );

//
// GUI.SetTextWindowResource( hwindow text_window, string resource );
//
// Sets the text contained in a text window to the string found in the given
// resource.
//
prototype GUI.SetTextWindowResource( hwindow text_window, string resource );

//
// bool GUI.TextWindowBack( hwindow text_window );
//
// Shifts the text window to show the previous HTML page
//
prototype bool GUI.TextWindowBack( hwindow text_window );

// Edit box ////////////////////////////////////////////////////////////////////

//
// GUI.CreateEditBox( int x, int y, 
//                    int width, int height, 
//                    hwindow parent,
//                    bool multi_line,
//                    string default_text,
//					  bool numeric )
//
// Create a 'text window' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
// 
// The sixth parameter determines whether or not the edit box should be 
// multi-line. The final argument sets the box's default text.
//
// The seventh determines whether the edit box will only accept characters in
// [0-9]
//
prototype hwindow GUI.CreateEditBox( int x, int y,
									 int width, int height,
									 hwindow parent,
									 bool multi_line,
									 string default_text,
									 bool numeric );

//
// GUI.SetEditBoxCharLength( hwindow edit_box, int length )
//
// Set the maximum number of characters allowed in a single line edit box
//
prototype GUI.SetEditBoxMaxCharLength( hwindow edit_box, int length );


//
// string GUI.EditBoxValue( hwindow edit_box )
//
// Get the value entered into the given edit box.
//
prototype string GUI.EditBoxValue( hwindow edit_box );

//
// string GUI.SetEditBoxValue( hwindow edit_box, string text )
//
// Set the value entered into the given edit box.
//
prototype string GUI.SetEditBoxValue( hwindow edit_box, string text );

//
// GUI.SetEditBoxOverrides( 
//	hwindow edit_box,
//	string start_editing, 
//  string cancel_editing,
//  string finish_editing )
//
// Set optional Pog functions to be called when editing begins, is cancelled
// or is finished
//
prototype GUI.SetEditBoxOverrides( hwindow edit_box,
								   string start_editing, 
								   string cancel_editing,
								   string finish_editing );

//
// GUI.SetEditBoxCursorToEnd( hwindow edit_box )
//
// Set the edit box cursor to the end.
//
prototype GUI.SetEditBoxCursorToEnd( hwindow edit_box );

// List box ////////////////////////////////////////////////////////////////////

//
// GUI.CreateListBox( int x, int y, 
//                    int width, int height, 
//                    hwindow parent,
//                    bool selectable,
//					  bool multiple_selection )
//
// Create a 'list box' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
// 
// The sixth parameter determines whether or not the list box is selectable, which 
// overrides the seventh parameter determines whether or not more than one entry in the 
// box can be selected at once.
//
prototype hwindow GUI.CreateListBox( int x, int y,
									 int width, int height,
									 hwindow parent,
									 bool selectable,
									 bool multiple_selection );

//
// GUI.AddListBoxEntry( hwindow list_box, hwindow entry );
//
// Adds the given entry (that is to say, window) to a list box.
//
prototype GUI.AddListBoxEntry( hwindow list_box, hwindow entry );

// !! Need a list box multi-selector value function

//
// hwindow GUI.ListBoxValue( hwindow list_box )
//
// Get the selected value in the given list box. If it is a multiple selection
// box then it returns the first. If there is no selection then return a null handle.
//
prototype hwindow GUI.ListBoxValue( hwindow list_box );

//
// int GUI.ListBoxSelectedIndex( hwindow list_box )
//
// Get the (zero based) index of the selected value in the list box. If it is a 
// multiple selection box then it returns the first. If there is no selection 
// then return -1.
//
prototype int GUI.ListBoxSelectedIndex( hwindow list_box );

//
// GUI.RemoveListBoxEntries( hwindow list_box )
//
// Remove all the list box entries.
//
prototype GUI.RemoveListBoxEntries( hwindow list_box );

//
// hwindow GUI.RemoveListBoxEntry( hwindow list_box, int index )
//
// Remove the given list box entry and return the now parentless window
//
prototype hwindow GUI.RemoveListBoxEntry( hwindow list_box, int index );

//
// GUI.CancelListBoxSelection( hwindow list_box )
//
// Cancel any list box selection(s)
//
prototype GUI.CancelListBoxSelection( hwindow list_box );

//
// GUI.SelectListBoxEntry( hwindow list_box, int index )
//
// Make the list box entry at the given index selected.
//
prototype GUI.SelectListBoxEntry( hwindow list_box, int index );

//
// GUI.SetListBoxGap( hwindow list_box, int gap )
//
// Set the vertical spacing between list box elements
//
prototype GUI.SetListBoxGap( hwindow list_box, int gap );

//
// int GUI.ListBoxFocusedEntry( hwindow list_box )
//
// Which list box entry is being selected? -1 is no entry.
//
prototype int GUI.ListBoxFocusedEntry( hwindow list_box );

//
// GUI.SetListBoxFocusedEntry( hwindow list_box, int entry )
//
// Set the list box focused entry.
//
prototype GUI.SetListBoxFocusedEntry( hwindow list_box, int entry );

//
// GUI.DisableHighlight( hwindow list_box )
//
// Disable the orange highlight added by default by list boxes
//
prototype GUI.DisableHighlight( hwindow list_box );

//
// GUI.SetListBoxSelectFunction( hwindow list_box, string function )
//
// Set the given Pog function to get called when a list box entry is selected
//
prototype GUI.SetListBoxSelectFunction( hwindow list_box, string function );

// Combo box ///////////////////////////////////////////////////////////////////

//
// GUI.CreateComboBox( int x, int y, 
//                     int width, int height, 
//                     hwindow parent,
//                     bool editable,
//					   string default_value )
//
// Create a 'combo box' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
// 
// The sixth parameter determines whether or not the edit box portion of the 
// combo box is editable. The final parameter is the default value to put in
// the edit box portion of the box.
//
prototype hwindow GUI.CreateComboBox( int x, int y,
									  int width, int height,
									  hwindow parent,
									  bool editable,
									  string default_value );

//
// GUI.AddComboBoxEntry( hwindow combo_box, string entry );
//
// Adds the given entry to a combo box.
//
prototype GUI.AddComboBoxEntry( hwindow combo_box, string entry );

//
// string GUI.ComboBoxValue( hwindow combo_box )
//
// Get the value entered into the given combo box.
//
prototype string GUI.ComboBoxValue( hwindow combo_box );

//
// int GUI.ComboBoxValueIndex( hwindow combo_box )
//
// Get the index into the list box of the value entered into the given combo 
// box. Only for non-editable boxes. -1 will be used if no entry is selected or
// if the box is editable.
//
prototype int GUI.ComboBoxValueIndex( hwindow combo_box );

// Checkbox ////////////////////////////////////////////////////////////////////

//
// GUI.CreateCheckbox( int x, int y, 
//                     int width, int height, 
//                     hwindow parent,
//                     bool checked )
//
// Create a 'checkbox' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
// 
// The sixth parameter determines whether or not the check box is checked.
//
prototype hwindow GUI.CreateCheckbox( int x, int y,
									  int width, int height,
									  hwindow parent,
									  bool checked );

//
// bool GUI.CheckboxValue( hwindow check_box )
//
// Get the checked-ness of the given checkbox.
//
prototype bool GUI.CheckboxValue( hwindow check_box );

// Radio button ////////////////////////////////////////////////////////////////

//
// GUI.CreateRadioButton( int x, int y, 
//                        int width, int height, 
//                        hwindow parent,
//                        bool checked )
//
// Create a 'radio button' GUI element, with it's top-left hand corner in the 
// given position, with the given width and height (all in frame units) and with
// the given parent.
// 
// The sixth parameter determines whether or not the radio button is checked.
//
prototype hwindow GUI.CreateRadioButton( int x, int y,
									     int width, int height,
									     hwindow parent,
									     bool checked );

//
// bool GUI.RadioButtonValue( hwindow radio_button )
//
// Get the checked-ness of the given radio button.
//
prototype bool GUI.RadioButtonValue( hwindow radio_button );

//
// GUI.SetRadioButtonChecked( hwindow radio_button, bool checked )
//
// Set the checked-ness of the given radio button.
//
prototype GUI.SetRadioButtonChecked( hwindow radio_button, bool checked );

// Splitter window //////////////////////////////////////////////////////////////

//
// GUI.CreateSplitterWindow( int x, int y, 
//							 int width, int height, 
//                           hwindow parent,
//                           int split,
//							 bool fancy )
//
// Creates a splitter window - that is a window which contains two other windows,
// with a horizontal line between them. The split parameter sets how far down
// the canvas of the window the split is placed.
//
prototype hwindow GUI.CreateSplitterWindow( int x, int y,
									        int width, int height,
									        hwindow parent,
									        int split,
											bool fancy );

//
// GUI.CreateFancySplitterWindow( int x, int y, 
//							      int width, int height, 
//								  hwindow parent,
//								  int split )
//
// Creates a fancy splitter window - that is a window which contains two other 
// windows, with a horizontal line between them. The split parameter sets how far 
// down the canvas of the window the split is placed.
//
prototype hwindow GUI.CreateFancySplitterWindow( int x, int y,
												 int width, int height,
												 hwindow parent,
												 int split );

//
// GUI.SplitterWindowTopWindow( hwindow window )
//
// Gets the top of the two windows contained in a splitter window.
//
prototype hwindow GUI.SplitterWindowTopWindow( hwindow window );


//
// GUI.SplitterWindowBottomWindow( hwindow window )
//
// Gets the bottom of the two windows contained in a splitter window.
//
prototype hwindow GUI.SplitterWindowBottomWindow( hwindow window );

// Shader window //////////////////////////////////////////////////////////////

//
// prototype GUI.SetShadyBarWidth( int width )
//
// Set the shady bar width
//
prototype GUI.SetShadyBarWidth( int width );

//
// prototype GUI.SetRHSShadyBarWidth( int width )
//
// Sets the RHS shady bar width
//
prototype GUI.SetRHSShadyBarWidth( int width );

// Slider control /////////////////////////////////////////////////////////////

//
// GUI.CreateSliderControl( int x, 
//							int y, 
//							int width, 
//							int height, 
//							hwindow parent,
//							float start_value,
//							float end_value,
//							float step_value )
//
// Create a slider control
//
prototype hwindow GUI.CreateSliderControl( int x, int y, 
										   int width, int height, 
										   hwindow parent,
										   float start_value,
										   float end_value,
										   float step_value );

//
// float GUI.SliderControlValue( hwindow slider_window )
//
// Get the value of the slider control
//
prototype float GUI.SliderControlValue( hwindow slider_window );

//
// GUI.SetSliderControlValue( hwindow slider_window, float value )
//
// Set the value of the slider control
//
prototype GUI.SetSliderControlValue( hwindow slider_window, float value );

//
// GUI.PlayBackgroundMovie( string movie, string text )
//
// Play a background spinny
//
prototype GUI.PlayBackgroundMovie(string movie, string text);

//
// GUI.StopBackgroundMovie()
//
// Stop the background movie
//
prototype GUI.StopBackgroundMovie();

//
// GUI.StopAllMovies()
//
// Stop the background movie or spinny
//
prototype GUI.StopAllMovies();

#endif // FLUX_LIB



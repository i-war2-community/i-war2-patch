//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iGUI.h
//
// Compiler-generated export header for package "iGUI"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iGUI.h 15    7/08/01 15:07 Will $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

prototype iGUI.SetGUIGlobals();

prototype hwindow iGUI.CreateFancyButton( int x, int y, hwindow parent );

prototype hwindow iGUI.CreateBackButton( int x, int y, hwindow parent );

prototype hwindow iGUI.CreateBackToMainMenuButton( int x, int y, hwindow parent );

prototype hwindow iGUI.CreateInverseButton( int x, int y, int width, hwindow parent );

prototype hwindow iGUI.CreateInverseRadioButton( int x, int y, hwindow parent );

prototype hwindow iGUI.CreateFancyVerticalScrollbar( int x, int y, int height, hwindow parent, hwindow target );

prototype hwindow iGUI.CreateAndInitialiseTextWindow( int x, int y, int width, int height, hwindow parent, string text_resource );

prototype hwindow iGUI.CreateAndInitialiseStaticWindow( int x, int y, int width, int height, hwindow parent, string font, string title );

prototype hwindow iGUI.CreateAndInitialiseFancyButton( hwindow parent, int y_offset, string title, string function );

prototype hwindow iGUI.CreateAndInitialiseFancyBorderedStatic( hwindow parent, int y_offset, string title );

prototype hwindow iGUI.CreateAndInitialiseTabStyleStatic( hwindow parent, int x, int y, int width, string title );

prototype hwindow iGUI.CreateAndInitialiseInverseButton( hwindow parent, int x, int y, int width, string title, string function );

prototype hwindow iGUI.CreateAndInitialiseParentlessInverseButton( string button_function, string title, list window_list );

prototype hwindow iGUI.CreateMenuButton( string button_function, string title, list window_list );

prototype hwindow iGUI.CreateAndInitialiseRectangularInverseRadioButton( hwindow parent, int x, int y, int width, string title, bool checked );

prototype hwindow iGUI.CreateAndInitialiseRectangularInverseButton( hwindow parent, int x, int y, int width, string title, string function );

prototype hwindow iGUI.CreateShadyBar();

prototype hwindow iGUI.CreateShadyBarRight();

prototype hwindow iGUI.CreateWideShadyBar();

prototype list iGUI.AddBackButtons( hwindow parent, string back_function, string back_to_main_menu_function );

prototype hwindow iGUI.AddBackButton( hwindow parent, string back_function );

prototype hwindow iGUI.AddTitle( hwindow parent, string title );

prototype iGUI.ArrangeWindowsVertically( list windows, hwindow parent, int x_offset, int y_offset, int inter_window_gap );

prototype hwindow iGUI.CreateMenu( list buttons );

prototype list iGUI.CreateGreyBoxStyleScreen( string title, string back_function, string back_to_main_function );

prototype list iGUI.CreateHTMLGreyBoxStyleScreen( string html, int width, int height, string back_function, string back_to_main_function );

prototype hwindow iGUI.CreateWindowListInFancyBorder( hwindow parent, list windows, int x, int y );

prototype hwindow iGUI.CreateWindowListInSplitter( hwindow parent, list windows, int splitter_x, int splitter_y, string list_title );

prototype hwindow iGUI.CreateTitledListBox( hwindow parent, string title_text, int column1_width, string column1_title, int column2_width, string column2_title, int column3_width, string column3_title );

prototype hwindow iGUI.CreateFancyListBox( hwindow parent, int x, int y, int width, int height );

prototype hwindow iGUI.CreateTitledTextBox( hwindow parent, string title_text, int column1_width, string column1_title, int column2_width, string column2_title, string text_resource );

prototype iGUI.SetCyclicControlFocusPath( list windows );

prototype hwindow iGUI.CreateAndInitialiseListBoxEntryComponentWindow( int x_offset, int width, int height, hwindow parent, string font, string name );

prototype iGUI.MakeInverseButtonIconic( hwindow window );

prototype iGUI.MakeRectangularInverseButtonIconic( hwindow window );

prototype iGUI.StartWindowFlashing( hwindow window );

prototype iGUI.StopWindowFlashing( hwindow window );

prototype iGUI.NullFunction();

prototype iGUI.OverlayCustomScreen( string setup_function );

// EOF /////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

RootWindow::RootWindow( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar2 = new wxMenuBar( 0 );
	Menu = new wxMenu();
	WczytywanieMenu = new wxMenu();
	wxMenuItem* WczytywanieMenuItem = new wxMenuItem( Menu, wxID_ANY, wxT("Wczytaj Dane"), wxEmptyString, wxITEM_NORMAL, WczytywanieMenu );
	#if (defined( __WXMSW__ ) || defined( __WXGTK__ ) || defined( __WXOSX__ ))
	WczytywanieMenuItem->SetBitmap( wxNullBitmap );
	#endif

	wxMenuItem* ZPliku;
	ZPliku = new wxMenuItem( WczytywanieMenu, wxID_ANY, wxString( wxT("Z Pliku") ) , wxEmptyString, wxITEM_NORMAL );
	WczytywanieMenu->Append( ZPliku );

	wxMenuItem* ZKlawiatury;
	ZKlawiatury = new wxMenuItem( WczytywanieMenu, wxID_ANY, wxString( wxT("Z Klawiatury") ) , wxEmptyString, wxITEM_NORMAL );
	WczytywanieMenu->Append( ZKlawiatury );

	Menu->Append( WczytywanieMenuItem );

	wxMenuItem* Zapis;
	Zapis = new wxMenuItem( Menu, wxID_ANY, wxString( wxT("Zapisz do pliku") ) , wxEmptyString, wxITEM_NORMAL );
	Menu->Append( Zapis );

	m_menubar2->Append( Menu, wxT("Menu") );

	this->SetMenuBar( m_menubar2 );

	wxBoxSizer* FullWindow;
	FullWindow = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* PanelSizer;
	PanelSizer = new wxBoxSizer( wxVERTICAL );

	PanelWykresu = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	PanelWykresu->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	PanelWykresu->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	PanelSizer->Add( PanelWykresu, 1, wxALL|wxEXPAND, 5 );


	FullWindow->Add( PanelSizer, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* PrzycskowySizer;
	PrzycskowySizer = new wxBoxSizer( wxVERTICAL );

	KolorWykresu = new wxButton( this, wxID_ANY, wxT("Kolor Wykresu"), wxDefaultPosition, wxDefaultSize, 0 );
	PrzycskowySizer->Add( KolorWykresu, 0, wxALIGN_CENTER|wxALL, 5 );

	KolorPunktow = new wxButton( this, wxID_ANY, wxT("Kolor Punktów"), wxDefaultPosition, wxDefaultSize, 0 );
	PrzycskowySizer->Add( KolorPunktow, 0, wxALIGN_CENTER|wxALL, 5 );

	Skalowanie = new wxStaticText( this, wxID_ANY, wxT("Skala wykresu:"), wxDefaultPosition, wxDefaultSize, 0 );
	Skalowanie->Wrap( -1 );
	PrzycskowySizer->Add( Skalowanie, 0, wxALIGN_CENTER|wxALL, 5 );

	SliderSkali = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	PrzycskowySizer->Add( SliderSkali, 0, wxALL, 5 );

	WielkoscPunktow = new wxStaticText( this, wxID_ANY, wxT("Wielkość Punktów"), wxDefaultPosition, wxDefaultSize, 0 );
	WielkoscPunktow->Wrap( -1 );
	PrzycskowySizer->Add( WielkoscPunktow, 0, wxALIGN_CENTER|wxALL, 5 );

	TextPunktow = new wxTextCtrl( this, wxID_ANY, wxT("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	PrzycskowySizer->Add( TextPunktow, 0, wxALIGN_CENTER|wxALL, 5 );

	SlupkiBledow = new wxRadioButton( this, wxID_ANY, wxT("Słupki Błędów"), wxDefaultPosition, wxDefaultSize, 0 );
	PrzycskowySizer->Add( SlupkiBledow, 0, wxALL, 5 );

	TypRegresji = new wxStaticText( this, wxID_ANY, wxT("Typ Regresji"), wxDefaultPosition, wxDefaultSize, 0 );
	TypRegresji->Wrap( -1 );
	PrzycskowySizer->Add( TypRegresji, 0, wxALIGN_CENTER|wxALL, 5 );

	m_comboBox1 = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBox1->Append( wxT("Liniowa") );
	m_comboBox1->Append( wxT("Nieliniowa") );
	m_comboBox1->Append( wxT("Ortogonalna") );
	m_comboBox1->SetSelection( 0 );
	PrzycskowySizer->Add( m_comboBox1, 0, wxALL, 5 );


	FullWindow->Add( PrzycskowySizer, 0, wxEXPAND, 5 );


	this->SetSizer( FullWindow );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_PAINT, wxPaintEventHandler( RootWindow::Draw ) );
	this->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( RootWindow::ReDraw ) );
	WczytywanieMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RootWindow::WczytajZPliku ), this, ZPliku->GetId());
	WczytywanieMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RootWindow::WczytajZKlawiatury ), this, ZKlawiatury->GetId());
	Menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( RootWindow::Zapisz ), this, Zapis->GetId());
	KolorWykresu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RootWindow::WybierzKolorWykresu ), NULL, this );
	KolorPunktow->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RootWindow::WybierzKolorPunktow ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	TextPunktow->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( RootWindow::ZmienWilekoscPunktow ), NULL, this );
	SlupkiBledow->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( RootWindow::WyswietlSlupkiBledow ), NULL, this );
	m_comboBox1->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( RootWindow::ZmienTypRegresji ), NULL, this );
}

RootWindow::~RootWindow()
{
	// Disconnect Events
	this->Disconnect( wxEVT_PAINT, wxPaintEventHandler( RootWindow::Draw ) );
	this->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( RootWindow::ReDraw ) );
	KolorWykresu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RootWindow::WybierzKolorWykresu ), NULL, this );
	KolorPunktow->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RootWindow::WybierzKolorPunktow ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	SliderSkali->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( RootWindow::ZmienSkale ), NULL, this );
	TextPunktow->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( RootWindow::ZmienWilekoscPunktow ), NULL, this );
	SlupkiBledow->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( RootWindow::WyswietlSlupkiBledow ), NULL, this );
	m_comboBox1->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( RootWindow::ZmienTypRegresji ), NULL, this );

}

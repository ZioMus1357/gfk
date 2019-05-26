///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/textctrl.h>
#include <wx/radiobut.h>
#include <wx/combobox.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class RootWindow
///////////////////////////////////////////////////////////////////////////////
class RootWindow : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar2;
		wxMenu* Menu;
		wxMenu* WczytywanieMenu;
		wxPanel* PanelWykresu;
		wxButton* KolorWykresu;
		wxButton* KolorPunktow;
		wxStaticText* Skalowanie;
		wxSlider* SliderSkali;
		wxStaticText* WielkoscPunktow;
		wxTextCtrl* TextPunktow;
		wxRadioButton* SlupkiBledow;
		wxStaticText* TypRegresji;
		wxComboBox* m_comboBox1;

		// Virtual event handlers, overide them in your derived class
		virtual void WczytajZPliku( wxCommandEvent& event ) { event.Skip(); }
		virtual void WczytajZKlawiatury( wxCommandEvent& event ) { event.Skip(); }
		virtual void Zapisz( wxCommandEvent& event ) { event.Skip(); }
		virtual void WybierzKolorWykresu( wxCommandEvent& event ) { event.Skip(); }
		virtual void WybierzKolorPunktow( wxCommandEvent& event ) { event.Skip(); }
		virtual void ZmienSkale( wxScrollEvent& event ) { event.Skip(); }
		virtual void ZmienWilekoscPunktow( wxCommandEvent& event ) { event.Skip(); }
		virtual void WyswietlSlupkiBledow( wxCommandEvent& event ) { event.Skip(); }
		virtual void ZmienTypRegresji( wxCommandEvent& event ) { event.Skip(); }


	public:

		RootWindow( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("TEST"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 875,577 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~RootWindow();

};


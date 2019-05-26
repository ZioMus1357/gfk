#ifndef __GUIRootWindow__
#define __GUIRootWindow__

/**
@file
Subclass of RootWindow, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

/** Implementing RootWindow */
class GUIRootWindow : public RootWindow
{
	protected:
		// Handlers for RootWindow events.
		void WczytajZPliku( wxCommandEvent& event );
		void WczytajZKlawiatury( wxCommandEvent& event );
		void Zapisz( wxCommandEvent& event );
		void WybierzKolorWykresu( wxCommandEvent& event );
		void WybierzKolorPunktow( wxCommandEvent& event );
		void ZmienSkale( wxScrollEvent& event );
		void ZmienWilekoscPunktow( wxCommandEvent& event );
		void WyswietlSlupkiBledow( wxCommandEvent& event );
		void ZmienTypRegresji( wxCommandEvent& event );
	public:
		/** Constructor */
		GUIRootWindow( wxWindow* parent );
	//// end generated class members


























};

#endif // __GUIRootWindow__

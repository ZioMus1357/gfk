#include "GUIRootWindow.h"

GUIRootWindow::GUIRootWindow( wxWindow* parent )
:
RootWindow( parent )
{
	KolorPunktow->SetLabel(_(L"Kolor Punkt\u00F3w"));
	WielkoscPunktow->SetLabel(_(L"Wielko\u015B\u0107 Punkt\u00F3w"));
	SlupkiBledow->SetLabel(_(L"S\u0142upki B\u0142\u0119d\u00F3w"));
}

void GUIRootWindow::WczytajZPliku( wxCommandEvent& event )
{
// TODO: Implement WczytajZPliku
}

void GUIRootWindow::WczytajZKlawiatury( wxCommandEvent& event )
{
// TODO: Implement WczytajZKlawiatury
}

void GUIRootWindow::Zapisz( wxCommandEvent& event )
{


}

void GUIRootWindow::WybierzKolorWykresu( wxCommandEvent& event )
{
// TODO: Implement WybierzKolorWykresu
}

void GUIRootWindow::WybierzKolorPunktow( wxCommandEvent& event )
{
// TODO: Implement WybierzKolorPunktow
}

void GUIRootWindow::ZmienSkale( wxScrollEvent& event )
{
// TODO: Implement ZmienSkale
}

void GUIRootWindow::ZmienWilekoscPunktow( wxCommandEvent& event )
{
// TODO: Implement ZmienWilekoscPunktow
}

void GUIRootWindow::WyswietlSlupkiBledow( wxCommandEvent& event )
{
// TODO: Implement WyswietlSlupkiBledow
}

void GUIRootWindow::ZmienTypRegresji( wxCommandEvent& event )
{
// TODO: Implement ZmienTypRegresji
}









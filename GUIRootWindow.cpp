#include "GUIRootWindow.h"
#include <wx/filedlg.h>
#include<wx/dcclient.h>
#include<wx/dcbuffer.h>
#include"Wektorek.h"
#include"Wykres.h"



GUIRootWindow::GUIRootWindow( wxWindow* parent )
:
RootWindow( parent )
{
	KolorPunktow->SetLabel(_(L"Kolor Punkt\u00F3w"));
	WielkoscPunktow->SetLabel(_(L"Wielko\u015B\u0107 Punkt\u00F3w"));
	SlupkiBledow->SetLabel(_(L"S\u0142upki B\u0142\u0119d\u00F3w"));
}

void GUIRootWindow::Draw( wxPaintEvent& event )
{
	wxClientDC __MyDC(PanelWykresu);
	m_buffer = wxBitmap(PanelWykresu->GetSize().x, PanelWykresu->GetSize().y);
	wxBufferedDC MyDC(&__MyDC, m_buffer);

	MyDC.SetBackground(*wxWHITE_BRUSH);
	MyDC.Clear();
	int w, h;
	PanelWykresu->GetSize(&w, &h);
	Wykres chart(0,w,0,h,w,h);
	chart.DrawAxies(&MyDC);
	chart.DrawPoints(&MyDC);
	

		
}

void GUIRootWindow::ReDraw( wxUpdateUIEvent& event )
{
// TODO: Implement ReDraw
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

wxFileDialog saveFileDialog(this, "Choose a file", "", "","JPG files (*.jpg)|*.jpg|PNG files (*.png)|*.png", wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
if (saveFileDialog.ShowModal() == wxID_CANCEL)
return;
m_image = m_buffer.ConvertToImage();
m_image.AddHandler(new wxJPEGHandler);
m_image.AddHandler(new wxPNGHandler);
m_image.SaveFile(saveFileDialog.GetPath());

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












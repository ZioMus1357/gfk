#include "GUIMyFrame1.h"
#include"ChartClass.h"
#include"ConfigClass.h"
#include <wx/colordlg.h>

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
	cfg = std::make_shared<ConfigClass>(this);
	chart = new ChartClass(cfg);
}

void GUIMyFrame1::MainFormClose( wxCloseEvent& event )
{
	Destroy();
}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
	Repaint();
}

void GUIMyFrame1::ChangeChartColor(wxCommandEvent& event)
{
	wxColourDialog ColorPicker(this);

	if (ColorPicker.ShowModal() == wxID_OK) 
	{
		chart->SetChartColor(ColorPicker.GetColourData().GetColour());
		Repaint();
	}
}

void GUIMyFrame1::ChangePointColor( wxCommandEvent& event )
{
	wxColourDialog ColorPicker(this);

	if (ColorPicker.ShowModal() == wxID_OK)
	{
		chart->SetPointColor(ColorPicker.GetColourData().GetColour());
		Repaint();
	}
}

void GUIMyFrame1::ChangeScale(wxScrollEvent& event)
{
	cfg->scale = m_slider1->GetValue() +10;
	cfg->scale /= 100;
	Repaint();
}

void GUIMyFrame1::ChangePointSize( wxCommandEvent& event )
{
// TODO: Implement ChangePointSize
}

void GUIMyFrame1::AddError( wxCommandEvent& event )
{
// TODO: Implement AddError
}

void GUIMyFrame1::ChangeRegresionType( wxCommandEvent& event )
{
// TODO: Implement ChangeRegresionType
}

void GUIMyFrame1::OpenFormFile( wxCommandEvent& event )
{
	wxFileDialog WxOpenFileDialog(this, _("Choose a file"), _(""), _(""), _("config files (*.txt)|*.txt"), wxFD_OPEN);

	if (WxOpenFileDialog.ShowModal() == wxID_OK) 
		chart->data.AddFromFile((const_cast<char*>((const char*)WxOpenFileDialog.GetPath().mb_str())));

	Repaint();

}

void GUIMyFrame1::OpenFromKeyboard( wxCommandEvent& event )
{
// TODO: Implement OpenFromKeyboard
}

void GUIMyFrame1::Save( wxCommandEvent& event )
{
	wxFileDialog saveFileDialog(this, "Choose a file", "", "", "JPG files (*.jpg)|*.jpg|PNG files (*.png)|*.png", wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
	if (saveFileDialog.ShowModal() == wxID_CANCEL)
		return;
	m_image = m_buffer.ConvertToImage();
	m_image.AddHandler(new wxJPEGHandler);
	m_image.AddHandler(new wxPNGHandler);
	m_image.SaveFile(saveFileDialog.GetPath());
}


GUIMyFrame1::~GUIMyFrame1()
{

}

void GUIMyFrame1::Repaint()
{
	wxClientDC __MyDC(WxPanel);
	m_buffer = wxBitmap(WxPanel->GetSize().x, WxPanel->GetSize().y);
	wxBufferedDC MyDC(&__MyDC, m_buffer);

	 //ChartClass MyChart(cfg);
	 int w, h;
	 WxPanel->GetSize(&w, &h);
	 chart->Draw(&MyDC, w, h);
}


void GUIMyFrame1::UpdateControls()
{

}
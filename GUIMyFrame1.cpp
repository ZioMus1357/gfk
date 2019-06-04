#include "GUIMyFrame1.h"
#include "ConfigClass.h"
#include "ChartClass.h"


GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
	cfg = std::make_shared<ConfigClass>(this);
}

void GUIMyFrame1::MainFormClose( wxCloseEvent& event )
{
 Destroy();
}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
 Repaint();
}

void GUIMyFrame1::ChangeChartColor( wxCommandEvent& event )
{
// TODO: Implement ChangeChartColor
}

void GUIMyFrame1::ChangePointColor( wxCommandEvent& event )
{
// TODO: Implement ChangePointColor
}

void GUIMyFrame1::ChangeScale( wxScrollEvent& event )
{
// TODO: Implement ChangeScale
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



void GUIMyFrame1::UpdateControls()
{

}

void GUIMyFrame1::Repaint()
{
 wxClientDC dc1(WxPanel);
 wxBufferedDC dc(&dc1);

 ChartClass MyChart(cfg);
 int w, h;
 WxPanel->GetSize(&w, &h);
 MyChart.Draw(&dc, w, h);
}

GUIMyFrame1::~GUIMyFrame1()
{

}
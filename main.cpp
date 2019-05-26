#include <wx/wx.h>
#include "GUIRootWindow.h"

class MyApp : public wxApp {

public:

	virtual bool OnInit();
	virtual int OnExit() { return 0; }

};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	wxFrame *mainFrame = new GUIRootWindow(NULL);
	mainFrame->Show(true);
	return true;
}
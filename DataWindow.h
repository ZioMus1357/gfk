#pragma once
#include"GUIMyFrame1.h"

class DataWindow : public wxFrame {
private:

public:
	wxStaticText* OpisOkna;
	wxTextCtrl* WpiszX;
	wxTextCtrl* WpiszY;
	wxButton* Dodaj;
	void AddData(wxCommandEvent& event);
	DataWindow(GUIMyFrame1* parent);
	GUIMyFrame1* ojciec;

};
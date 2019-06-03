#pragma once
#include<wx/dc.h>
#include<wx/dcclient.h>
#include<wx/dcbuffer.h>
#include "Wektorek.h"

class Wykres {
private:
	// Zakres zmiennych x i y
	double x_min, x_max, y_min, y_max;
	
	//WskaŸnik do przechowywania danych
	double *data_;

	//Wspó³czynniki dopasowanej prostej:
	double a_, b_;

	//Macierz transforamcji:
	Matrix trans;

	//Szerokosc i wysokosc wykresu
	int w, h;

public:
	Wykres(double xmin, double xmax, double ymin, double ymax)
		:x_min(xmin), x_max(xmax), y_min(ymin), y_max(ymax), a_(0.), b_(0.) {
		data_ = new double[4];
		data_[0] = 1.;
		data_[1] = 1.;
		data_[2] = 2.;
		data_[3] = 2.;
	};
	void DrawPoints(wxDC *dc, int w, int h);  // Rysuje punkty
	void DrawAxies(wxBufferedDC  *dc); // Rysuje osie
	void SetTransform(); // Ustawia macierz transormacji,  z kartezjanskiego na ekran i skalowanie
	wxPoint Transform(double x, double y); // Transformuje punkt zgodnie z macierz¹ transfoirmacji


	~Wykres() {
		delete[] data_;
	}
};

#pragma once
#include<wx/dc.h>
#include<wx/dcclient.h>
#include<wx/dcbuffer.h>
#include "Wektorek.h"

class Wykres {
private:
	// Zakres zmiennych x i y
	double x_min, x_max, y_min, y_max;
	
	//Wska�nik do przechowywania danych
	double *data_;

	//Wsp�czynniki dopasowanej prostej:
	double a_, b_;

	//Macierz transforamcji:
	Matrix trans;

	//Szerokosc i wysokosc wykresu
	int w_, h_;

public:
	Wykres(double xmin, double xmax, double ymin, double ymax, double w, double h)
		:x_min(xmin), x_max(xmax), y_min(ymin), y_max(ymax), a_(0.), b_(0.), h_(h), w_(w) {
		data_ = new double[4];
		data_[0] = 1.;
		data_[1] = 1.;
		data_[2] = 120.;
		data_[3] = 100.;
	};
	void DrawPoints(wxDC *dc);  // Rysuje punkty
	void DrawAxies(wxDC  *dc); // Rysuje osie
	void SetTransform(); // Ustawia macierz transormacji,  z kartezjanskiego na ekran i skalowanie
	wxPoint Transform(double x, double y); // Transformuje punkt zgodnie z macierz� transfoirmacji


	~Wykres() {
		delete[] data_;
	}
};

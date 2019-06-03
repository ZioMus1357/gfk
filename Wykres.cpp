#include"Wykres.h"

void Wykres::SetTransform() {
	double x0 = -1.0, 	y0 = -2.0,	x1 = 1.0,	y1 = 2.0;
	Matrix transform; // transformata z uk³adu kartezjañskiego na uk³ad ekranu
	transform.data[0][0] = w / (x1 - x0);
	transform.data[1][1] = h / (y1 - y0 * -1.0);
	transform.data[0][2] = -(x0 * transform.data[0][0] - 10);
	transform.data[1][2] = -(y1 * transform.data[1][1] + 10);

	trans = trans * transform;
}


wxPoint Wykres::Transform(double x, double y) {
	Vector vector;
	vector.Set(x, y);
	vector = trans * vector;
	return wxPoint(vector.GetX(), vector.GetY());
}

void Wykres::DrawAxies(wxBufferedDC  *dc) {
	dc->DrawLine(wxPoint(x_min, (y_max - y_min)/2), wxPoint(x_max, (y_max - y_min)/2));
	dc->DrawLine(wxPoint((x_max - x_min) / 2, y_min), wxPoint((x_max - x_min) / 2, y_max));
	dc->DrawLine(wxPoint((x_max - x_min) / 2 -  10, y_min + 10), wxPoint((x_max - x_min) / 2, y_min));
	dc->DrawLine(wxPoint((x_max - x_min) / 2 + 10, y_min + 10), wxPoint((x_max - x_min) / 2, y_min));
	dc->DrawLine(wxPoint(x_max - 10, (y_max - y_min) / 2 + 10), wxPoint(x_max, (y_max - y_min) / 2));
	dc->DrawLine(wxPoint(x_max - 10, (y_max - y_min) / 2 - 10), wxPoint(x_max, (y_max - y_min) / 2));
}
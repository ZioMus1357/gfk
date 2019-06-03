#include"Wykres.h"

void Wykres::SetTransform() {
	double x0 = -1.0, 	y0 =0.,	x1 = 1,	y1 = 1.0;
	Matrix transform; // transformata z uk³adu kartezjañskiego na uk³ad ekranu
	transform.data[0][0] = (x_max - x_min) / (x1 - x0);
	transform.data[1][1] = (y_max -y_min) / (y1 - y0 );
	transform.data[2][2] = 1;
	transform.data[0][2] =x_min -(x0 * transform.data[0][0] );
	transform.data[1][2] =y_min -(y1 * transform.data[1][1] );

	trans = transform;
}


wxPoint Wykres::Transform(double x, double y) {
	return wxPoint(x + w_/2, -y + h_/2);
}

void Wykres::DrawAxies(wxDC  *dc) {
	dc->DrawLine(wxPoint(x_min, (y_max - y_min)/2), wxPoint(x_max, (y_max - y_min)/2));
	dc->DrawLine(wxPoint((x_max - x_min) / 2, y_min), wxPoint((x_max - x_min) / 2, y_max));
	dc->DrawLine(wxPoint((x_max - x_min) / 2 -  10, y_min + 10), wxPoint((x_max - x_min) / 2, y_min));
	dc->DrawLine(wxPoint((x_max - x_min) / 2 + 10, y_min + 10), wxPoint((x_max - x_min) / 2, y_min));
	dc->DrawLine(wxPoint(x_max - 10, (y_max - y_min) / 2 + 10), wxPoint(x_max, (y_max - y_min) / 2));
	dc->DrawLine(wxPoint(x_max - 10, (y_max - y_min) / 2 - 10), wxPoint(x_max, (y_max - y_min) / 2));
}


void Wykres::DrawPoints(wxDC *dc) {
	
	dc->DrawPoint(Transform(data_[0], data_[1]));

	dc->DrawCircle(Transform(data_[2], data_[3]),10);
}
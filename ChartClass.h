#ifndef __ChartClass__
#define __ChartClass__

#include <memory>
#include "ConfigClass.h"
#include"vecmat.h"
#include"Container.h"
class Matrix;

class ChartClass
{
    private:
        std::shared_ptr<ConfigClass> cfg;
		int	width, height;  // szerokosc i wysokosc ekranu
        double x_min,x_max; // zakres zmiennej x
        double y_min,y_max; // zakres wartosci przyjmowanych przez funkcje
		Matrix tr;
        wxPoint point2d(Matrix t,double x1,double y1);
		void DrawAxies(wxDC *dc);
		void DrawPoints(wxDC *dc);
		void DrawLine(wxDC * dc);
       
    public:
		Container data;
        ChartClass(std::shared_ptr<ConfigClass> c);
        void Set_Range();   // ustala wartosci zmiennych x_min,y_min,x_max,y_max
        double Get_Y_min(); // zwraca y_min
        double Get_Y_max(); // zwraca y_max
        void Draw(wxDC *dc, int w, int h);  // rysuje wykres
		void SetTransform(); //ustawia macierz transformacji
};

#endif

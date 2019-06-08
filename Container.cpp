#include "Container.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void Container::RegresjaLiniowa() 
{
	double sumX = 0, sumY = 0, srX, srY, tmp1 = 0, tmp2 = 0;
	for (int i = 0; i < n; ++i) 
	{
		sumX += Table[2 * i];
		sumY += Table[2 * i + 1];
	}
	srX = sumX / n;
	srY = sumY / n;
	for (int i = 0; i < n; ++i) 
	{
		tmp1 += (Table[2 * i] - srX) * (Table[2 * i + 1] - srY);
		tmp2 += (Table[2 * i] - srX) * (Table[2 * i] - srX);
	}
	parA = tmp1 / tmp2;
	parB = srY - parA * srX;
}

void Container::BladLiniowej() 
{
	eLin = new double[n];
	double sumE = 0;
	for (int i = 0; i < n; ++i) 
	{
		eLin[i] = Table[2 * i + 1] - (parB * Table[2 * i] + parA);
		sumE += eLin[i] * eLin[i];
	}
	errLin = sqrt(sumE / (n - 2.));
}

void Container::AddCords(double xCord, double yCord) 
{
	if (n == 0) 
	{
		n++;
		Table = new double[2 * n];
		Table[0] = xCord;
		Table[1] = yCord;
		xMin = xMax = xCord;
		yMin = yMax = yCord;
	}
	else 
	{
		n++;
		double *newTab = new double[2 * n];
		for (int i = 0; i < 2 * (n - 1); ++i) 
		{
			newTab[i] = Table[i];
		}
		newTab[2 * n - 2] = xCord;
		newTab[2 * n - 1] = yCord;
		if (xCord > xMax) xMax = xCord;
		if (xCord < xMin) xMin = xCord;
		if (yCord > yMax) yMax = yCord;
		if (yCord < yMin) yMin = yCord;
		delete[] Table;
		Table = newTab;
	}
}

void Container::AddFromFile(char* filename)
{
	double x, y;
	ifstream file;
	file.open(filename, ios::in);
	if (file.is_open())
	{
		while (!file.eof()) 
		{
			file >> x >> y;
			this->AddCords(x, y);
		}
		file.close();
	}
}

Container::~Container() 
{
	delete[] Table;
	delete[] eLin;
}

#pragma once

#include<iostream>

class Container {
public:

	void AddCords(double xCord, double yCord);

	void AddFromFile(char* filename);

	void BladLiniowej();

	void RegresjaLiniowa();

	~Container();
	//tabel z wspolrzednymi
	double * Table;
	//ilosc punktow
	int n = 0;
	//paramert a regresji liniowej
	double parA;
	//parametr b regresji liniowej
	double parB;
	//blad regresji liniowej
	double errLin;
	//bledy pojedynczych pomiarow w liniowej
	double * eLin;

	double xMin;

	double xMax;

	double yMin;

	double yMax;
};
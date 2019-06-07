#pragma once

#include<iostream>

class Container {
public:

	Container();

	void AddCords(double xCord, double yCord);

	void AddFromFile(char* filename);

	void BladLiniowej();

	void RegresjaLiniowa();

	void RegresjaNieLiniowa();

	~Container();
	//tabela z wspolrzednymi
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
	//tabela z wspolczynnikami regresji nie liniowej
	double * NLpar;

	double xMin;

	double xMax;

	double yMin;

	double yMax;
};
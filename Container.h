#pragma once

#include<iostream>

class Container {
public:
	//    Container(); raczej nie potrzebne 

	void AddCords(double xCord, double yCord);

	void AddFromFile(std::ifstream file);
	/*  w sumie to mozna wszystko na public zrobic i jebac getery
		double GetXmin();

		double GetXmax();

		double GetYmin();

		double GetYmax();
	*/
	void RegresjaLiniowa();

	~Container();
	//private:

	double * Table;

	int n = 0;

	double parA;

	double parB;

	double xMin;

	double xMax;

	double yMin;

	double yMax;
};
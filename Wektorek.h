#pragma once

class Vector
{
public:
	double data[3];

	Vector() {
		data[0] = 0.0; data[1] = 0.0; data[3] = 1.;
	}

	void Set(double d1, double d2) {
		data[0] = d1; data[1] = d2;
	}

	double GetX() {
		return data[0];
	}
	double GetY() {
		return data[1];
	}
};

class Matrix
{
public:
	double data[3][3];
	Matrix() {
		data[0][0] = 0.0; data[0][1] = 0.0; data[0][2] = 0.0;
		data[1][0] = 0.0; data[1][1] = 0.0; data[1][2] = 0.0;
		data[2][0] = 0.0; data[2][1] = 0.0; data[2][2] = 1.0;
	}
	Matrix operator*(const Matrix next) {
		Matrix tmp;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				tmp.data[i][j] = 0.0;
				for (int k = 0; k < 3; k++)
					tmp.data[i][j] += (data[i][k] * next.data[k][j]);
			}
		return tmp;
	}

	Vector operator*(const Vector next) {
		unsigned int i, j;
		Vector tmp;

		for (i = 0; i < 3; i++)
		{
			tmp.data[i] = 0.0;
			for (j = 0; j < 3; j++) tmp.data[i] = tmp.data[i] + (data[i][j] * next.data[j]);
		}
		return tmp;
	}
};


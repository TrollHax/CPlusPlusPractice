#pragma once

#include "cShape.h"
class cTriangle : cShape
{
private:


public:
	cTriangle(double _len);
	cTriangle(double _len1, double _len2);
	cTriangle(double _len1, double _len2, double _len3);
	~cTriangle();

	float CalcCirc();
	float CalcArea();
};


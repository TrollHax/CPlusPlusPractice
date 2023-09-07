#pragma once

#include "cShape.h"
class cRect : cShape
{
private:


public:
	cRect(double _len);
	cRect(double _len1, double _len2);
	~cRect();

	float CalcCirc();
	float CalcArea();
};


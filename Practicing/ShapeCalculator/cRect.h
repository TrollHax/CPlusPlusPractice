#pragma once

#include "cShape.h"
class cRect : public cShape
{
private:


public:
	cRect(double _len);
	cRect(double _len1, double _len2);
	~cRect();

	double CalcCirc();
	double CalcArea();
};


#pragma once

#include <math.h>
#include <iostream>
class cShape
{
private:


protected:
	double m_len1;
	double m_len2;
	double m_len3;
	double m_len4;
	double m_radius;
	double m_pi;

public:
	cShape(double _len1, double _len2);
	cShape(double _len1, double _len2, double _len3);
	cShape(double _len1, double _len2, double _len3, double _len4);
	cShape(double _radius);
	~cShape();

	std::string CheckType();
	virtual double CalcCirc() = 0;
	virtual double CalcArea() = 0;
};


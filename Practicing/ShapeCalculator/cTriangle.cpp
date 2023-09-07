#include "cTriangle.h"

cTriangle::cTriangle(double _len):
	cShape(_len, _len, _len)
{
}

cTriangle::cTriangle(double _len1, double _len2):
	cShape(_len1, _len1, _len2)
{
}

cTriangle::cTriangle(double _len1, double _len2, double _len3):
	cShape(_len1, _len2, _len3)
{
}

cTriangle::~cTriangle()
{
}

float cTriangle::CalcCirc()
{
	return 0;
}

float cTriangle::CalcArea()
{
	double s = 0;
	double area = 0;
	s = (m_len1 + m_len2 + m_len3) / 2;
	area = sqrt(s * ((s - m_len1) * (s - m_len2) * (s - m_len3)));
	return area;
}
#include "cRect.h"

cRect::cRect(double _len):
	cShape(_len, _len, _len, _len)
{
}

cRect::cRect(double _len1, double _len2) :
	cShape(_len1, _len2, _len1, _len2)
{
}

cRect::~cRect()
{
}

float cRect::CalcCirc()
{
	int circumferance = 0;
	circumferance = m_len1 + m_len2 + m_len3 + m_len4;
	return circumferance;
}

float cRect::CalcArea()
{
	int area = 0;
	area = m_len1 * m_len2;
	return area;
}
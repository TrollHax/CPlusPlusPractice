#include "cShape.h"

cShape::cShape(double _len1, double _len2) :
	m_len1(0),
	m_len2(0),
	m_len3(0),
	m_len4(0),
	m_radius(0),
	m_pi(3.14159265359)
{
	m_len1 = _len1;
	m_len2 = _len2;
}

cShape::cShape(double _len1, double _len2, double _len3) :
	m_len1(0),
	m_len2(0),
	m_len3(0),
	m_len4(0),
	m_radius(0),
	m_pi(3.14159265359)
{
	m_len1 = _len1;
	m_len2 = _len2;
	m_len3 = _len3;
}

cShape::cShape(double _len1, double _len2, double _len3, double _len4) :
	m_len1(0),
	m_len2(0),
	m_len3(0),
	m_len4(0),
	m_radius(0),
	m_pi(3.14159265359)
{
	m_len1 = _len1;
	m_len2 = _len2;
	m_len3 = _len3;
	m_len4 = _len4;
}

cShape::cShape(double _radius) :
	m_len1(0),
	m_len2(0),
	m_len3(0),
	m_len4(0),
	m_radius(0),
	m_pi(3.14159265359)
{
	m_radius = _radius;
}

cShape::~cShape()
{
}
#include "point.h"


#pragma region Opérateur +

point point::operator+(const point& n) const
{
	point p;
	p.x = x + n.x;
	p.y = y + n.y;
	return p;
}


#pragma endregion

#pragma region Opérateur -

point point::operator-(const point& n) const
{
	point p;
	p.x = x - n.x;
	p.y = y - n.y;
	return p;
}
#pragma endregion

#pragma region Opérateur +=

point point::operator+=(const point& n)
{
	this->x += n.x;
	this->y += n.y;

	return *this;
}

#pragma endregion

#pragma region Opérateur -=

point point::operator-=(const point& n)
{
	this->x -= n.x;
	this->y -= n.y;

	return *this;
}
#pragma endregion

#pragma region Opérateur *=

point point::operator*=(const point& n)
{
	this->x *= n.x;
	this->y *= n.y;

	return *this;
}
#pragma endregion

#pragma region Opérateur /=

point point::operator/=(const point& n)
{
	if (n.x != 0)
		this->x /= n.x;
	if (n.y != 0)
		this->y /= n.y;

	return *this;
}

#pragma endregion

#pragma region Opérateur ==

bool operator==(point const& n, point const& m)
{
	bool boolean = false;
	if (n.x == m.x && n.y == m.y) { boolean = true; };
	return boolean;
}
#pragma endregion

#pragma region Opérateur !=

bool operator!=(point const& n, point const& m)
{
	bool boolean = false;
	if (n.x != m.x || n.y != m.y) { boolean = true; };
	return boolean;
}
#pragma endregion

#pragma region Opérateur =

point point::operator=(const point& a)
{
	this->x = a.x;
	this->y = a.y;
	return *this;
}

#pragma endregion

ostream& operator << (ostream& os, const point& mp)
{
	return os << mp.x << " " << mp.y;
}

istream& operator >> (istream& is, point& mp)
{
	return is >> mp.x >> mp.y;
}

point::~point()
{
}

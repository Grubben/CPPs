#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float f1, const float f2) : x(f1), y(f2)
{
}

Point::Point( const Point& point)
{
	(*this) = point;
}
Point::~Point()
{
}


Point&	Point::operator=(const Point& point)
{
	std::cout << "Copy assignment operator called" << std::endl;
	x = point.x;
	y = point.y;
	return (*this);
}
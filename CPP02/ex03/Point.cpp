#include "Point.hpp"

Point::Point(void)
	: x(0)
	, y(0)
{
}

Point::Point(const float f1, const float f2)
	: x(f1)
	, y(f2)
{
}

Point::Point( const Point& point)
	: x(point.x)
	, y(point.y)
{
}

Point::~Point()
{
}


Point&	Point::operator=(const Point& point)
{
	std::cout << "Point:Copy assignment operator called" << std::endl;
	std::cout << "What should I do??" << std::endl;
	// x = point.x;
	// y = point.y;
	(void)point;
	return (*this);
}
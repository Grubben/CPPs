#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point(void);
	Point(const float f1, const float f2);
	Point( const Point& point);
	~Point();

	Point&	operator=(const Point& point);
};
#include "Fixed.hpp"
#include <iostream>
#include <cmath>
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	num = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed; 
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	num = n << fracBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf(f * (1 << fracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed	& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	num = fixed.num;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	tmp = num + fixed.num;
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	tmp = num - fixed.num;
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	tmp = num * fixed.num;
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	tmp = num / fixed.num;
	return tmp;
}


Fixed	& Fixed::operator--()
{
	num -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

Fixed	& Fixed::operator++()
{
	num += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}


bool	Fixed::operator>(const Fixed fixed)
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator>=(const Fixed fixed)
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<(const Fixed fixed)
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator<=(const Fixed fixed)
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(const Fixed fixed)
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(const Fixed fixed)
{
	return (this->toFloat() != fixed.toFloat());
}


std::ostream	& operator<<(std::ostream &os, const Fixed &obj)
{
	return (os << obj.toFloat());
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(num) / (float)(1 << fracBits));
}

int		Fixed::toInt(void) const
{
	return (num >> fracBits);
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 <= f2) ? f1 : f2;
}
const Fixed&	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return ((Fixed &)f1 <= f2) ? f1 : f2;
}
Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 >= f2) ? f1 : f2;
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return ((Fixed &)f1 >= f2) ? f1 : f2;
}


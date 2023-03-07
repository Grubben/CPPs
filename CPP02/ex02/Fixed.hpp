#include <iostream>
class Fixed
{
private:
	int					num;
	static const int	fracBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed();

	Fixed&			operator= (const Fixed &fixed);
	
	Fixed			operator+(const Fixed &fixed);
	Fixed			operator-(const Fixed &fixed);
	Fixed			operator*(const Fixed &fixed);
	Fixed			operator/(const Fixed &fixed);

	Fixed&			operator--();
	Fixed			operator--(int);
	Fixed&			operator++();
	Fixed			operator++(int);

	bool			operator>(const Fixed fixed);
	bool			operator>=(const Fixed fixed);
	bool			operator<(const Fixed fixed);
	bool			operator<=(const Fixed fixed);
	bool			operator==(const Fixed fixed);
	bool			operator!=(const Fixed fixed);
	
	friend std::ostream& operator<<(std::ostream &os, const Fixed &obj);

	int				getRawBits(void) const;
	void			setRawBits(int const raw);

	float			toFloat(void) const;
	int				toInt(void) const;

	static Fixed&	min(Fixed &f1, Fixed &f2);
	static const Fixed&	min(const Fixed &f1, const Fixed &f2);
	static Fixed&	max(Fixed &f1, Fixed &f2);
	static const Fixed&	max(const Fixed &f1, const Fixed &f2);
	
};

class Fixed
{
private:
	int					num;
	static const int	fracBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed & operator= (const Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

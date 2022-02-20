#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed			&operator= (const Fixed &other)
		int				getRawBits(void) const;
		void			setRawBits(int const nNum);
		float			toFloat(void) const;
		int				toInt(void) const;

		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
	private:
		static const int	raw;
		int					num;
};

std::ostream	&operator<< (std::ostream &out, const Fixed &value);
Fixed& Fixed::min(Fixed &a, Fixed &b);
Fixed& Fixed::max(Fixed &a, Fixed &b);
const Fixed &Fixed::min(Fixed const &a, Fixed const &b);
const Fixed &Fixed::max(Fixed const &a, Fixed const &b);
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed &other);
		virtual ~Fixed();

		Fixed			&operator= (const Fixed &other);
		int				getRawBits(void) const;
		void			setRawBits(int const nNum);
		float			toFloat(void) const;
		int				toInt(void) const;
	private:
		static const int	raw;
		int					num;
};

std::ostream	&operator<< (std::ostream &out, const Fixed &value);

#endif
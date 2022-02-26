#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &other);
		virtual ~Fixed();

		Fixed	&operator= (const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const nNum);
	private:
		static const int	raw;
		int					num;
};

#endif
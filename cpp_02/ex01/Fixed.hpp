#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();

		Fixed	&operator= (const Fixed &other)
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		static const int	raw;
		int					num;
};
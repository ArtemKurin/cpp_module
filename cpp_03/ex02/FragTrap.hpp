#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		virtual ~FragTrap();

		FragTrap 		&operator= (FragTrap &other);
		void			highFivesGuys(void);
};

#endif
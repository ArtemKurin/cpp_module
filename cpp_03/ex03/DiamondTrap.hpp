#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	protected:
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &other);
		virtual ~DiamondTrap();

		DiamondTrap 		&operator= (DiamondTrap &other);
		void				attack(std::string &target);
		void				whoAmI();
};

#endif
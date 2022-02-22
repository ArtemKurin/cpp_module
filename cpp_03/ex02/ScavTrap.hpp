#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &other);
		virtual ~ScavTrap();

		virtual void	attack(const std::string& target);
		void			guardGate();
		ScavTrap 		&operator= (ScavTrap &other);
};

#endif
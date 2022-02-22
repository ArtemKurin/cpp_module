#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		virtual ~ClapTrap();

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap 		&operator= (ClapTrap &other);

	protected:
		ClapTrap();
		std::string		name;
		unsigned int	energyPoint;
		unsigned int	hitPoint;
		unsigned int	attackDamage;
};

#endif
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string const &name);
		HumanA(std::string const &name, const Weapon &weapon);
		~HumanA(void);
		void	attack();
		void	setWeapon(const Weapon &weapon);
	private:
		std::string	name;
		const Weapon		*weapon;
};

#endif
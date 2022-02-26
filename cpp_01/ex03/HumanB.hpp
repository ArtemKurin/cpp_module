#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		public:
		HumanB();
		HumanB(std::string const &name);
		virtual ~HumanB(void);
		void	attack() const;
		void	setWeapon(const Weapon &weapon);
	private:
		std::string	name;
		const Weapon		*weapon;
};

#endif
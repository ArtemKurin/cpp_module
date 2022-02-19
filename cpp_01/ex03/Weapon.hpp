#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	public:
		Weapon();
		Weapon(std::string n_type);
		~Weapon(void);
		std::string	getType(void) const;
		void		setType(std::string const &n_type);
	private:
		std::string	type;
};

#endif
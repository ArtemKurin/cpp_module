#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &other);
		virtual ~WrongCat();

		virtual void	makeSound() const;
		WrongCat 		&operator= (const WrongCat &other);
};

#endif
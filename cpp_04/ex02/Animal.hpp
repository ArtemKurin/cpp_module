#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(Animal const &other);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		std::string		getType() const;
		virtual Animal 	&operator= (const Animal &other);

	protected:
		std::string		type;
};

#endif
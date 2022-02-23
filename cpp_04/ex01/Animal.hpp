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

		virtual void	makeSound() const;
		virtual Brain	*getBrain() const;
		std::string		getType() const;
		Animal 		&operator= (const Animal &other);

	protected:
		std::string		type;
		Brain	*brain;
};

#endif
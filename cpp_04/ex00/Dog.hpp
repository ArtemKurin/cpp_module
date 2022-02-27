#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &other);
		virtual ~Dog();

		virtual void	makeSound() const;
		Dog 		&operator= (const Dog &other);
};

#endif
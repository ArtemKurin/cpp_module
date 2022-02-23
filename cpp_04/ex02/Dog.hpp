#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &other);
		virtual ~Dog();

		void	makeSound() const;
		Dog 		&operator= (const Dog &other);
		Brain	*getBrain() const;
		
	private:
		Brain	*brain;
};

#endif
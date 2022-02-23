#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &other);
		virtual ~Cat();

		void	makeSound() const;
		Brain	*getBrain() const;
		Cat 		&operator= (const Cat &other);
	
	private:
		Brain	*brain;
};

#endif
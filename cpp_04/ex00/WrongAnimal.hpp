#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		virtual ~WrongAnimal();

		virtual void	makeSound() const;
		std::string		getType() const;
		WrongAnimal 		&operator= (const WrongAnimal &other);

	protected:
		std::string		type;
};

#endif
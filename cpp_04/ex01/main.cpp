#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta[100];
	
	
	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}

	/*--------------------*/
	/*-----Test ideas-----*/
	/*--------------------*/

	std::cout << "\n----------Test ideas :----------\n" << std::endl;
	{
		Cat cat;
		Brain *br = cat.getBrain();
		for (int i = 0; i < 100; i++)
			br->printIdeas(i);
	}

	std::cout << "\n----------Test operator = :----------\n" << std::endl;

	{
		Dog basic;
		Dog tmp;
		tmp = basic;
		tmp.getBrain()->printIdeas(2);
		basic.getBrain()->printIdeas(2);
	}

	std::cout << "\n----------Test constructor copy :----------\n" << std::endl;

	{
		Cat ba;
		Cat clon(ba);
		ba.getBrain()->printIdeas(2);
		clon.getBrain()->printIdeas(2);
		ba.getBrain()->printIdeas(2);
		clon.getBrain()->printIdeas(2);
	}

	/*------------------------------*/
	/*---Test Sound---Delete objs---*/
	/*------------------------------*/

	std::cout << "\n----------Test Sound---Delete objs :----------\n" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "\t\t\t" << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		delete meta[i];
	}
	return 0;
}
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

	Brain *br = meta[3]->getBrain();
	for (int i = 0; i < 100; i++)
		br->printIdeas(i);
	
	/*------------------------------*/
	/*---Test Sound---Delete objs---*/
	/*------------------------------*/

	for (int i = 0; i < 6; i++)
	{
		std::cout << "\t\t\t" << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		delete meta[i];
	}
	return 0;
}
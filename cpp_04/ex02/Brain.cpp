#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << i;
		this->calledIdeas[i] = "Idea no. " + ss.str();
	}
	std::cout << "Constructor\t\t Brain\t\t called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	for (int i = 0; i < 100; i++)
		this->calledIdeas[i] = other.calledIdeas[i];
}

Brain::~Brain()
{
	std::cout << "Destructor\t\t Brain\t\t called" << std::endl;
}

void	Brain::printIdeas(int i) const
{
	if (i > -1 && i < 100)
		std::cout << this->calledIdeas[i] << std::endl;
	else
		std::cout << "Brain : bad index" << std::endl;
}

Brain	&Brain::operator= (const Brain &other)
{
	return (*this);
}
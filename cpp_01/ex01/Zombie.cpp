#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{

}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiiiiiinnnnzzzZ..." << std::endl;
}
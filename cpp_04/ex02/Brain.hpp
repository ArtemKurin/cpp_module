#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <sstream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &other);
		virtual ~Brain();

		Brain 		&operator= (const Brain &other);
		void		printIdeas(int i) const;

	protected:
		std::string		calledIdeas[100];
};

#endif
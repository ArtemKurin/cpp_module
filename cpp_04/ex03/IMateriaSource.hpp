#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
#include <iostream>
#include <string>

class IMateriaSource
{
	public:
		IMateriaSource();
		IMateriaSource(IMateriaSource const &other);
		virtual ~IMateriaSource();

		virtual IMateriaSource 	&operator= (const IMateriaSource &other);

	protected:

};

#endif
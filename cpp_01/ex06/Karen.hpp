#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen {
	public:
		Karen();
		virtual ~Karen(void);
		void	complain(std::string lvl);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
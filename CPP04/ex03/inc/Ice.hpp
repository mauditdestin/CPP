#pragma once

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		Ice	&operator=(Ice const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, Ice const & i);

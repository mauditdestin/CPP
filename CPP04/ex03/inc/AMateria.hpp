#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	protected:
		AMateria(void);
	public:
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &rhs);
	private:
		unsigned int _xp;
		std::string _type;

	public:
		AMateria(std::string const & type);

		std::string const	&getType(void) const;
		unsigned int		getXP(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, AMateria const & i);
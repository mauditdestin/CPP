#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure	&operator=(Cure const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, Cure const & i);

#pragma once

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>
# include <string.h>

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);
	protected:
		AMateria			*_source[4];
		void				EmptySource(void);
	private:
};

std::ostream	&operator<<(std::ostream &o, MateriaSource const & i);

#endif
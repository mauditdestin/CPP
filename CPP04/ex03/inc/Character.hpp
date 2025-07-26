#pragma once
#include "ICharacter.hpp"
#include <iostream>
#include <string>
#include <string.h>

class Character : public ICharacter {
	protected:
		Character(void);
	public:
		Character(std::string const name);
		Character(Character const &src);
		virtual ~Character(void);

		Character	&operator=(Character const &rhs);

		virtual std::string const &getName(void) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
	protected:
		std::string		_name;
		AMateria		*_inventory[4];
	private:
		void		DestroyCharacter(void);
};

std::ostream	&operator<<(std::ostream &o, Character const & i);
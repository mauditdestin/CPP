#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/MateriaSource.hpp"

int		main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "#################################" << std::endl;
	src = new MateriaSource();
	src->learnMateria(new Ice());	// 1
	src->learnMateria(new Cure());	// 2
	src->learnMateria(new Ice());	// 3
	src->learnMateria(new Cure());	// 4
	src->learnMateria(new Ice());	// 5

	me = new Character("MeAgain");

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	AMateria *tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	delete tmp2; tmp2 = NULL;

	bob = new Character("TargetBob");

	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << "#################################" << std::endl;

	Character mecpy(*me);
	mecpy.use(-1, *bob);
	mecpy.use(0, *bob);
	mecpy.use(1, *bob);
	mecpy.use(2, *bob);
	mecpy.use(3, *bob);
	mecpy.use(4, *bob);

	std::cout << "#################################" << std::endl;
	for (int i = -1; i < 5; i++)
		mecpy.unequip(i);
	for (int i = -1; i < 5; i++)
		mecpy.use(i, *bob);

	std::cout << "#################################" << std::endl;
	std::cout << "Last MateriaSource XP: " << tmp->getXP() << std::endl;
	delete bob; bob = NULL;
	delete me; me = NULL;
	delete src; src = NULL;
	tmp = NULL;
	std::cout << "#################################" << std::endl;

//	system("leaks a.out");
	return (0);
}
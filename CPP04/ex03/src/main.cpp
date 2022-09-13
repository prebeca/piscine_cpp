/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:38:30 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 13:51:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria * tmp;
	tmp = new Ice();
	src->learnMateria(tmp);						// copy the tmp materia into the src's known materia list
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);						// does nothing, limit of known materia reached
	delete tmp;

	ICharacter* me = new Character("me");

	if ((tmp = src->createMateria("yolo")) == 0)// if asked to create an unknown materia, return 0
		std::cout << "no known \"yolo\" materia" << std::endl;// -----------> cout
	tmp = src->createMateria("ice");
	me->equip(tmp);								// equip materia in inventory slot 0
	AMateria * ice = src->createMateria("ice");
	me->equip(ice);								// equip materia in inventory slot 1
	tmp = src->createMateria("cure");
	me->equip(tmp);								// equip materia in inventory slot 2
	tmp = src->createMateria("cure");
	me->equip(tmp);								// equip materia in inventory slot 3
	tmp = src->createMateria("cure");
	me->equip(tmp);								// does nothing, inventory limit reached
	delete (tmp);								// delete materia that failed to equip
	me->unequip(1);								// unequip materia from inventory slot 1 (slot 2 moved to slot 1, 3 to 2 ...)
	delete ice;									// delete unequiped materia

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);							// -----------> printed on cout
	me->use(1, *bob);							// -----------> printed on cout

	// deep copy test

	Character otherMe("otherMe");
	Character otherBob("otherBob");

	tmp = src->createMateria("ice");
	otherMe.equip(tmp);
	tmp = src->createMateria("cure");
	otherMe.equip(tmp);

	otherMe.use(0, otherBob);					// -----------> printed on cout
	otherMe.use(1, otherBob);					// -----------> printed on cout

	otherMe = otherBob;							// copy otherBob into otherMe

	otherMe.use(0, otherBob);					// does nothing because otherBob has no materia in inventory so otherMe either

	otherBob.equip(src->createMateria("cure"));
	Character bobception(otherBob);				// copy otherBob to bobception
	bobception.use(0, otherMe);					// -----------> printed on cout // bobception can use materia cure because copied from otherbob
	bobception.use(-42, otherMe);				// does nothing beacause -42 is invalid
	bobception.use(4, otherMe);					// does nothing beacause 4 is invalid
	bobception.use(42, otherMe);				// does nothing beacause 42 is invalid

	delete bob;
	delete me;
	delete src;

	return (0);
}
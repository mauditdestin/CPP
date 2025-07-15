/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:01:20 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 20:01:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    #if PRETTY
        std::cout << "║ Constructor   ║   ClapTrap ║ Default constructor            ║" << "     ✅     ║" << std::endl;
    #else
        std::cout << "Default constructor called for ClapTrap" << std::endl;    
    #endif

    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	#if PRETTY
		std::cout << "║ Constructor   ║ " << std::setw(10) << _name << " ║ Constructor with name          ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap constructor with name called" << std::endl;
	#endif
	return;
}

ClapTrap::ClapTrap(ClapTrap &ref)
{
	#if PRETTY
		std::cout << "║ Constructor   ║ " << std::setw(10) << ref._name << " ║ Copy constructor               ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap copy constructor called" << std::endl;
	#endif
	if (this != &ref)
		*this = ref;
	return;
}

ClapTrap::~ClapTrap(void)
{
	#if PRETTY
		std::cout << "║ Destructor    ║ " << std::setw(10) << _name << " ║ Destructor                     ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap destructor called" << std::endl;
	#endif
	return;
}
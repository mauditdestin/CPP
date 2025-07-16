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

#include "../inc/ClapTrap.hpp"

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

ClapTrap &ClapTrap::operator=(ClapTrap &ref)
{
	#if PRETTY
		std::cout << "║ Operator      ║ " << std::setw(10) << ref._name << " ║ Assignation operator (=)       ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap assignation operator called" << std::endl;
	#endif
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hitPoints = ref._hitPoints;
		this->_energyPoints = ref._energyPoints;
		this->_attackDamage = ref._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		#if PRETTY
			std::cout << "║ Attack        ║ " << std::setw(10) << _name << " ║ Not enough energy to attack    ║" << "     ❌     ║" << std::endl;
		#else
			std::cout << "ClapTrap " << this->_name << " has no energy left to attack" << std::endl;
		#endif
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		#if PRETTY
			std::cout << "║ Attack        ║ " << std::setw(10) << _name << " ║ Not enough hitpoints to attack ║" << "     ❌     ║" << std::endl;
		#else
			std::cout << "ClapTrap " << this->_name << " is dead and cannot attack." << std::endl;
		#endif
		return ;
	}
	#if PRETTY
		std::cout << "║ Attack        ║ " << std::setw(10) << _name << " ║ Attacks " << target << std::setw(21) << " ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	#endif
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(_hitPoints))
	{
		#if PRETTY
			std::cout << "║ Take damage   ║ " << std::setw(10) << _name << " ║ Dies                           ║" << "     ✅     ║" << std::endl;
		#else
			std::cout << "'" << _name << "' is already dead" << std::endl;
		#endif
		_hitPoints = 0;
	}
	else
	{
		#if PRETTY
			std::cout << "║ Take damage   ║ " << std::setw(10) << _name << " ║ Gets hit for " << std::setw(17) << amount << " ║" << "     ✅     ║" << std::endl;
		#else
			std::cout << "'" << _name << "' took " << amount << " damages!" << std::endl;
		#endif
		_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		#if PRETTY
			std::cout << "║ Repair        ║ " << std::setw(10) << _name << " ║ Not enough energy to repair    ║" << "     ❌     ║" << std::endl;
		#else
			std::cout << "ClapTrap " << this->_name << " has no energy left to be repaired" << std::endl;
		#endif
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		#if PRETTY
			std::cout << "║ Repair        ║ " << std::setw(10) << _name << " ║ Not enough hitpoints to repair ║" << "     ❌     ║" << std::endl;
		#else
			std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired" << std::endl;
		#endif
		return ;
	}
	// Overflow protection
	if (amount > UINT_MAX - _hitPoints)
		amount = UINT_MAX - _hitPoints;
	this->_energyPoints--;
	this->_hitPoints += amount;
	#if PRETTY
		std::cout << "║ Repair        ║ " << std::setw(10) << _name << " ║ Repairs " << amount << " -- has " << _hitPoints << "           ║" << "     ✅     ║" << std::endl;
	#else
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points" << std::endl;
	#endif
}
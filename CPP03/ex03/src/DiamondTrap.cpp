/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:14:23 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 18:14:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	this->_name = "default";
	ScavTrap::_name = "default_clap_name";
	ScavTrap::_hitPoints = FragTrap::_hitPoints;
	ScavTrap::_energyPoints = 50;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	ScavTrap::_name = name + "_clap_name";
	ScavTrap::_hitPoints = FragTrap::_hitPoints;
	ScavTrap::_energyPoints = 50;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : FragTrap(other), ScavTrap(other)
{
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->ScavTrap::_name = other.ScavTrap::_name;
		this->ScavTrap::_hitPoints = other.ScavTrap::_hitPoints;
		this->ScavTrap::_energyPoints = other.ScavTrap::_energyPoints;
		this->ScavTrap::_attackDamage = other.ScavTrap::_attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is: " << this->_name
			  << ", and my ClapTrap name is: " << ScavTrap::_name << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}
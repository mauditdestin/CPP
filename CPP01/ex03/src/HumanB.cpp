/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:01 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:44:01 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << this->name << " spawned" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " died" << std::endl;
}

void HumanB::attack() const
{
	if (this->_Weapon)
		std::cout << this->name << " attacks with their" << (*(this->_Weapon)).getType() << std::endl;
	else
		std::cout << this->name << " tries to attack but fails miserably" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->_Weapon = &newWeapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:43:58 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:43:58 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/Weapon.hpp"

HumanA::HumanA(std::string name, class Weapon *_Weapon) :name(name), _Weapon(_Weapon)
{
	std::cout << this->name << " spawned" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " died" << std::endl;
}

void HumanA::attack() const
{
	if (!_Weapon)
		std::cout << this->name << " tries to attack but fails miserably" << std::endl;
	else
		std::cout << this->name << " attacks with their" << this->_Weapon->getType() << std::endl;
}
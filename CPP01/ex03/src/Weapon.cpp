/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:04 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:44:04 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

Weapon::~Weapon()
{

}

std::string Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}
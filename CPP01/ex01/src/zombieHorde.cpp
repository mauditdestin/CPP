/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:51:40 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/08 22:51:40 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

std::string getName(std::string name, int index)
{
	return name + std::to_string(index + 1);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	int i = 0;
	while (i < n)
	{
		horde[i].setName(getName(name, i));
		i++;
	}
	return horde;
}
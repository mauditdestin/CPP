/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:51:24 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/08 22:51:24 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>

class Zombie
{
	public:
			Zombie();
			~Zombie();
			void announce();
			void setName(std::string name);
	private:
			std::string name;
};

Zombie *zombieHorde(int n, std::string name);
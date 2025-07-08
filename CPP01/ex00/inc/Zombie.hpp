/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:05:48 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/08 22:05:48 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <cstdlib>
#include <iostream>

class Zombie
{
	public:
			Zombie(std::string name);
			~Zombie();
			void announce();
	private:
			std::string name;
};
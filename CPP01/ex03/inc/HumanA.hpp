/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:22 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:44:22 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../inc/Weapon.hpp"

class HumanA
{
	public:
			HumanA(std::string name, Weapon *_Weapon);
			~HumanA();
			void attack() const;
	private:
			std::string name;
			Weapon *_Weapon;
};
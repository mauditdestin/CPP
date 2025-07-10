/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:33 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:44:33 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../inc/Weapon.hpp"

class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB();
			void attack() const;
			void setWeapon(Weapon &newWeapon);
	private:
			Weapon *_Weapon;
			std:: string name;
};
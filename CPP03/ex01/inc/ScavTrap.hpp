/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:07:40 by marvin            #+#    #+#             */
/*   Updated: 2025/07/16 18:07:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
	private:
		
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &ref);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap &ref);
		void guardGate(void);
		void attack(const std::string& target);
};
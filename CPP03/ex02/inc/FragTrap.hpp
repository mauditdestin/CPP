/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:08:45 by marvin            #+#    #+#             */
/*   Updated: 2025/07/16 18:08:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
	private:
		
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &ref);
		~FragTrap(void);
		FragTrap &operator=(FragTrap &ref);
		void highFivesGuys(void);
};
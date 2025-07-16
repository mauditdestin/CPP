/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:07:50 by marvin            #+#    #+#             */
/*   Updated: 2025/07/16 18:07:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		ScavTrap st("Alice");
		ClapTrap ct("Bob");
		st.guardGate();
		st.attack("Bob");
		ct.takeDamage(20);
		ct.attack("Alice");
	}
	{
		ScavTrap st("Alice");
		for (size_t i = 0; i < 50; i++)
		{
			st.beRepaired(1);
		}
		st.attack("Someone");
	}
	{
		ScavTrap st("Alice");
		st.takeDamage(25);
		st.takeDamage(25);
		st.attack("Someone");
		st.takeDamage(50);
		st.attack("Someone");
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:08:53 by marvin            #+#    #+#             */
/*   Updated: 2025/07/16 18:08:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st("Test ScavTrap");
	FragTrap ft("Test FragTrap");
	st.guardGate();
	st.attack("Test FragTrap");
	ft.takeDamage(20);
	ft.attack("Test ScavTrap");
	st.takeDamage(30);
	ft.highFivesGuys();
}
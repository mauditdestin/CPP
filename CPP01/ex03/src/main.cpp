/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:43:52 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:43:52 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"
#include <cstdlib>

int main()
{
	Weapon club = Weapon("crude spike club");
	HumanA bob("bob", &club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	HumanB jim("jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("pickaxe");
	jim.attack();
	HumanA marc("marc", NULL);
	marc.attack();
	return EXIT_SUCCESS;
}
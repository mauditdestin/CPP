/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:05:00 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/08 22:05:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(int argc, char **)
{
	if (argc != 1)
	{
		std::cout << "Correct usage: ./brainz" << std::endl;
		return (EXIT_FAILURE);
	}
	Zombie *paul = newZombie("paul");
	paul->announce();
	randomChump("arthur");
	delete(paul);
	return EXIT_SUCCESS;
}
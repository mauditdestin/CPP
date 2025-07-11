/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:51:44 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/08 22:51:44 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Correct usage: ./moarbrainz zombieName zombieCount" << std::endl;
		return (EXIT_FAILURE);
	}
	int zombieCount = std::atoi(argv[2]);
	Zombie* horde = zombieHorde(zombieCount, argv[1]);

	int i = 0;
	while (i < zombieCount)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (EXIT_SUCCESS);
}
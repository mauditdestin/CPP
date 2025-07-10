/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:11:18 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/10 00:11:18 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
	Harl _Harl;
	if (argc != 2)
	{
		std::cout << "Arguments error." << std::endl;
		return EXIT_FAILURE;
	}
	_Harl.complain(argv[1]);
	return EXIT_SUCCESS;
}
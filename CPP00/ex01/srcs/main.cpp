/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:12:41 by pleblond          #+#    #+#             */
/*   Updated: 2025/05/10 01:12:41 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

void	ft_menu()
{
	std::cout << "\e[1;36m";
	std::cout << "#########################################################" << std::endl;
	std::cout << "#                                                       #" << std::endl;

	std::cout << "#         \u260E\uFE0F  Welcome to the amazing phonebook! \u260E\uFE0F        #" << std::endl;
	
	std::cout << "#                                                       #" << std::endl;
	std::cout << "#      Please enter one of the following commands:      #" << std::endl;
	std::cout << "#                                                       #" << std::endl;

	std::cout << "#" << "\e[0m" << "\e[1;33m" << "                      1 - ADD                          " << "\e[0m" << "\e[1;36m" << "#" << std::endl;
	std::cout << "#" << "\e[0m" << "\e[1;33m" << "                      2 - SEARCH                       " << "\e[0m" << "\e[1;36m" << "#" << std::endl;
	std::cout << "#" << "\e[0m" << "\e[1;33m" << "                      3 - EXIT                         " << "\e[0m" << "\e[1;36m" << "#" << std::endl;

	std::cout << "#                                                       #" << std::endl;
	std::cout << "#########################################################" << std::endl;
	std::cout << "\e[0m" << std::endl;
}

int main()
{
	Phonebook phoneBook;
	std::string command;

	ft_menu();
	while (1)
	{
		std::cout << "\e[1;36m" << "< " << "\e[0m";
		if (!getline(std::cin, command) || std::cin.eof() || std::cin.bad() || std::cin.fail())
		{
			std::cout << "\e[1;36m" << "Goodbye, see you soon!" << "\U0001F600" << "\e[0m" << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			if (phoneBook.add_contact() == 1)
			{
				std::cout << "\e[1;36m" << "Goodbye, see you soon!" << "\U0001F600" << "\e[0m" << std::endl;
				break ;
			}
		}
		else if ((command == "SEARCH"))
		{
			if (phoneBook.search_contact() == 1)
			{
				std::cout << "\e[1;36m" << "Goodbye, see you soon!" << "\U0001F600" << "\e[0m" << std::endl;
				break ;
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "\e[1;36m" << "Goodbye, see you soon!" << "\U0001F600" << "\e[0m" << std::endl;
			break ;
		}
		else
		{
			std::cout << "\e[1;91m" << "Invalid command!" << "\U0001F621" << "\e[0m" << std::endl;
		}
	}
	return (0);
}

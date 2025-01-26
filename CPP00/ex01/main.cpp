/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:52:16 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/25 02:52:16 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PrintContact(Contact contact)
{
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << contact.GetLastName() << std::endl;
	std::cout << contact.GetNickname() << std::endl;
	std::cout << contact.GetPhoneNumber() << std::endl;
	std::cout << contact.GetDarkestSecret() << std::endl;
}


int	main()
{
	Contact contact = Contact();

	while (true)
	{
		std::string entry;
		std::cout << "Enter a command : ";
		getline(std::cin, entry);
		if (entry == "ADD")
		{

		}
		else if (entry == "SEARCH")
		{

		}
		else if (entry == "EXIT")
		{
			exit(EXIT_SUCCESS);
		}
		else {
			std::cout << "Invalid command. Please, try again." << std::endl;
		}
	}
}
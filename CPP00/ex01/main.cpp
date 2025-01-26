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
#include <vector>
#include <iomanip>

void PrintContact(Contact contact)
{
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << contact.GetLastName() << std::endl;
	std::cout << contact.GetNickname() << std::endl;
	std::cout << contact.GetPhoneNumber() << std::endl;
	std::cout << contact.GetDarkestSecret() << std::endl;
}

void AddContact(std::vector<Contact> &contacts)
{
	if (contacts.size() >= 8)
	{
		std::cout << "The Phobnebook is full ! Cannot add more contacts." << std::endl;
		return;
	}

	Contact newContact;
	std::string str;

	do {
		std::cout << "First Name : ";
		getline(std::cin, str);
		if (str.empty())
			std::cout << "First Name is empty, please, try again !" << std::endl;
	} while(str.empty());
	newContact.SetFirstName(str);

	do {
		std::cout << "Last Name : ";
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Last Name is empty, please, try again !" << std::endl;
	} while(str.empty());
	newContact.SetLastName(str);

	do {
		std::cout << "Nickname : ";
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Nickname is empty, please, try again !" << std::endl;
	} while(str.empty());
	newContact.SetNickname(str);

	do {
		std::cout << "Phone Number : ";
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Phone Number is empty, please, try again !" << std::endl;
	} while(str.empty());
	newContact.SetPhoneNumber(str);

	do {
		std::cout << "Darkest Secret : ";
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Darkest Secret is empty, please, try again !" << std::endl;
	} while(str.empty());
	newContact.SetDarkestSecret(str);

	contacts.push_back(newContact);
	std::cout << "Successfully added a new contact !" << std::endl;
}

void SearchContact(const std::vector<Contact> &contacts)
{
	if (contacts.empty())
	{
		std::cout << "No contact available to search !" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
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
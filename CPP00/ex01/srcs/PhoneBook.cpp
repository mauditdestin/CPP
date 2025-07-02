/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:14:04 by pleblond          #+#    #+#             */
/*   Updated: 2025/05/10 01:14:04 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

int Phonebook::add_contact()
{
	int nb_contact = get_nb_contacts();
	int i = 0;
	Contact new_contact;

	if (new_contact.create_contact() == 1)
		return (1);
	if (nb_contact >= 8)
	{
		while (i < 7)
		{
			this->contacts[i] = this->contacts[i + 1];
			i++;
		}
		contacts[7] = new_contact;
		return (0);
	}
	contacts[nb_contact] = new_contact;
	return (0);
}

int Phonebook::get_nb_contacts()
{
	int i;

	i = 0;
	while (i < 8 && !this->contacts[i].get_first_name().empty())
		i++;
	return (i);
}

void Phonebook::print_info(int index)
{
	if (this->contacts[index].get_first_name().empty())
	{
		std::cout << "\e[1;91m" << "Contact does not exist!" << "\U0001F62D" << "\e[0m" << std::endl;
		return ;
	}
	std::cout << "\e[1;33m" << "First name: " << "\e[0m" << this->contacts[index].get_first_name() << std::endl;
	std::cout << "\e[1;33m" << "Last name: " << "\e[0m" << this->contacts[index].get_last_name() << std::endl;
	std::cout << "\e[1;33m" << "Nickname: " << "\e[0m" << this->contacts[index].get_nickname() << std::endl;
	std::cout << "\e[1;33m" << "Phone number: " << "\e[0m" << this->contacts[index].get_phone_number() << std::endl;
	std::cout << "\e[1;33m" << "Darkest secret: " << "\e[0m" << this->contacts[index].get_darkest_secret() << std::endl;
}

std::string Phonebook::truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void Phonebook::print_contact()
{
	int	i;

	i = 0;
	
	std::cout << "\e[1;34m" << "---------------------------------------------" << "\e[0m" << std::endl;
	std::cout << "\e[1;36m" << "|"
	<< std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First name" << "|"
	<< std::setw(10) << "Last name" << "|"
	<< std::setw(10) << "Nickname" << "|"
	<< "\e[0m" << std::endl;
	std::cout << "\e[1;34m" << "---------------------------------------------" << "\e[0m" << std::endl;
	while (i < get_nb_contacts())
	{
		std::cout
		<< "\e[1;36m" << "|" << "\e[0m" << "\e[1;35m" << std::setw(10) << i + 1 << "\e[0m"
		<< "\e[1;36m" << "|" << "\e[0m" << "\e[1;35m" << std::setw(10) << truncate(this->contacts[i].get_first_name()) << "\e[0m"
		<< "\e[1;36m" << "|" << "\e[0m" << "\e[1;35m" << std::setw(10) << truncate(this->contacts[i].get_last_name()) << "\e[0m"
		<< "\e[1;36m" << "|" << "\e[0m" << "\e[1;35m" << std::setw(10) << truncate(this->contacts[i].get_nickname()) << "\e[0m" << "\e[1;36m" << "|" << "\e[0m"
		<< std::endl;
		std::cout << "\e[1;34m" << "---------------------------------------------" << "\e[0m" << std::endl;
		i++;
	}
}

int Phonebook::search_contact()
{
	std::string input;
	int nb_contact = get_nb_contacts();

	if (nb_contact == 0)
	{
		std::cout << "\e[1;91m" << "No contacts in the phonebook!" << "\U0001F62D" << "\e[0m" << std::endl;
		return (0);
	}

	print_contact();

	std::cout << "\e[1;36m" << "Enter the index: " << "\e[0m" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);

	if (input == "1")
		print_info(0);
	else if (input == "2")
		print_info(1);
	else if (input == "3")
		print_info(2);
	else if (input == "4")
		print_info(3);
	else if (input == "5")
		print_info(4);
	else if (input == "6")
		print_info(5);
	else if (input == "7")
		print_info(6);
	else if (input == "8")
		print_info(7);
	else
		std::cout << "\e[1;91m" << "Invalid index!" << "\U0001F621" << "\e[1;35m" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:47:35 by pleblond          #+#    #+#             */
/*   Updated: 2025/05/11 13:47:35 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

// Getters

std::string Contact::get_first_name()
{
	return (firstName);
}

std::string Contact::get_last_name()
{
	return (lastName);
}

std::string Contact::get_nickname()
{
	return (nickName);
}

std::string Contact::get_phone_number()
{
	return (phoneNumber);
}

std::string Contact::get_darkest_secret()
{
	return (darkestSecret);
}

// Setters

void Contact::set_first_name(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::set_last_name(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::set_nickname(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::set_phone_number(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::set_darkest_secret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

int Contact::create_contact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	int i = 0;

	/* CREATE FIRST NAME */
	std::cout << "\e[1;35m" << "Enter first name: " << "\e[0m" << std::endl;
	std::getline(std::cin, firstName);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);
	if (firstName.empty())
	{
		std::cout << "\e[1;91m" << "First name cannot be empty!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	if (firstName.length() > 50)
	{
		std::cout << "\e[1;91m" << "First name is too long!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	while (firstName[i])
	{
		if (!isalpha(firstName[i]) && !isdigit(firstName[i]))
		{
			std::cout << "\e[1;91m" << "Invalid first name!" << "\U0001F621" << "\e[0m" << std::endl;
			return (0);
		}
		i++;
	}

	/* CREATE LAST NAME */
	std::cout << "\e[1;35m" << "Enter last name: " << "\e[0m" << std::endl;
	std::getline(std::cin, lastName);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);
	if (lastName.empty())
	{
		std::cout << "\e[1;91m" << "Last name cannot be empty!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	if (lastName.length() > 50)
	{
		std::cout << "\e[1;91m" << "Last name is too long!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	i = 0;
	while (lastName[i])
	{
		if (!isalpha(lastName[i]) && !isdigit(lastName[i]))
		{
			std::cout << "\e[1;91m" << "Invalid last name!" << "\U0001F621" << "\e[0m" << std::endl;
			return (0);
		}
		i++;
	}

	/* CREATE NICKNAME */
	std::cout << "\e[1;35m" << "Enter nickname: " << "\e[0m" << std::endl;
	std::getline(std::cin, nickName);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);
	if (nickName.empty())
	{
		std::cout << "\e[1;91m" << "Nickname cannot be empty!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	if (nickName.length() > 50)
	{
		std::cout << "\e[1;91m" << "Nickname is too long!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	i = 0;
	while (nickName[i])
	{
		if (!isalpha(nickName[i]) && !isdigit(nickName[i]))
		{
			std::cout << "\e[1;91m" << "Invalid nickname!" << "\U0001F621" << "\e[0m" << std::endl;
			return (0);
		}
		i++;
	}

	/* CREATE PHONE NUMBER */
	std::cout << "\e[1;35m" << "Enter phone number: " << "\e[0m" << std::endl;
	std::getline(std::cin, phoneNumber);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);
	if (isalpha(phoneNumber[0]) || phoneNumber.length() != 10)
	{
		std::cout << "\e[1;91m" << "Invalid phone number!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}

	/* CREATE DARKEST SECRET */
	std::cout << "\e[1;35m" << "Enter darkest secret: " << "\e[0m" << std::endl;
	std::getline(std::cin, darkestSecret);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		return (1);
	if (darkestSecret.empty())
	{
		std::cout << "\e[1;91m" << "Darkest secret cannot be empty!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	if (darkestSecret.length() > 50)
	{
		std::cout << "\e[1;91m" << "Darkest secret is too long!" << "\U0001F621" << "\e[0m" << std::endl;
		return (0);
	}
	i = 0;
	while (darkestSecret[i])
	{
		if (!isalpha(darkestSecret[i]) && !isdigit(darkestSecret[i]) && !isspace(darkestSecret[i]))
		{
			std::cout << "\e[1;91m" << "Invalid darkest secret!" << "\U0001F621" << "\e[0m" << std::endl;
			return (0);
		}
		i++;
	}

	set_first_name(firstName);
	set_last_name(lastName);
	set_nickname(nickName);
	set_phone_number(phoneNumber);
	set_darkest_secret(darkestSecret);

	std::cout << "\e[1;32m" << "Contact added to the phonebook!" << "\U0001F44D" << "\e[0m" << std::endl;
	return (0);
}
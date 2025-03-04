/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:52:24 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/25 02:52:24 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::SetFirstName(std::string Firstname)
{
	this->FirstName = FirstName;
}

void	Contact::SetLastName(std::string LastName)
{
	this->LastName = LastName;
}

void	Contact::SetNickname(std::string Nickname)
{
	this->Nickname = Nickname;
}

void	Contact::SetPhoneNumber(std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}

std::string		Contact::GetFirstName()
{
	return this->FirstName;
}

std::string		Contact::GetLastName()
{
	return this->LastName;
}

std::string		Contact::GetPhoneNumber()
{
	return this->PhoneNumber;
}

std::string		Contact::GetNickname()
{
	return this->Nickname;
}

std::string		Contact::GetDarkestSecret()
{
	return this->DarkestSecret;
}
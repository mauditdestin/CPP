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

#include "../inc/PhoneBook.hpp"

std::string truncate(std::string str)
{
	if (str.length() < 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
		return (str);
}

int	verify_contact(Contact contact)
{
	std::string data;
	int rv;

	rv = 0;
	data = contact.get_first_name();
	if (data.empty())
		rv = 1;
	data = contact.get_last_name();
	if (data.empty())
		rv = 1;
		data = contact.get_nickname();
	if (data.empty())
		rv = 1;
		data = contact.get_secret();
	if (data.empty())
		rv = 1;
		data = contact.get_phone_numb();
	if (data.empty())
		rv = 1;
		data = contact.get_phone_numb();
	if (data.empty())
		rv = 1;
}
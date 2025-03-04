/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:52:30 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/25 02:52:30 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
	private:
			int	ContactsNumber;
			Contact Contacts[8];
	public:
			PhoneBook();
			~PhoneBook();
			void	SetContactsNumber(int);
			int		GetContactsNumber();
			void	EnterNewContact(Contact);
			Contact GetContactByIndex(int index);
};
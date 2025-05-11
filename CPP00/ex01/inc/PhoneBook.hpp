/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:13:26 by pleblond          #+#    #+#             */
/*   Updated: 2025/05/10 01:13:26 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
# define CONTACT_MAX 8
#include <iomanip>

class Contact;
class PhoneBook
{
	public:
	PhoneBook();
	void add_contact(Contact& contact, PhoneBook& Phonebook);
	void update_array (Contact contact, PhoneBook& Phonebook, int index);
	void set_index(int newindex);
	int index;
	void display_contacts(Contact contact, PhoneBook Phonebook);
	void display_specific_contact(Contact contact, PhoneBook& Phonebook, int index);
	Contact contacts[CONTACT_MAX];
};
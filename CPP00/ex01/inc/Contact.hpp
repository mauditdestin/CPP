/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:13:18 by pleblond          #+#    #+#             */
/*   Updated: 2025/05/10 01:13:18 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	// Attributes
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	// Constructor and Destructor
	Contact();
	~Contact();

	// Getters
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();

	// Setters
	void set_first_name(std::string firstName);
	void set_last_name(std::string lastName);
	void set_nickname(std::string nickName);
	void set_phone_number(std::string phoneNumber);
	void set_darkest_secret(std::string darkestSecret);

	// Methods
	int create_contact();
};

#endif

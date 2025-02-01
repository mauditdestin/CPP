/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:52:20 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/25 02:52:20 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
			std::string FirstName;
			std::string LastName;
			std::string Nickname;
			std::string PhoneNumber;
			std::string DarkestSecret;

	public:
			Contact();
			~Contact();
			void	SetFirstName(std::string);
			void	SetLastName(std::string);
			void	SetNickname(std::string);
			void	SetPhoneNumber(std::string);
			void	SetDarkestSecret(std::string);

			std::string GetFirstName();
			std::string GetLastName();
			std::string GetNickname();
			std::string GetPhoneNumber();
			std::string GetDarkestSecret();
};
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

#pragma once
#include <string>
#include <iostream>

class Contact{
	public:
			Contact ();
			~Contact();
			void	set_first_name(std::string& first_name);
			void	set_last_name(std::string& last_name);
			void	set_nickname(std::string& nickname);
			void	set_phone_number(std::string& phone_number);
			void	set_secret(std::string& secret);
			void	set_index(int newindex);

			std:string get_first_name();
			std:string get_last_name();
			std:string get_nickname();
			std:string get_phone_numb();
			std:string get_secret();
			std:string get_index();
			int index;
	private:
			std:string first_name();
			std:string last_name();
			std:string nickname();
			std:string phone_number();
			std:string secret();
};
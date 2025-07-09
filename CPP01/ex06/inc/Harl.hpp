/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:11:11 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/10 00:11:11 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

class Harl
{
	typedef void (Harl::*MemberFunction)(void);
	public:
		Harl();
		~Harl();
		void complain(std::string arg);

	private:
		void debug();
		void info();
		void warning();
		void error();
};
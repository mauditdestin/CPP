/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:54:23 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 12:54:23 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
	public:
		typedef void (Harl::*MemberFunction)(void);
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
};
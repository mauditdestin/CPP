/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:11:27 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/10 00:11:27 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::debug()
{
	std::cout << "i love to have extra bacon on my burger" << std::endl;
}

void Harl::info()
{
	std::cout << "tf why does it cost so much you did not put enough in the first place" << std::endl;
}

void Harl::warning()
{
	std::cout << "give me extra bacon for free, i've been coming here for years and you just started" << std::endl;
}

void Harl::error()
{
	std::cout << "i wanna speak to the manager" << std::endl;
}

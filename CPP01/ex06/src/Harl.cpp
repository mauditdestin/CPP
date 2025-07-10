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

void Harl::complain(std::string arg) {
    MemberFunction fct[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string msg[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int index = -1;

    int i = 0;
    while (i < 4) {
        if (arg == msg[i]) {
            index = i;
            break;
        }
        i++;
    }

    switch (index) {
        case 0: {
            int j = 0;
            while (j < 4) {
                (this->*fct[j])();
                j++;
            }
            break;
        }
        case 1: {
            int j = 1;
            while (j < 4) {
                (this->*fct[j])();
                j++;
            }
            break;
        }
        case 2: {
            int j = 2;
            while (j < 4) {
                (this->*fct[j])();
                j++;
            }
            break;
        }
        case 3: {
            int j = 3;
            while (j < 4) {
                (this->*fct[j])();
                j++;
            }
            break;
        }
        default:
            std::cout << "probably complaining about something insignificant" << std::endl;
            break;
    }
}

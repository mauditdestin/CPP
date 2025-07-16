/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:01:14 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 20:01:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    #if PRETTY
    	std::cout << "╔═══════════════╦════════════╦════════════════════════════════╦════════════╗" << std::endl;
		std::cout << "║     Event     ║    Name    ║           Description          ║  Success?  ║" << std::endl;
		std::cout << "╠═══════════════╬════════════╬════════════════════════════════╬════════════╣" << std::endl;
    #endif
    {
        ClapTrap clap1("Zoe");
        ClapTrap clap2("Paul");
        {
            ClapTrap clap3(clap1);
            ClapTrap clap4;
            clap4 = clap2;        
        }
        clap1.beRepaired(10);
        clap1.beRepaired(79);
        for (size_t i = 0l; i < 5; i++)
        {
            clap1.attack("Paul");
        }
        clap1.takeDamage(100);
        clap1.attack("Paul");
        for (size_t i = 0l; i < 5; i++)
        {
            clap2.attack("Zoe");
        }
        clap1.beRepaired(100);
        clap1.beRepaired(100);
        clap2.attack("Zoe");
        clap1.attack("Paul");
    }
    {
        ClapTrap clap1("Zoe");
        clap1.takeDamage(8000);
        clap1.attack("Someone");
        clap1.beRepaired(100);
    }
    #if PRETTY
        std::cout << "╚═══════════════╩════════════╩════════════════════════════════╩════════════╝" << std::endl;
    #endif
}
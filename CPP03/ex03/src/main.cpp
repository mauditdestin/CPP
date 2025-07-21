/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:15:19 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 18:15:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main(void) {
    std::cout << "--- CONSTRUCTORS ---" << std::endl;
    DiamondTrap diamond("ASH");
    std::cout << std::endl;

    std::cout << "--- MEMBER FUNCTIONS ---" << std::endl;
    diamond.whoAmI();
    diamond.attack("a poor soul");
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    std::cout << std::endl;

    std::cout << "--- DESTRUCTORS ---" << std::endl;
    return 0;
}
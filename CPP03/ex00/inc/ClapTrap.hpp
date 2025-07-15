/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:01:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 20:01:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>

#ifndef PRETTY
#define PRETTY false
#endif

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &ref);
        ~ClapTrap(void);

        ClapTrap &operator=(ClapTrap &ref);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
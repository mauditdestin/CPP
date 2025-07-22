/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:38:08 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:38:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    Animal::_type = "Dog";
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = copy.getType();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &value)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}
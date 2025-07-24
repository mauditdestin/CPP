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

#include "../inc/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    Animal::_type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = copy.getType();
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
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

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}
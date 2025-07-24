/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:38:05 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:38:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    Animal::_type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    _brain = new Brain();
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->_brain);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:37:59 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:37:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
    this->_type = "no type";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string name)
{
    this->_type = name;
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal & Animal::operator=(Animal const & value)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_type = value.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "What does the " << _type << " say?" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::setType(std::string type)
{
    this->_type = type;
}
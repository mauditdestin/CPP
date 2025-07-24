/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:38:14 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:38:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;	
}

WrongAnimal::WrongAnimal(std::string name)
{
	this->_type = name;
	std::cout << "WrongAnimal default constructor called" << std::endl;	
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;	
	*this = copy;
}


WrongAnimal & WrongAnimal::operator=( WrongAnimal const & value )
{
		std::cout << "Copy assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "What does the " << _type << " says?" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
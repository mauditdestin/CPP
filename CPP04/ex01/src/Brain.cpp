/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:29:50 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 21:29:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain & Brain::operator=( Brain const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
    for (int i = 0; i < 99; i++)
        this->_ideas[i] = value.getIdeas(i);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas(int i) const
{
    return (this->_ideas[i % 100]);
}

void    Brain::setIdeas(std::string content, int i)
{
    this->_ideas[i % 100] = content;
}
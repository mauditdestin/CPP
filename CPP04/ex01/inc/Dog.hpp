/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:37:48 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:37:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* data */
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		void makeSound(void) const;
		~Dog();
        Dog & operator = ( Dog const & value );
		Brain *getBrain(void) const;
};

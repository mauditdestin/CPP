/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:37:41 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 23:37:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string name);
		Animal(Animal &copy);
		virtual ~Animal();
		Animal & operator = ( Animal const & value );
		std::string getType() const;
		void		setType(std::string type);
		virtual	void makeSound() const;
		virtual Brain *getBrain() const = 0;
};
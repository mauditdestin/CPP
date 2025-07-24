/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:29:44 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 21:29:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
// #include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain &copy);
        ~Brain();
		Brain & operator = ( Brain const & value );
        std::string getIdeas(int i) const;
        void setIdeas(std::string content, int i);

};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:49:46 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/11 13:49:46 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <ostream>

class Fixed{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed & operator=(Fixed const &rhs);
        Fixed(int const n);
        Fixed(float const n);
        int getRawBits(void)const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

std::ostream & operator << (std::ostream &o, Fixed const &rhs);
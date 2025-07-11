/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:59:41 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/11 10:59:41 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(Fixed const & src);
			Fixed & operator = (Fixed const&rhs);
			int getRawBits() const;
			void setRawBits(int const raw);
	private:
			int fixedPointValue;
			static const int nFractBits = 8;
};
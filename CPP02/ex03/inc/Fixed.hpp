/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:43:31 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/11 16:43:31 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
private:
    int                 _valeurPointFixe;
    static const int    _bitsFractionnaires = 8;

public:
    // Forme Canonique
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed(const int intValue);
    Fixed(const float floatValue);
    ~Fixed(void);

    // Opérateurs
    Fixed&  operator=(const Fixed &fixed);
    Fixed   operator-(const Fixed &fixed) const;
    Fixed   operator+(const Fixed &fixed) const;
    Fixed   operator*(const Fixed &fixed) const;
    Fixed   operator/(const Fixed &fixed) const;
    Fixed&  operator--(void);
    Fixed&  operator++(void);
    Fixed   operator--(int);
    Fixed   operator++(int);
    bool    operator>(const Fixed &fixed) const;
    bool    operator<(const Fixed &fixed) const;
    bool    operator>=(const Fixed &fixed) const;
    bool    operator<=(const Fixed &fixed) const;
    bool    operator==(const Fixed &fixed) const;
    bool    operator!=(const Fixed &fixed) const;

    // Fonctions membres
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    // Fonctions statiques (corrigées pour retourner des références)
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &o, const Fixed &fixed);
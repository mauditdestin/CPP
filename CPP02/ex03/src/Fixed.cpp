/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:44:40 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 12:44:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _valeurPointFixe(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &autre) {
	std::cout << "Copy constructor called" << std::endl;
	*this = autre;
}

Fixed::Fixed(const int entier) {
	std::cout << "Int constructor called" << std::endl;
	this->_valeurPointFixe = entier << this->_bitsFractionnaires;
}

Fixed::Fixed(const float flottant) {
	std::cout << "Float constructor called" << std::endl;
	this->_valeurPointFixe = roundf(flottant * (1 << this->_bitsFractionnaires));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &autre) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &autre) {
		this->_valeurPointFixe = autre.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed &autre) const {
	return Fixed(this->toFloat() + autre.toFloat());
}

Fixed Fixed::operator-(const Fixed &autre) const {
	return Fixed(this->toFloat() - autre.toFloat());
}

Fixed Fixed::operator*(const Fixed &autre) const {
	return Fixed(this->toFloat() * autre.toFloat());
}

Fixed Fixed::operator/(const Fixed &autre) const {
	return Fixed(this->toFloat() / autre.toFloat());
}

bool Fixed::operator>(const Fixed &autre) const {
	return this->_valeurPointFixe > autre._valeurPointFixe;
}

bool Fixed::operator<(const Fixed &autre) const {
	return this->_valeurPointFixe < autre._valeurPointFixe;
}

bool Fixed::operator>=(const Fixed &autre) const {
	return this->_valeurPointFixe >= autre._valeurPointFixe;
}

bool Fixed::operator<=(const Fixed &autre) const {
	return this->_valeurPointFixe <= autre._valeurPointFixe;
}

bool Fixed::operator==(const Fixed &autre) const {
	return this->_valeurPointFixe == autre._valeurPointFixe;
}

bool Fixed::operator!=(const Fixed &autre) const {
	return this->_valeurPointFixe != autre._valeurPointFixe;
}

Fixed& Fixed::operator++(void) {
	this->_valeurPointFixe++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->_valeurPointFixe++;
	return temp;
}

Fixed& Fixed::operator--(void) {
	this->_valeurPointFixe--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->_valeurPointFixe--;
	return temp;
}

int Fixed::getRawBits(void) const {
	return this->_valeurPointFixe;
}

void Fixed::setRawBits(int const raw) {
	this->_valeurPointFixe = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->_valeurPointFixe / (1 << this->_bitsFractionnaires);
}

int Fixed::toInt(void) const {
	return this->_valeurPointFixe >> this->_bitsFractionnaires;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream &flux, const Fixed &valeur) {
	flux << valeur.toFloat();
	return flux;
}
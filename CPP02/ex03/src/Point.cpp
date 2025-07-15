/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:35:56 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 12:35:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val) {}

Point::Point(const Point &autre) : x(autre.x), y(autre.y) {}

Point& Point::operator=(const Point &autre) {
    (void)autre;
    return *this;
}

Point::~Point(void) {}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}
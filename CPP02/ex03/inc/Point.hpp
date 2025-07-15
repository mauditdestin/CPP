/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:32:25 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 12:32:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {

private:
    const Fixed x;
    const Fixed y;

public:
    Point(void);
    Point(const Point &autre);
    Point& operator=(const Point &autre);
    ~Point(void);
    Point(const float x_val, const float y_val);
    Fixed getX(void) const;
    Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:37:28 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 12:37:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Point.hpp"

int main(void) 
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);

    Point p_inside(5.0f, 5.0f);
    Point p_outside(15.0f, 5.0f);
    Point p_on_edge(5.0f, 0.0f);
    Point p_on_vertex = a;

    std::cout << "Triangle vertices: A(0,0), B(10,0), C(5,10)" << std::endl;
    std::cout << std::endl;

    // Test avec le point intérieur
    std::cout << "Testing point (5, 5)... Should be inside." << std::endl;
    if (bsp(a, b, c, p_inside))
        std::cout << "Result: Point is inside the triangle." << std::endl;
    else
        std::cout << "Result: Point is NOT inside the triangle." << std::endl;

    std::cout << "----------------------------------" << std::endl;

    // Test avec le point extérieur
    std::cout << "Testing point (15, 5)... Should be outside." << std::endl;
    if (bsp(a, b, c, p_outside))
        std::cout << "Result: Point is inside the triangle." << std::endl;
    else
        std::cout << "Result: Point is NOT inside the triangle." << std::endl;

    std::cout << "----------------------------------" << std::endl;

    // Test avec le point sur une arête
    std::cout << "Testing point (5, 0)... Should be outside (on an edge)." << std::endl;
    if (bsp(a, b, c, p_on_edge))
        std::cout << "Result: Point is inside the triangle." << std::endl;
    else
        std::cout << "Result: Point is NOT inside the triangle." << std::endl;

    std::cout << "----------------------------------" << std::endl;

    // Test avec le point sur un sommet
    std::cout << "Testing point (0, 0)... Should be outside (on a vertex)." << std::endl;
    if (bsp(a, b, c, p_on_vertex))
        std::cout << "Result: Point is inside the triangle." << std::endl;
    else
        std::cout << "Result: Point is NOT inside the triangle." << std::endl;

    return 0;
}
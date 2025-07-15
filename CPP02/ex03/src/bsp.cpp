/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:36:33 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 12:36:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bsp.cpp

#include "../inc/Point.hpp"


static Fixed sign(Point p1, Point p2, Point p3)
{
    // Calcule (p1.x - p3.x) * (p2.y - p1.y) - (p2.x - p1.x) * (p1.y - p3.y)
    // en utilisant notre classe Fixed.
    return (p1.getX() - p3.getX()) * (p2.getY() - p1.getY()) - (p2.getX() - p1.getX()) * (p1.getY() - p3.getY());
}

// La fonction principale demandée[cite: 284].
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    // Calcule le signe du point par rapport à chaque côté du triangle
    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    // Vérifie si un des signes est nul. Si c'est le cas, le point est sur une arête.
    // D'après la consigne, on doit retourner false.
    // On convertit en float pour la comparaison, car notre '==' est exact.
    if (d1.toFloat() == 0.0f || d2.toFloat() == 0.0f || d3.toFloat() == 0.0f) {
        return false;
    }

    // has_neg est vrai si au moins un des signes est négatif.
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);

    // has_pos est vrai si au moins un des signes est positif.
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    // Si on a à la fois des signes positifs ET négatifs, le point est à l'extérieur.
    // Si tous les signes sont de même nature (tous positifs ou tous négatifs),
    // alors !(has_neg && has_pos) sera vrai, et le point est à l'intérieur.
    return !(has_neg && has_pos);
}
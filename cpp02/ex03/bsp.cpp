/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:13:18 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:13:29 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

namespace {
	Fixed side (const Point p, const Point p1, const Point p2) {
		return (p2.getY() - p1.getY()) * (p.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (p.getY() - p1.getY());
	}
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	bool side1, side2, side3;

	side1 = side(point, a, b) > 0;
	side2 = side(point, b, c) > 0;
	side3 = side(point, c, a) > 0;

	return side1 && side2 && side3;
}

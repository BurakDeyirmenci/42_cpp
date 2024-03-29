/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:13:52 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:13:53 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/********** CONSTRUCTOR & DESTRUCTOR **********/

Point::Point()
	: x(Fixed())
	, y(Fixed()) {}

Point::Point(const float x, const float y)
	: x(Fixed(x))
	, y(Fixed(y)) {}

Point::Point(const Fixed x, const Fixed y)
	: x(x)
	, y(y) {}

Point::Point(const Point& other)
	: x(other.x)
	, y(other.y)
{}

Point::~Point() {}
/********** GETTERS **********/

Fixed Point::getX() const {
	return this->x;
}

Fixed Point::getY() const {
	return this->y;
}

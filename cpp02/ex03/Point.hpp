/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:13:57 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:13:57 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_POINT_HPP_
# define EX03_POINT_HPP_

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
	private:

		const Fixed x;
		const Fixed y;
};

#endif

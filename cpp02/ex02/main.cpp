/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:12:51 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:12:52 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main( void ) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	// MY TESTS
	{
		std::cout << "\nMY TESTS:\n" << std::endl;
	
		Fixed a(4);
		Fixed const b(2);
	
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;
	
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "b + a: " << b + a << std::endl;
	
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "b - a: " << b - a << std::endl;
	
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "b * a: " << b * a << std::endl;
	
		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "b / a: " << b / a << std::endl;
	
		std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "max(b, a): " << Fixed::max(a, b) << std::endl;
	
		std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
		std::cout << "min(b, a): " << Fixed::min(a, b) << std::endl;
	
		return 0;
	}
}

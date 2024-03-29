/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:12:19 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:12:19 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FIXED_HPP_
# define EX00_FIXED_HPP_

#include <string>

class Fixed {
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& other);

		void setRawBits(const int rawBits);
		int getRawBits() const;
		int toInt() const;
		float toFloat() const;
	private:
		static const int _nFracBits = 8;
		int _rawBits;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif

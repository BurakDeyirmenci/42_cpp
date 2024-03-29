/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:11:51 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/29 14:11:51 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FIXED_HPP_
# define EX00_FIXED_HPP_

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& other);

		void setRawBits(const int rawBits);
		int getRawBits() const;
	private:
		static const int _nFracBits = 8;
		int _rawBits;
};

#endif

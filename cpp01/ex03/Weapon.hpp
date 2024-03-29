/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:36:22 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:36:23 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON_HPP_
# define EX03_WEAPON_HPP_

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();

		void setType(std::string type);
		std::string getType() const;

	private:
		std::string _type;
};

#endif

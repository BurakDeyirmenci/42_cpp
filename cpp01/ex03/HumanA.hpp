/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:35:35 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:35:36 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANA_HPP_
# define EX03_HUMANA_HPP_

#include "Weapon.hpp"

#include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void attack() const;
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif

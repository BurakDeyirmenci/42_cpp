/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:35:49 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:35:49 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB_HPP_
# define EX03_HUMANB_HPP_

#include "Weapon.hpp"

#include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(const Weapon &weapon);
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif

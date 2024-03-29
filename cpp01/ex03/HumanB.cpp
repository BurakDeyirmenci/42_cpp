/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:35:42 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:35:43 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
	: _name(name)
	, _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (_weapon != NULL) {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	}
}

void HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = (Weapon*)&weapon;
}

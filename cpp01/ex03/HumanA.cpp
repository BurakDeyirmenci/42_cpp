/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:35:25 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:35:26 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name)
	, _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

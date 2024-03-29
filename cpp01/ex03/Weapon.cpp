/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:36:16 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:36:16 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: _type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) {
	this->_type = type;
}

std::string Weapon::getType() const {
	return this->_type;
}

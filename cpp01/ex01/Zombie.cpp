/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:48 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:34:48 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie()
	: _name("zombie") {}

Zombie::Zombie(std::string name)
	: _name(name) {}

Zombie::~Zombie() {
	std::cout << "<" << this->_name << "> Enought brainz..." << std::endl;
}

void Zombie::announce() const {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newName) {
	this->_name = newName;
}

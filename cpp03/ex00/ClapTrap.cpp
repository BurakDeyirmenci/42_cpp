#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
	: _name("Default")
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << this->_name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " ClapTrap destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " = " << other._name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ClapTrap can't attack because is dead" << std::endl;
		return;
	}

	std::cout
		<< this->_name << " ClapTrap attack " << target
		<< ", causing " << this->_attackDamage << " damage"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ClapTrap can't take damage because is dead" << std::endl;
		return;
	}
	std::cout << this->_name << " ClapTrap has taken " << amount << " damage" << std::endl;

	if (amount > this->_hitPoints) {
		amount = this->_hitPoints;
	}

	this->_hitPoints -= amount;

}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ClapTrap can't be repaired because is dead" << std::endl;
		return;
	}
	
	this->_hitPoints += amount;
	std::cout << this->_name << " ClapTrap has repaired " << amount << " hit points" << std::endl;
}

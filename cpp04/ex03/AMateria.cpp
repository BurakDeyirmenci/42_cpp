#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

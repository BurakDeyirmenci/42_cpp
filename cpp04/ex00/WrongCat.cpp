#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() {
	this->type = "Cat";

	std::cout << "WrongCat: Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;

	std::cout << "WrongCat: Copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Mivay! Miyav! Miyav!" << std::endl;
}

#include "Dog.hpp"

#include <iostream>

Dog::Dog() {
	this->type = "Dog";

	std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;

	std::cout << "Dog: Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "HAV! Roar! Hav!" << std::endl;
}

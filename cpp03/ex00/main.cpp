#include "ClapTrap.hpp"

#include <iostream>

int main() {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("as A Mistake");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Tensei");
	c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}

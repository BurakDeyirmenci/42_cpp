/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:33:59 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:34:00 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie *newZombie(std::string);
void randomChump(std::string name);

int main() {
	// watson the zombie
	Zombie *watson = new Zombie("Watson");;
	watson->announce();
	randomChump("otaku zombie");
	delete watson;

	std::cout << std::endl;

	// mickel jackson con tremenda bachata zombie
	Zombie *mickel = newZombie("Mickel");
	mickel->announce();
	// peppa pig
	Zombie *peppa = newZombie("Peppa pig");
	peppa->announce();
	mickel->announce();
	delete mickel;
	peppa->announce();
	delete peppa;

	std::cout << std::endl;

	// random chumps
	randomChump("vegan zombie");

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:38 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:34:38 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie *zombieHorde(int N, std::string name);

int main() {
	int size;
	Zombie *horde;

	size = 4;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_01");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 2;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_02");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 0;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_03");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = -1;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_04");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	return 0;
}

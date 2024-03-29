/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:53:41 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/19 10:53:42 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iostream>
#include <string>
#include <csignal>
#include <climits>

int main() {
	std::string line;
	PhoneBook *phoneBook = new PhoneBook();

	while (std::cout << "$> ", std::getline(std::cin, line)) {
		if (line == "SEARCH") {
			phoneBook->searchContact();
		} else if (line == "ADD") {
			phoneBook->addContact();
		} else if (line == "EXIT") {
			std::cout << "exit" << std::endl;
			break;
		} else if (std::cin.eof()) {
			break;
		}
		std::cin.clear();
	}
	std::cin.clear();

	delete phoneBook;
	return 0;
}

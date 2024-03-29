/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:37:46 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:37:47 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout
			<< "Error: Invalid number of arguments." << '\n'
			<< "Usage: <program> <file name> <search> <replace>" << std::endl;
		return 1;
	}
	if (Sed::replace(argv[1], argv[2], argv[3])) {
		return 1;
	}
	return 0;
}

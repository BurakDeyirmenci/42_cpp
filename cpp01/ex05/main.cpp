/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:09:44 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/28 16:09:45 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	Harl *harl;

	harl = new Harl;
	for (int i = 1; i < argc; i++) {
		if (i > 1) std::cout << std::endl;
		harl->complain(argv[i]);
	}
	delete harl;

	return 0;
}

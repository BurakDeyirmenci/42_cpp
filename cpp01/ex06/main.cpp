/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:14:08 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/28 16:14:09 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	Harl *karen;

	karen = new Harl;
	for (int i = 1; i < argc; i++) {
		if (i > 1) std::cout << std::endl;
		karen->complain(argv[i]);
	}
	delete karen;

	return 0;
}

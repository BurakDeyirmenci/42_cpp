/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:03:22 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/28 16:12:30 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	static const int LevelCount = 4;

	std::string complainLevels[LevelCount] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	f functions[LevelCount] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < LevelCount; i++) {
		if (complainLevels[i].compare(level) == 0) {
			(this->*(functions[i]))();
			return;
		}
	}
	std::cerr << "Error: Geçersiz seviye" << std::endl;
}

void Harl::debug() {
	std::cout
		<< "[ DEBUG ]\n"
		<< "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!"
		<< std::endl;
}

void Harl::info() {
	std::cout
		<< "[ INFO ]\n"
		<< "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum." 
		<< "Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!"
		<< std::endl;
}

void Harl::warning() {
	std::cout
		<< "[ WARNING ]\n"
		<< "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın."
		<< std::endl;
}

void Harl::error() {
	std::cout
		<< "[ ERROR ]\n"
		<< "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum."
		<< std::endl;
}

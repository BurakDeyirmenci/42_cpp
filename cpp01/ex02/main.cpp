/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:35:13 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:35:14 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	// initialise vars
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	// print address of the string
	std::cout << "\nADDRESS OF THE STRING:\n\n"
		<< "string:    " << &string << '\n'
		<< "stringPTR: " << stringPTR << '\n'
		<< "stringREF: " << &stringREF << '\n';

	// display string content
	std::cout << "\nCONTENT OF THE STRING:\n\n"
		<< "string:    " << string << '\n'
		<< "stringPTR: " << *stringPTR << '\n'
		<< "stringREF: " << stringREF << '\n'
		<< std::endl;

	return 0;
}

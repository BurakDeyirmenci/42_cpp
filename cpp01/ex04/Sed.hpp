/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:37:59 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:37:59 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_SED_HPP_
# define EX04_SED_HPP_

#include <string>

class Sed {
	public:
		Sed();
		~Sed();

		static int replace(std::string const filename, std::string const s1, std::string const s2);
	private:
		static std::string _strReplace(std::string line, std::string const s1, std::string const s2);
};

#endif

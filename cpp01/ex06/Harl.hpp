/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:11:20 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/28 16:11:21 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_HARL_HPP_
# define EX05_HARL_HPP_

# include <string>

class Harl {
	public:
		Harl();
		~Harl();

		void complain(std::string level);
	private:
		void debug();
		void info();
		void warning();
		void error();

		typedef void (Harl::*f)();
};

#endif

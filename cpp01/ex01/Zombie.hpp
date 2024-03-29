/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:58 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/27 15:34:58 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ZOMBIE_HPP_
# define EX00_ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void setName(std::string newName);
		void announce() const;
	private:
		std::string _name;
};

#endif

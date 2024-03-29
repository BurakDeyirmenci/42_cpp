/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:53:33 by rdeyirme          #+#    #+#             */
/*   Updated: 2023/04/19 10:53:35 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
		int setInformation(int index);
		void tableDisplay();
		void fullDisplay();

	private:
		static const int FIELDS_CNT = 5;
		enum fields {
			firstName = 0,
			lastName,
			nickname,
			phone,
			darkestSecret
		};

		int index;
		std::string fieldsInfo[FIELDS_CNT];
};

#endif

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		    ShrubberyCreationForm();
            ShrubberyCreationForm(const std::string target);
		    ShrubberyCreationForm(const ShrubberyCreationForm &form);
		    ~ShrubberyCreationForm();
		    ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &form);
            std::string	getTarget() const;
            void    exForm() const;
	private:
		    std::string _target;
};

std::ostream				&operator<<(std::ostream &output , ShrubberyCreationForm &form);

#endif
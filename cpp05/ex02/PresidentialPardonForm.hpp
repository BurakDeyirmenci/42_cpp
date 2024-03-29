#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm
{
	public:
		    PresidentialPardonForm();
            PresidentialPardonForm(const std::string target);
		    PresidentialPardonForm(const PresidentialPardonForm &form);
		    ~PresidentialPardonForm();
		    PresidentialPardonForm	&operator=(const PresidentialPardonForm &form);
            std::string	getTarget() const;
            void    exForm() const;
	private:
		    std::string _target;
};

std::ostream				&operator<<(std::ostream &output , PresidentialPardonForm &form);

#endif
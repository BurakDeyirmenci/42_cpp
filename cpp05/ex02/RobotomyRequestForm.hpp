#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		    RobotomyRequestForm();
            RobotomyRequestForm(const std::string target);
		    RobotomyRequestForm(const RobotomyRequestForm &form);
		    ~RobotomyRequestForm();
		    RobotomyRequestForm	&operator=(const RobotomyRequestForm &form);
            std::string	getTarget() const;
            void    exForm() const;
	private:
		    std::string _target;
};

std::ostream				&operator<<(std::ostream &output , RobotomyRequestForm &form);

#endif
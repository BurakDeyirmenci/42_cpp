#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern
{
	public:
			Intern();
			Intern(const Intern &intern);
			~Intern();
			Intern	&operator=(const Intern &intern);
			AForm	*makeForm(const std::string form, const std::string target);
		class FormInvalidException : public std::exception
		{
			public:
					virtual const char	*what() const throw();
		};
};

#endif
#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{

}

Intern	&Intern::operator=(const Intern &intern)
{
	if (this == &intern)
		return(*this);
	return (*this);
}

const char	*Intern::FormInvalidException::what() const throw()
{
	return ("Form is Invalid please check name");
}

static AForm *makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm *makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(const std::string form, const std::string target)
{
	AForm	*validForms[3] = {makePresident(target), makeRobot(target), makeShrubbery(target)};
	const std::string forms[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	AForm	*formToMake;
	formToMake = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i])
		{
			std::cout << "Intern creates " << form << " " << target << std::endl;
			formToMake = validForms[i];
		}
		else
			delete validForms[i];
	}
	if (formToMake == NULL)
		throw  Intern::FormInvalidException();
	return (formToMake);
}

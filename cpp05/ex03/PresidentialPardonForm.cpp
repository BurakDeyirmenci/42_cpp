#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 5, 25)
{
	this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 5, 25)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm(form)
{
	*this = form;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	if (this == &form)
		return *this;
	this->_target = form._target;
	return (*this);
}

std::string   PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void	PresidentialPardonForm::exForm() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, PresidentialPardonForm &form)
{
	out << "Form: " << form.getName() << "| Execution grade: " << form.getGradeExecution()
	<< "| Sign grade: " << form.getSignGrade() << "| Signed: " << form.getSigned() 
    << "| Target: " << form.getTarget() << std::endl;
	return (out);
}

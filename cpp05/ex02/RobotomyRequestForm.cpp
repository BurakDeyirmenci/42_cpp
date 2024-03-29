#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72)
{
	this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 45, 72)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm(form)
{
	*this = form;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this == &form)
		return *this;
	this->_target = form._target;
	return (*this);
}

std::string   RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void	RobotomyRequestForm::exForm() const
{
    srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "DddRrRrriIIiIiLlLlL" << this->getTarget() << " was robotomized" << std::endl;
	else
		std::cout << "Robotomization of " << this->getTarget() << " has failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, RobotomyRequestForm &form)
{
	out << "Form: " << form.getName() << "| Execution grade: " << form.getGradeExecution()
	<< "| Sign grade: " << form.getSignGrade() << "| Signed: " << form.getSigned() 
    << "| Target: " << form.getTarget() << std::endl;
	return (out);
}
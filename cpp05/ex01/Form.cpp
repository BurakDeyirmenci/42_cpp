#include "Form.hpp"

Form::Form() : _name("Default"), _gradeExecution(150),
			_signGrade(150), _signed(false)
{

}
	
Form::Form(const std::string name, int gradeExecute, int signGrade) : _name(name),
			_gradeExecution(gradeExecute), _signGrade(signGrade)
{
	
	if (this->_gradeExecution < 1 || this->_signGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeExecution > 150 || this->_signGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;		
}

Form::Form(const Form &form) : _name(form._name), _gradeExecution(form._gradeExecution),
							_signGrade(form._signGrade)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = form;
	
}

Form::~Form()
{
		
}

Form	&Form::operator=(const Form &form)
{
	if (this == &form)
		return *this;
	this->_signed = form._signed;
	return (*this);
}

void	Form::beSigned(Bureaucrat &member)
{
	if (member.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	if (this->_signed == false)
	{
		this->_signed = true;
		std::cout << member.getName() << " has signed Form: " << this->getName() << std::endl;
	}
	else 
		std::cout << this->getName() << " Form is already signed" << std::endl;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high was called for Form");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low was called for Form");
}

int	Form::getGradeExecution() const
{
	return (this->_gradeExecution);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

std::ostream	&operator<<(std::ostream &out, Form *form)
{
	out << "Form: " << form->getName() << "| Execution grade: " << form->getGradeExecution()
	<< "| Sign grade: " << form->getSignGrade() << "| Signed: " << form->getSigned() << std::endl;
	return (out);
}

std::ostream	&operator<<(std::ostream &out, Form &form)
{
	out << "Form: " << form.getName() << "| Execution grade: " << form.getGradeExecution()
	<< "| Sign grade: " << form.getSignGrade() << "| Signed: " << form.getSigned() << std::endl;
	return (out);
}
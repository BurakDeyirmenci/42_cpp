#include "AForm.hpp"

AForm::AForm() : _name("Default"), _gradeExecution(150),
			_signGrade(150), _signed(false), _executed(false)
{

}
	
AForm::AForm(const std::string name, int gradeExecute, int signGrade) : _name(name),
			_gradeExecution(gradeExecute), _signGrade(signGrade)
{
	try
	{
		if (this->_gradeExecution > 150 || this->_signGrade > 150)
			throw AForm::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form could not be made becauese: " << e.what() << std::endl;
	}
	try
	{
		if (this->_gradeExecution < 1 || this->_signGrade < 1)
			throw AForm::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form could not be made becauese: " << e.what() << std::endl;
	}
	this->_signed = false;
	this->_executed = false;
}

AForm::AForm(const AForm &AForm) : _name(AForm._name), _gradeExecution(AForm._gradeExecution),
							_signGrade(AForm._signGrade)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = AForm;
	
}

AForm::~AForm()
{
		
}

AForm	&AForm::operator=(const AForm &form)
{
	if (this == &form)
		return *this;
	this->_signed = form._signed;
	return (*this);
}

void	AForm::beSigned(Bureaucrat &member)
{
	try
	{
		if (member.getGrade() > this->getSignGrade())
			throw AForm::GradeTooLowException();
		if (this->_signed == false)
		{
			this->_signed = true;
			std::cout << member.getName() << " has signed Form: " << this->getName() << std::endl;
		}
		else 
			std::cout << this->getName() << " Form is already signed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << member.getName() << " was not able to sign " << this->getName() 
		<< " because: " << e.what() << std::endl;
	}
}

int	AForm::getGradeExecution() const
{
	return (this->_gradeExecution);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high was called for Form");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low was called for Form");
}

std::ostream	&operator<<(std::ostream &out, AForm *form)
{
	out << "Form: " << form->getName() << "| Execution grade: " << form->getGradeExecution()
	<< "| Sign grade: " << form->getSignGrade() << "| Signed: " << form->getSigned() << std::endl;
	return (out);
}

std::ostream	&operator<<(std::ostream &out, AForm &form)
{
	out << "Form: " << form.getName() << "| Execution grade: " << form.getGradeExecution()
	<< "| Sign grade: " << form.getSignGrade() << "| Signed: " << form.getSigned() 
	<< "| Executed: " << std::endl;
	return (out);
}

void	AForm::execute(const Bureaucrat &member) const
{
	if (member.getGrade() > this->_gradeExecution)
		throw AForm::GradeTooLowException();
	if (this->_signed == false)
		throw AForm::FormNotSigned();
	exForm();

}

const char	*AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed has been called for AForm");
}
#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;		
}

Bureaucrat::Bureaucrat(const Bureaucrat &member) : _name(member._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = member;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &member)
{
	if (this == &member)
		return *this;
	this->_grade = member._grade;
	return (*this);
}

void	Bureaucrat::increaseGrade()
{
	std::cout << "Bureaucrat " << this->_name << " grade is trying to be increased" 
				<< std::endl;
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade -= 1;
		std::cout << "Bureaucrat " << this->_name << " has a grade increase and is now grade " 
				<< this->_grade << std::endl;
}

void	Bureaucrat::decreaseGrade()
{
	std::cout << "Bureaucrat " << this->_name << " grade is trying to be decreased" 
				<< std::endl;
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade += 1;
		std::cout << "Bureaucrat " << this->_name << " has a grade decrease and is now grade " 
				<< this->_grade << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for increase");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for decrease");
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat *member)
{
	out << "Bureaucrat: " << member->getName() << " grade: " << member->getGrade() << std::endl;
	return (out);
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat &member)
{
	out << "Bureaucrat: " << member.getName() << " grade: " << member.getGrade() << std::endl;
	return (out);
}
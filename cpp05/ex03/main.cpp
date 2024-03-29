#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "Test 1" << std::endl;
	{
		Bureaucrat	a("Director", 3);
		Intern		intern;
		AForm		*b;
		try
		{
			b = intern.makeForm("Presidential Pardon", "Jibby");
			a.signForm(*b);
			a.executeForm(*b);
			std::cout << a;
			std::cout << b;
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "Test 2" << std::endl;
	{
		Bureaucrat	a("Director", 3);
		Intern		intern;
		AForm		*b;
		try
		{
			b = intern.makeForm("Robotomy Request", "Cop");
			a.signForm(*b);
			a.executeForm(*b);
			std::cout << a;
			std::cout << "Cop" << b;
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "Test 3" << std::endl;
	{
		Bureaucrat	a("Director", 3);
		Bureaucrat	c("Newhire", 150);
		Bureaucrat	e("Employee", 100);
		Intern		intern;
		AForm		*b;
		AForm		*d;
		try
		{
			b = intern.makeForm("Shrubbery Creation", "Park");
			a.signForm(*b);
			a.executeForm(*b);
			std::cout << a;
			std::cout << "Park " << b;
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			d = intern.makeForm("Shrubbery Creation", "City");
			c.signForm(*d);
			e.executeForm(*d);
			std::cout << c;
			std::cout << e;
			std::cout << "City " << d;
			delete d;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "Test 4" << std::endl;
	{
		Bureaucrat	a("Director", 3);
		Intern		intern;
		AForm		*b;
		try
		{
			b = intern.makeForm("MagicalGatheringForm", "Mashel");
			a.signForm(*b);
			a.executeForm(*b);
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	return (0);
}
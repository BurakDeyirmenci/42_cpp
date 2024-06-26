#ifndef AForm_HPP
# define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	public:
			AForm();
			AForm(const std::string name, int signGrade, int executeGrade);
			AForm(const AForm &form);
			~AForm();
			AForm    &operator=(const AForm &form);
			void				beSigned(Bureaucrat &member);
			int					getGradeExecution() const;
			int					getSignGrade() const;
			const std::string	getName() const;
			bool				getSigned() const;
			bool				getExecuted() const;
			virtual void 		exForm() const = 0;
			void				execute(const Bureaucrat &executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	private:
			const std::string	_name;
			const int			_gradeExecution;
			const int			_signGrade;
			bool				_signed;
			bool				_executed;
};

std::ostream				&operator<<(std::ostream &output , AForm *form);
std::ostream				&operator<<(std::ostream &output , AForm &form);

#endif
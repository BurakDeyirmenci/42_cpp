#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145)
{
	this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 137, 145)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : AForm(form)
{
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this == &form)
		return *this;
	this->_target = form._target;
	return (*this);
}

std::string   ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void	ShrubberyCreationForm::exForm() const
{
    std::ofstream output(this->getTarget().append("_shrubbery").c_str());
    for(int i = 0; i < 4; i++)
    {
        output <<
			"               ,@@@@@@@," << std::endl <<
			"      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
			"    ,&%%%%&%%&&%%,@@@@@/@@@@@@,8888\\88/8o" << std::endl <<
			"   ,%%&\\%%&&%%&&%%,@@@\\@@@/@@@88\\88888/88'" << std::endl <<
			"   %%&&%%&%%&/%%&&%%@@\\@@/ /@@@88888\\88888'" << std::endl <<
			"   %%&&%%/ %%&%%%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl <<
			"   `&%%\\ ` /%%&'    |.|        \\ '|8'" << std::endl <<
			"       |o|        | |         | |" << std::endl <<
			"       |.|        | |         | |" << std::endl <<
			"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl <<
		std::endl;
    }
	output.close();
}

std::ostream	&operator<<(std::ostream &out, ShrubberyCreationForm &form)
{
	out << "Form: " << form.getName() << "| Execution grade: " << form.getGradeExecution()
	<< "| Sign grade: " << form.getSignGrade() << "| Signed: " << form.getSigned() 
    << "| Target: " << form.getTarget() << std::endl;
	return (out);
}
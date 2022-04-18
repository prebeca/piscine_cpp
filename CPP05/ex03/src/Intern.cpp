#include "Intern.hpp"

Intern::Intern(void) 
{
}

Intern::Intern(Intern & c) 
{
	(void)c;
}

Intern::~Intern(void) 
{
}

Intern & Intern::operator=(Intern & rhs) 
{
	(void)rhs;
	return (*this);
}

Form * Intern::makeForm(std::string name, std::string target) 
{
	FormTemplate knownForm[NUM_KNOWN_FORM] = {
		{ "shrubbery creation", makeFormShrubbery },
		{ "robotomy request", makeFormRobotomy },
		{ "presidential pardon", makeFormPardon }
	};

	for (int i = 0; i < NUM_KNOWN_FORM; ++i)
	{
		if (knownForm[i].name.compare(name) == 0)
		{
			Form * newForm = knownForm[i].makeForm(target);
			std::cout << "Intern creates " << newForm->getName() << std::endl;
			return (newForm);
		}
	}

	std::cout << "Unknown form type: " << name << std::endl;
	return (0);
}

Form * Intern::makeFormRobotomy(std::string target) 
{
	return (new RobotomyRequestForm(target));
}

Form * Intern::makeFormPardon(std::string target) 
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::makeFormShrubbery(std::string target) 
{
	return (new ShrubberyCreationForm(target));
}

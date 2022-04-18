/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:57:06 by user42            #+#    #+#             */
/*   Updated: 2021/08/22 19:58:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & c):
Form(c)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) 
{
	(void) rhs;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->isSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::string fileName = this->getTarget()+ "_shrubbery";
	try
	{
		std::ofstream os;
		os.open(fileName.c_str());
		os << ASCII_TREE;
		os.close();
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
}

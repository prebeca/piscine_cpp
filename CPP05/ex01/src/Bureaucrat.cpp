/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:01:03 by user42            #+#    #+#             */
/*   Updated: 2021/08/22 15:23:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructor/destructor------------------------------------------------------

Bureaucrat::Bureaucrat(void): name("n/a"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): name(name), grade(checkGrade(grade))
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & c): name(c.name), grade(c.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

// operators overload----------------------------------------------------------

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs)
{
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (os);
}

// getters/setters-------------------------------------------------------------

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

// misc------------------------------------------------------------------------

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
	}
}


unsigned int Bureaucrat::checkGrade(int grade)
{
	if (grade < BUREAUCRAT_MAX_GRADE)
		throw GradeTooHighException();
	else	if (grade > BUREAUCRAT_MIN_GRADE)
		throw GradeTooLowException();
	return (grade);
}

void Bureaucrat::upGrade(unsigned int n) 
{
	this->grade = checkGrade(this->grade - n);
}

void Bureaucrat::downGrade(unsigned int n) 
{
	this->grade = checkGrade(this->grade + n);
}

// exceptions------------------------------------------------------------------

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade Too High Exception");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade Too Low Exception");
}

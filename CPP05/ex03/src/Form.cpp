/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:47:13 by user42            #+#    #+#             */
/*   Updated: 2021/08/22 20:08:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// constructors/destructors----------------------------------------------------------

Form::Form(void):
name("n/a"), target("n/a"), gradeSign(1), gradeExec(1), sign(false)
{
}

Form::Form(std::string name, std::string target, int gradeSign, int gradeExec):
name(name), target(target), gradeSign(checkGrade(gradeSign)), gradeExec(checkGrade(gradeExec)), sign(false)
{
}

Form::Form(const Form & c):
name(c.name), target(c.target), gradeSign(c.gradeSign), gradeExec(c.gradeExec), sign(c.sign)
{	
}

Form::~Form() 
{
}

// operators overload----------------------------------------------------------

Form & Form::operator=(const Form & rhs) 
{
	(void)rhs;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Form & rhs)
{
	if (rhs.isSigned())
		std::cout << "Form \"" << rhs.getName() << "\" is signed and require minimum grade " 
		<< rhs.getGradeExec() << " to be executed.";
	else
		std::cout << "Form \"" << rhs.getName() << "\" need to be signed by a minimum grade " 
		<< rhs.getGradeSign() << " and require minimum grade " << rhs.getGradeExec() << " to be executed.";
	return (os);
}

// getters/setters-------------------------------------------------------------

std::string Form::getName(void) const
{
	return (this->name);
}

std::string Form::getTarget(void) const
{
	return (this->target);
}

bool Form::isSigned(void) const
{
	return (this->sign);
}

unsigned int Form::getGradeSign(void) const
{
	return (this->gradeSign);
}

unsigned int Form::getGradeExec(void) const
{
	return (this->gradeExec);
}

// misc------------------------------------------------------------------------

void Form::beSigned(const Bureaucrat & b) 
{
	if (b.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}

unsigned int Form::checkGrade(const int grade) 
{
	if (grade < FORM_MAX_GRADE)
		throw GradeTooHighException();
	else	if (grade > FORM_MIN_GRADE)
		throw GradeTooLowException();
	return (grade);
}

// exceptions------------------------------------------------------------------

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

const char * Form::FormNotSignedException::what() const throw()
{
	return ("Form Not Signed");
}
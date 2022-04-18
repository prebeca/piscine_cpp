/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:42:13 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 15:38:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & c):
Form(c)
{
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) 
{
	(void) rhs;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (this->isSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:57:06 by user42            #+#    #+#             */
/*   Updated: 2021/08/27 15:01:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", target, 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & c):
Form(c)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) 
{
	(void) rhs;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (this->isSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (rand() % 2)
		std::cout << "*drilling noise* " << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "*drilling noise* " << this->getTarget() << "'s robotomization failed." << std::endl;
}

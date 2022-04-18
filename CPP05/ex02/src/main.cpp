/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:54:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 13:21:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <stdlib.h>

int main(void)
{
	Bureaucrat marvin("Marvin", 150);
	Bureaucrat ford("Ford", 75);
	Bureaucrat zaphod("Zaphod", 5);
	Bureaucrat trillian("Trillian", 50);

	ShrubberyCreationForm formA("Home");
	RobotomyRequestForm formB("C-3PO");
	PresidentialPardonForm formC("Arthur Dent");

	marvin.signForm(formA);
	ford.signForm(formA);
	ford.executeForm(formA);

	ford.signForm(formB);
	trillian.signForm(formB);
	trillian.executeForm(formB);
	zaphod.executeForm(formB);

	trillian.signForm(formC);
	zaphod.signForm(formC);
	zaphod.executeForm(formC);
	return (0);
}
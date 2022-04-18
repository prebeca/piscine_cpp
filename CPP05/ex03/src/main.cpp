/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:54:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/27 15:12:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <stdlib.h>

int main(void)
{
	Bureaucrat zaphod("Zaphod", 2);
	Bureaucrat trillian("Trillian", 24);
	Intern marvin;
	Form * form28c;

	std::cout << std::endl;
	form28c = marvin.makeForm("random form", "Trillian");			// unknown form -> form28c = 0

	std::cout << std::endl;
	form28c = marvin.makeForm("shrubbery creation", "Home");		// known form   -> form28c = new ShrubberyCreationForm("Home")
	trillian.signForm(*form28c);
	zaphod.executeForm(*form28c);
	delete form28c;

	std::cout << std::endl;
	form28c = marvin.makeForm("robotomy request", "Arthur");
	trillian.signForm(*form28c);
	zaphod.executeForm(*form28c);
	delete form28c;

	std::cout << std::endl;
	form28c = marvin.makeForm("presidential pardon", "Arthur");
	trillian.signForm(*form28c);
	zaphod.executeForm(*form28c);
	delete form28c;

	return (0);
}
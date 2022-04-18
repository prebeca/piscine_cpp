/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:54:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/22 19:17:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void tryForm(std::string name, int gradeSign, int gradeExec)
{
	std::cout << "Try create form " << name << " gradeSign " << gradeSign << " and gradeExec " << gradeExec << ": ";
	try
	{
		Form f(name, gradeSign, gradeExec);
		std::cout << f << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	tryForm("28a", 150, 1);
	tryForm("26b", 151, 1);
	tryForm("32c", 150, 0);
	tryForm("58d", 75, 75);

	std::cout << std::endl;

	Bureaucrat randy("Randy", 75);
	Form formA("28a", 100, 50);
	Form formB("28b", 75, 75);
	Form formC("28c", 50, 50);

	std::cout << randy << std::endl << std::endl;
	std::cout << formA << std::endl;
	randy.signForm(formA);
	std::cout << formA << std::endl << std::endl;
	std::cout << formB << std::endl;
	randy.signForm(formB);
	std::cout << formB << std::endl << std::endl;
	std::cout << formC << std::endl;
	randy.signForm(formC);
	std::cout << formC << std::endl;
	return (0);
}
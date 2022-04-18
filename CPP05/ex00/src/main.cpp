/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:54:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/27 14:27:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void tryUpGrade(Bureaucrat & b, int grade)
{
	std::cout << "Try upgrade " << b.getName() << " from grade " << b.getGrade() << " to " << b.getGrade() - grade << ": ";
	try
	{
		b.upGrade(grade);
		std::cout << b << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void tryDownGrade(Bureaucrat & b, int grade)
{
	std::cout << "Try downgrade " << b.getName() << " from grade " << b.getGrade() << " to " << b.getGrade() + grade << ": ";
	try
	{
		b.downGrade(grade);
		std::cout << b << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void tryBureaucrat(std::string name, int grade)
{
	std::cout << "Try create " << name << " grade " << grade << ": ";
	try
	{
		Bureaucrat randy(name, grade);
		std::cout << randy << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	Bureaucrat randyRandom("Randy Random", 150);
	Bureaucrat randy(randyRandom);

	std::cout << randyRandom << std::endl;
	std::cout << randy << std::endl;

	tryDownGrade(randy, 1);
	tryUpGrade(randy, 75);
	tryUpGrade(randy, 75);
	tryUpGrade(randy, 74);

	std::cout << std::endl;

	tryBureaucrat("Jim", 1);
	tryBureaucrat("Louis", 75);
	tryBureaucrat("Karen", 150);
	tryBureaucrat("Arthur", 0);
	tryBureaucrat("Margo", 151);
	tryBureaucrat("Jeanne", -42);
	tryBureaucrat("Alphonse", 175);

	return (0);
}
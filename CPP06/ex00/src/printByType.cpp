/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printByType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:19:59 by user42            #+#    #+#             */
/*   Updated: 2021/09/03 15:39:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void printFromChar(char c)
{
	if (std::isprint(c))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : " << "Non displayable" << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void printFromInt(int i)
{
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char : " << "imposibble" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void printFromDouble(double d)
{
	if (d > CHAR_MAX || d < CHAR_MIN || (d == d) == false)
		std::cout << "char : " << "imposibble" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN || (d == d) == false)
		std::cout << "int : " << "imposibble" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(d) << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void printFromFloat(float f)
{
	if (f > CHAR_MAX || f < CHAR_MIN || (f == f) == false)
		std::cout << "char : " << "imposibble" << std::endl;
	else if (!std::isprint(f))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
	if (f > INT_MAX || f < INT_MIN || (f == f) == false)
		std::cout << "int : " << "imposibble" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(f) << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}
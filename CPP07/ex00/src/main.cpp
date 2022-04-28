/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:26:32 by user42            #+#    #+#             */
/*   Updated: 2021/09/13 13:44:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

void test_with_string(std::string a, std::string b)
{
	std::cout << "std::string a = \""<< a  << "\", b = \"" << b << "\""<< std::endl;
	::swap<std::string>(a, b);
	std::cout << "std::string a = \""<< a  << "\", b = \"" << b << "\""<< std::endl;
	std::cout << "min = " << ::min<std::string>(a, b) << std::endl;
	std::cout << "max = " << ::max<std::string>(a, b) << std::endl;
}

void test_with_int(int a, int b)
{
	std::cout << "int a = \""<< a  << "\", b = \"" << b << "\""<< std::endl;
	::swap<int>(a, b);
	std::cout << "int a = \""<< a  << "\", b = \"" << b << "\""<< std::endl;
	std::cout << "min = " << ::min<int>(a, b) << std::endl;
	std::cout << "max = " << ::max<int>(a, b) << std::endl;
}

void test_with_float(float a, float b)
{
	std::cout << "float a = "<< a  << ", b = " << b << std::endl;
	::swap<float>(a, b);
	std::cout << "float a = "<< a  << ", b = " << b << std::endl;
	std::cout << "min = " << ::min<float>(a, b) << std::endl;
	std::cout << "max = " << ::max<float>(a, b) << std::endl;
}

int main(void)
{
	std::cout << std::endl;
	test_with_string("whathever", "forever");
	std::cout << std::endl;
	test_with_int(42, -42);
	std::cout << std::endl;
	test_with_float(21.f, -21.f);
	std::cout << std::endl;

	int a, b;

	a = b = 10;
	std::cout << "int a = "<< a << ", b = " << b << std::endl;
	std::cout << "addresses of a = "<< &a << ", b = " << &b << std::endl;
	std::cout << "min = " << &::min<int>(a, b) << std::endl;
	std::cout << "max = " << &::max<int>(a, b) << std::endl;

	return (0);
}

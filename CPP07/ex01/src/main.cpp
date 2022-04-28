/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:54:09 by user42            #+#    #+#             */
/*   Updated: 2021/09/13 14:54:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

#define ARRAY_SIZE 10 // need to be >= 1

void strtoouper(std::string & s)
{
	int len = s.length();
	for (int i = 0; i < len; ++i)
		s[i] = toupper(s[i]);
}

int main(void)
{
	std::string array_string[ARRAY_SIZE];
	array_string[0] = "yolo";
	for (int i = 1; i < ARRAY_SIZE; ++i)
		array_string[i] = array_string[i - 1] + "-yolo";
	iter<std::string>(array_string, ARRAY_SIZE, &print);
	
	std::cout << std::endl;

	iter<std::string>(array_string, ARRAY_SIZE, &strtoouper);
	iter<std::string>(array_string, ARRAY_SIZE, &print);

	std::cout << std::endl;
	
	bool array_bool[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; ++i)
		array_bool[i] = i % 2;
	iter<bool>(array_bool, ARRAY_SIZE, &print);

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:06:40 by user42            #+#    #+#             */
/*   Updated: 2021/09/06 13:17:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}

	std::string value = argv[1];

	if (value.length() == 0)
	{
		std::cout << "Wrong arguments." << std::endl;
		return (1);
	}

	int (*func[5])(std::string) = {&isschar,  &issint, &issfloat, &issdouble, 0};

	int i = 0;
	while (func[i])
	{
		if (func[i](value))
			break;
		++i;
	}

	switch (i)
	{
	case typeChar:
			printFromChar(value[0]);
			break;
	case typeInt:
			printFromInt(atoi(value.c_str()));
			break;
	case typeFloat:
			printFromFloat(strtof(value.c_str(), NULL));
			break;
	case typeDouble:
			printFromDouble(strtod(value.c_str(), NULL));
			break;
	default:
			std::cout << "bad arguments" << std::endl;
			break;
	}

	return (0);
}
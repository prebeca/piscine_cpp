/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:25:18 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:30:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(int , char **)
{
	std::list<int> list;
	std::list<int>::iterator it;
	int value;

	list.push_back(10);
	list.push_back(42);
	list.push_back(5);
	list.push_back(21);
	list.push_back(19);

	value = 42;
	it = easyfind(list, value);
	if (it == list.end())
		std::cout << "value \"" << value << "\" not found" << std::endl;
	else
		std::cout << *it << std::endl;

	value = 64;
	it = easyfind(list, value);
	if (it == list.end())
		std::cout << "value \"" << value << "\" not found" << std::endl;
	else
		std::cout << *it << std::endl;
}
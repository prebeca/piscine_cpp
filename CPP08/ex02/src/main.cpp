/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:07:10 by user42            #+#    #+#             */
/*   Updated: 2021/09/18 15:00:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	// subject test main
	MutantStack<int> mstack;

	std::cout << "push(5)" << std::endl;
	mstack.push(5);
	std::cout << "push(17)" << std::endl;
	mstack.push(17);

	std::cout << "top() = ";
	std::cout << mstack.top() << std::endl;

	std::cout << "size() = ";
	std::cout << mstack.size() << std::endl;

	std::cout << "pop()" << std::endl;
	mstack.pop();

	std::cout << "top() = ";
	std::cout << mstack.top() << std::endl;

	std::cout << "size() = ";
	std::cout << mstack.size() << std::endl;

	std::cout << "push some values" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	std::cout << "iterator test" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	MutantStack<int> cpy_mstack = mstack;

	std::cout << "reverse_iterator test" << std::endl;
	MutantStack<int>::reverse_iterator rit = cpy_mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = cpy_mstack.rend();

	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	return 0;
}
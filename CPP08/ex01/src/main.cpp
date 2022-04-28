/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:48:26 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:40:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

#define NUM_VALUES 10000
#define DEFAULT_VALUES {2647, 86, -15, 48, -56, 45, 84, -2143648, -5, -46}

void tryAddTooManyValue(void)
{
	Span sp(NUM_VALUES);

	std::cout << std::endl << " -try adding too many value using multiple call to addNumber" << std::endl;
	for (int i = 0; i < NUM_VALUES + 2; ++i)
	{
		try
		{
			sp.addNumber(i);
		}
		catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}

void tryAddTooManyValueIterator(void)
{
	Span sp(NUM_VALUES);

	std::vector<int> v(NUM_VALUES + 2);
	std::srand(static_cast<unsigned>(std::time(NULL)));
	std::generate(v.begin(), v.end(), std::rand);

	std::cout << std::endl << " -try add too many value using iterators" << std::endl;
	try
	{
		sp.addNumber(v.begin(), v.end());
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void trySpanWithValues(void)
{
	Span sp(NUM_VALUES);

	int initTab[] = DEFAULT_VALUES;
	std::vector<int> v(initTab, initTab + (sizeof(initTab) / sizeof(initTab[0])));

	try
	{
		sp.addNumber(v.begin(), v.end());
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " -try span with vector " << sp << std::endl;
	try
	{
		std::cout << "shortest span = " <<sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void trySpanWithRandomValues(void)
{
	Span sp(NUM_VALUES);

	std::vector<int> v(NUM_VALUES);
	std::srand(static_cast<unsigned>(std::time(NULL)));
	std::generate(v.begin(), v.end(), std::rand);

	try
	{
		sp.addNumber(v.begin(), v.end());
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " -try span with full vector of " << NUM_VALUES << " random values" << std::endl;
	try
	{
		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void trySpanWithOneValues(void)
{
	Span sp(NUM_VALUES);

	std::cout << std::endl << " -try span with 1 value" << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void trySpanWithNoValues(void)
{
	Span sp(NUM_VALUES);

	std::cout << std::endl << " -try span with no value" << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(int, char**)
{
	tryAddTooManyValue();
	tryAddTooManyValueIterator();
	trySpanWithNoValues();
	trySpanWithOneValues();
	trySpanWithRandomValues();
	trySpanWithValues();
	return (0);
}
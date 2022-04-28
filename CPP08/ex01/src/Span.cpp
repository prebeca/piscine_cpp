/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:13:17 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:36:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor/destructor -----------------------------------------------------

Span::Span(unsigned int N): N(N)
{
}

Span::Span(const Span & copy): N(copy.N), vector(copy.vector)
{
}

Span::~Span() 
{
}

// getters/setters ------------------------------------------------------------

const std::vector<int> & Span::getVector(void) const
{
	return (vector);
}

// operators overload ---------------------------------------------------------

Span & Span::operator=(const Span & copy) 
{
	this->N = copy.N;
	this->vector = copy.vector;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Span & sp)
{
	std::vector<int>::const_iterator it = sp.getVector().begin();
	std::vector<int>::const_iterator ite = sp.getVector().end();

	os << "[" << *(it++);
	for (; it != ite; ++it)
		os << ", " << *it;
	os << "]";
	return (os);
}

// misc -----------------------------------------------------------------------

void Span::addNumber(int i)
{
	if (vector.size() >= N)
		throw Span::TooManyItemsException();
	vector.push_back(i);
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	for (; begin != end; ++begin)
	{
		if (vector.size() >= N)
			throw Span::TooManyItemsException();
		vector.push_back(*begin);
	}
}

unsigned int Span::shortestSpan(void) const
{
	unsigned int shortestSpan;
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite;

	if (vector.size() < 2)
		throw Span::NoPossibleSpanException();

	std::vector<int> tmp_v(vector);
	std::sort(tmp_v.begin(), tmp_v.end());

	it = tmp_v.begin() + 1;
	ite = tmp_v.end();
	shortestSpan =  static_cast<unsigned>(*it) - static_cast<unsigned>(*(it-1));
	for (; it != ite; ++it)
	{
		unsigned int span = static_cast<unsigned>(*it) - static_cast<unsigned>(*(it-1));
		shortestSpan = (span < shortestSpan) ? span : shortestSpan;
	}
	return (shortestSpan);
}

unsigned int Span::longestSpan(void) const
{
	if (vector.size() < 2)
		throw Span::NoPossibleSpanException();

	return (static_cast<unsigned>(*std::max_element(vector.begin(), vector.end()))
			- static_cast<unsigned>(*std::min_element(vector.begin(), vector.end())));
}

// exception ------------------------------------------------------------------

const char * Span::TooManyItemsException::what() const throw()
{
	return ("Too Many Items Exception");
}

const char * Span::NoPossibleSpanException::what() const throw()
{
	
	return ("No Possible Span Exception");
}

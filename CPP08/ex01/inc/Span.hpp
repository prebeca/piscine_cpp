/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:49:08 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:31:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span & copy);
	~Span();

	Span & operator=(const Span & copy);

	const std::vector<int> & getVector(void) const;

	void			addNumber(int i);
	void			addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;

	struct TooManyItemsException: std::exception
	{
		const char * what() const throw();
	};

	struct NoPossibleSpanException: std::exception
	{
		const char * what() const throw();
	};

private:
	Span(void);
	unsigned int N;
	std::vector<int> vector;
};

std::ostream & operator<<(std::ostream & os, const Span & sp);

#endif // SPAN_HPP
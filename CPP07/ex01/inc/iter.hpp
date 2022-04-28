/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:46:54 by user42            #+#    #+#             */
/*   Updated: 2021/09/13 14:53:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template < typename T >
void iter(T * array, int length, void (f)(T&))
{
	int i = -1;

	while (++i < length)
		f(array[i]);
}

template < typename T >
void print(T & a)
{
	std::cout << a << std::endl;
}

#endif // ITER_HPP
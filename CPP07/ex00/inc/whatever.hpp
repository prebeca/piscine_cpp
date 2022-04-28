/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:26:11 by user42            #+#    #+#             */
/*   Updated: 2021/09/13 13:40:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template < typename T >
void swap( T & a, T & b)
{
	T c = a;
	a = b;
	b = c;
}

template < typename T >
const T & min( const T & a, const T & b)
{
	return((a < b) ? a : b);
}

template < typename T >
const T & max( const T & a, const T & b)
{
	return((a > b) ? a : b);
}

#endif // WHATEVER_HPP
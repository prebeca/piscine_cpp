/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:13:44 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:29:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>

/**
 * @brief  look for value in container
 * @note   
 * @param  container: a container of int
 * @param  value: value to be found in the container
 * @retval Returns a read/write iterator that points to the first element in container that is equals to value. Or return the end iterator
 */
template < typename T >
typename T::iterator easyfind(T & container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

#endif // EASYFIND_HPP
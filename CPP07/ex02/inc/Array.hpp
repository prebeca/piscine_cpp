/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:58:17 by user42            #+#    #+#             */
/*   Updated: 2021/09/13 16:01:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template < typename T >
class Array
{
public:
	Array(void): array(new T[0]), length(0) {}
	Array(unsigned int ui): array(new T[ui]), length(static_cast<size_t>(ui)) {}

	Array(const Array<T> & copy): array(new T[copy.size()]), length(copy.size())
	{
		for (size_t i = 0; i < length; ++i)
			array[i] = copy[i];
	}

	virtual ~Array(){ delete [] array; }

	Array<T> & operator=(const Array<T> & rhs)
	{
		if (this->length != rhs.size())
		{
			delete [] array;
			array = new T[rhs.size()];
		}
		for (size_t i = 0; i < length; ++i)
			array[i] = rhs[i];
		return (*this);
	}

	T & operator[](size_t idx) const
	{
		if (idx >= length || idx < 0)
			throw std::out_of_range("index out of range");
		return (array[idx]);
	}

	size_t size(void) const { return (length); }

private:
	T * array;
	size_t length;
};

#endif // ARRAY_HPP
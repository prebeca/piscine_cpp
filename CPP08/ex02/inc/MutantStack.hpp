/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:23:00 by user42            #+#    #+#             */
/*   Updated: 2021/09/23 10:54:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T >
class MutantStack: public std::stack<T>
{
public:
	typedef typename MutantStack<T>::container_type::iterator iterator;
	typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack(void){}
	MutantStack(const MutantStack & copy): std::stack<T>(copy){}
	virtual ~MutantStack(){};

	MutantStack & operator=(const MutantStack & rhs)
	{
		this = dynamic_cast< std::stack<T> >(rhs);
	}

	iterator begin(void){ return (this->c.begin()); }
	iterator end(void){ return (this->c.end()); }
	reverse_iterator rbegin(void){ return (this->c.rbegin()); }
	reverse_iterator rend(void){ return (this->c.rend()); }
};
#endif // MUTANTSTACK_HPP
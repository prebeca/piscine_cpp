/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:50:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:29:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog(void);
	Dog(const Dog & c);
	virtual ~Dog();

	Dog & operator=(const Dog & rhs);

	void makeSound(void) const;
};

std::ostream & operator<<(std::ostream & os, const Dog & rhs);

#endif
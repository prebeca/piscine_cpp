/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:27:26 by user42            #+#    #+#             */
/*   Updated: 2021/08/16 19:20:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(const Animal & c);
	virtual ~Animal();

	Animal & operator=(const Animal & rhs);

	std::string getType(void) const;

	virtual void makeSound(void) const;

protected:
	Animal(std::string type);
	std::string type;
};

std::ostream & operator<<(std::ostream & os, const Animal & rhs);

#endif
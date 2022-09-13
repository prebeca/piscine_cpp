/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:50:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:28:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
public:
	Dog(void);
	Dog(const Dog & c);
	virtual ~Dog();

	Dog & operator=(const Dog & rhs);

	void makeSound(void) const;
	Brain & getBrain(void) const;

private:
	Brain * brain;
};

std::ostream & operator<<(std::ostream & os, const Dog & rhs);

#endif
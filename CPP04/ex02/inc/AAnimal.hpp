/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:27:26 by user42            #+#    #+#             */
/*   Updated: 2021/08/17 17:08:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
public:
	virtual ~AAnimal();

	AAnimal & operator=(const AAnimal & rhs);

	std::string getType(void) const;

	virtual void makeSound(void) const = 0;

protected:
	AAnimal(void);
	AAnimal(const AAnimal & c);
	AAnimal(std::string type);
	std::string type;
};

std::ostream & operator<<(std::ostream & os, const AAnimal & rhs);

#endif
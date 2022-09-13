/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:27:26 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:30:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal & c);
	virtual ~WrongAnimal();

	WrongAnimal & operator=(const WrongAnimal & rhs);

	std::string getType(void) const;

	void makeSound(void) const;

protected:
	WrongAnimal(std::string type);
	std::string type;
};

std::ostream & operator<<(std::ostream & os, const WrongAnimal & rhs);

#endif
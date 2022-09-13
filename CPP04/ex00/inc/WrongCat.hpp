/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:50:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:30:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat & c);
	virtual ~WrongCat();

	WrongCat & operator=(const WrongCat & rhs);

	void makeSound(void) const;
};

std::ostream & operator<<(std::ostream & os, const WrongCat & rhs);


#endif
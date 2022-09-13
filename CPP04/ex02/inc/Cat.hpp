/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:50:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:28:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
public:
	Cat(void);
	Cat(const Cat & c);
	virtual ~Cat();

	Cat & operator=(const Cat & rhs);

	void makeSound(void) const;
	Brain & getBrain(void) const;

private:
	Brain * brain;
};

std::ostream & operator<<(std::ostream & os, const Cat & rhs);


#endif
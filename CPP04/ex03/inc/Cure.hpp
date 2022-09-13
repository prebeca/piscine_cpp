/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:19:58 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:57:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria
{
public:
	Cure(void);
	virtual ~Cure();

	AMateria* clone() const;
	void use(ICharacter & target);

private:
	Cure(const Cure & c);
	Cure & operator=(const Cure & rhs);
};

#endif
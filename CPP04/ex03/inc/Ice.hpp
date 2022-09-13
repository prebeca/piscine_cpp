/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:19:58 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:56:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice: public AMateria
{
public:
	Ice(void);
	virtual ~Ice();

	AMateria* clone() const;
	void use(ICharacter & target);

private:
	Ice(const Ice & c);
	Ice & operator=(const Ice & rhs);
};

#endif
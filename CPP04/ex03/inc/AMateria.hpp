/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:05:54 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:53:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria(const std::string & type);
	virtual ~AMateria();

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);

protected:
	std::string type;

private:
	AMateria(void);
	AMateria(const AMateria & c);
	AMateria & operator=(const AMateria & rhs);
};

#endif
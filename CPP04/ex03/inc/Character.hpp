/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:45:20 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:28:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INVENTORY_SIZE 4

class Character: public ICharacter
{
public:
	Character(const std::string name);
	Character(const Character & c);
	virtual ~Character();

	Character & operator=(const Character & rhs);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	Character(void);
	
	std::string name;
	AMateria * inventory[INVENTORY_SIZE];
};


#endif
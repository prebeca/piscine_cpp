/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:20:15 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 15:19:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap & c);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & c);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate(void);

protected:
	ScavTrap(void);
};

std::ostream & operator<<(std::ostream& os, const ScavTrap & c);

#endif
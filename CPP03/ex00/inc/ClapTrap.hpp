/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:46:48 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 13:42:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap & c);

	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & c);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

private:
	ClapTrap(void);

	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
};

std::ostream & operator<<(std::ostream& os, const ClapTrap & c);

#endif
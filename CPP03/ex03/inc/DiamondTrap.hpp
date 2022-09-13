/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:13:11 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 16:13:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap & c);
	~DiamondTrap();

	DiamondTrap & operator=(const DiamondTrap & c);

	using ScavTrap::attack;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void whoAmI(void);

private:
	DiamondTrap(void);

	std::string name;
};

std::ostream & operator<<(std::ostream& os, const DiamondTrap & c);

#endif
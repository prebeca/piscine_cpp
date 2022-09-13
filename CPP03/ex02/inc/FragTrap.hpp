/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:20:15 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 14:53:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap & c);
	~FragTrap();

	FragTrap & operator=(const FragTrap & c);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);

private:
	FragTrap(void);
};

std::ostream & operator<<(std::ostream& os, const FragTrap & c);

#endif
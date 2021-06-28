/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:35:42 by user42            #+#    #+#             */
/*   Updated: 2021/05/31 12:31:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
private:
	std::string name;
	std::string type;

public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce(void);
    void    set_name(std::string new_name);
    void    set_type(std::string new_type);
};

#endif

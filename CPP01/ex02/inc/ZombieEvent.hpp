/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:46:45 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 12:32:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include "names.hpp"

class ZombieEvent
{
private:
	static std::string  type;

public:
	ZombieEvent();
	~ZombieEvent();

	static void     setZombieType(std::string newType);
	static Zombie   *newZombie(std::string name);
	static void     randomChump(void);
};

#endif

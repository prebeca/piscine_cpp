/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:04:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 12:35:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include "names.hpp"

class ZombieHorde
{
private:
    Zombie *horde;
    int     horde_size;

public:
    ZombieHorde(int n);
    ~ZombieHorde();

    void announce(void);
};


#endif
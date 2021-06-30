/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:46:17 by user42            #+#    #+#             */
/*   Updated: 2021/06/30 14:22:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon &weapon);
    void attack(void);
};

#endif
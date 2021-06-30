/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:46:17 by user42            #+#    #+#             */
/*   Updated: 2021/05/31 12:21:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();

    const std::string   &getType(void);
    void                setType(std::string type);
};

#endif
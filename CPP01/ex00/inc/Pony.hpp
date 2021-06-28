/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:06:46 by user42            #+#    #+#             */
/*   Updated: 2021/06/24 18:25:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
    std::string name;
    std::string color;

public:
    Pony(std::string name, std::string color);
    ~Pony();
    std::string to_string();
};


#endif
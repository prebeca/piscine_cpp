/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:22:45 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 15:20:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

# include "Brain.hpp"

class Human
{
private:
    Brain brain;

public:
    Human();
    ~Human();

    Brain       &getBrain(void);
    std::string identify(void);
};

#endif
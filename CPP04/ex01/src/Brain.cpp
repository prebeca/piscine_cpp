/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:50:47 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 13:10:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A new Brain is created !" << std::endl;
	for (int i = 0; i < NUM_IDEAS; ++i)
		this->ideas[i] = "";
}

Brain::Brain(const Brain & c)
{
	std::cout << "A new Brain is copied !" << std::endl;
	for (int i = 0; i < NUM_IDEAS; ++i)
		this->ideas[i] = c.ideas[i];
}

Brain::~Brain()
{
	std::cout << "A Brain is destroyed !" << std::endl;
}

Brain & Brain::operator=(const Brain & rhs)
{
	for (int i = 0; i < NUM_IDEAS; ++i)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

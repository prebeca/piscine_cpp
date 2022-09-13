/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:42:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 12:56:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define NUM_IDEAS 100

class Brain
{
public:
	Brain(void);
	Brain(const Brain & c);
	virtual ~Brain();

	Brain & operator=(const Brain & rhs);

private:
	std::string ideas[NUM_IDEAS];
};

#endif
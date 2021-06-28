/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:33:01 by user42            #+#    #+#             */
/*   Updated: 2021/06/24 18:25:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, std::string color)
{
	Pony	my_little_pony = Pony(name, color);

	std::cout << my_little_pony.to_string() << " He/She is playing on the stack." << std::endl;
	return ;
}

void	ponyOnTheHeap(std::string name, std::string color)
{
	Pony    *my_little_pony = new Pony(name, color);

	std::cout << my_little_pony->to_string() << " He/She is playing on the heap." << std::endl;
	delete my_little_pony;
	return ;
}

int		main()
{
	ponyOnTheStack("OnTheStack", "pink");
	std::cout << std::endl;
	ponyOnTheHeap("OnTheHeap", "red");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:54:03 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 12:19:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	this->levelList[0] = "ERROR";
	this->levelList[1] = "WARNING";
	this->levelList[2] = "INFO";
	this->levelList[3] = "DEBUG";
	this->levelList[4] = "";
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
	std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int levelIndex = 0;
	while (!this->levelList[levelIndex].empty())
	{
		if (this->levelList[levelIndex].compare(level) == 0)
			break;
		++levelIndex;
	}

	switch (levelIndex)
	{
		case 3:
			this->debug();
		case 2:
			this->info();
		case 1:
			this->warning();
		case 0:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
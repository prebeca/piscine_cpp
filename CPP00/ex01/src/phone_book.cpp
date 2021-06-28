/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 00:25:48 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 14:24:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

std::string	get_info(std::string input_msg)
{
	std::string input;

	std::cout << input_msg;
	std::getline(std::cin, input);
	return (trim(input));
}

void	add_contact(Contact contact_list[])
{
	std::string input;
	bool	empty_required_field = true;
	int i;

	i = 0;	
	while (i < 7 && !contact_list[i].is_empty())
		++i;
	if (!contact_list[i].is_empty())
	{
		std::cout << "Limit on the number of contacts reached." << std::endl;
		return ;
	}

	while (empty_required_field)
	{
		input = get_info("-first name: ");
		if (input.compare(""))
			empty_required_field = false;
		contact_list[i].set_first_name(input);

		input = get_info("-last name: ");
		if (input.compare(""))
			empty_required_field = false;
		contact_list[i].set_last_name(input);

		input = get_info("-nickname: ");
		if (input.compare(""))
			empty_required_field = false;
		contact_list[i].set_nickname(input);
		while (empty_required_field)
		{
			if (empty_required_field)
				std::cout << "ERROR: required at least a first name, a last name or nickname\ncontinue adding ?(yes/no)";
			std::getline(std::cin, input);
			if (!input.compare("n") || !input.compare("no") || !input.compare("N") || !input.compare("NO"))
				return;
			else if (!input.compare("y") || !input.compare("yes") || !input.compare("Y") || !input.compare("YES"))
				break ;
		}
	}
	contact_list[i].set_empty(false);

	contact_list[i].set_login(get_info("-login: "));

	contact_list[i].set_postal_address(get_info("-postal address: "));

	contact_list[i].set_email_address(get_info("-email address: "));

	contact_list[i].set_phone_number(get_info("-phone number: "));

	contact_list[i].set_birthday_date(get_info("-birthday date: "));

	contact_list[i].set_favorite_meal(get_info("-favorite meal: "));

	contact_list[i].set_underwear_color(get_info("-underwear color: "));

	contact_list[i].set_darkest_secret(get_info("-darkest secret: "));
}

void	search_contact(Contact contact_list[])
{
	std::string tmp;
	std::string input;
	int i;

	std::cout << std::endl << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << "" << std::setfill(' ') << std::endl;

	i = 0;
	while (i < 8 && !contact_list[i].is_empty())
	{
		std::cout << "|" << std::setw(10) << i << "|";
		tmp = contact_list[i].get_first_name().substr(0, 10);
		if (contact_list[i].get_first_name().length() > 10)
			tmp[9] = '.';
		std::cout << std::setw(10) << tmp << "|";
		tmp = contact_list[i].get_last_name().substr(0, 10);
		if (contact_list[i].get_last_name().length() > 10)
			tmp[9] = '.';
		std::cout << std::setw(10) << tmp << "|";
		tmp = contact_list[i].get_nickname().substr(0, 10);
		if (contact_list[i].get_nickname().length() > 10)
			tmp[9] = '.';
		std::cout << std::setw(10) << tmp << "|" << std::endl;
		++i;
	}

	std::cout << std::setfill('-') << std::setw(45) << "" << std::setfill(' ') << std::endl;
	std::cout << "Select an index:";
	std::getline(std::cin, input);
	input = trim(input);
	if (input.compare("") == 0)
		return ;
	i = atoi(input.c_str());
	if (input.find_first_not_of("0123456789") != input.npos || i < 0 || i >= 8 || contact_list[i].is_empty() == true)
		std::cout << "Error: not a valid index" << std::endl;
	else
		std::cout << std::endl << contact_list[i].to_string() << std::endl << std::endl;
}
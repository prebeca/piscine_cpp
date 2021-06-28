/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 00:26:16 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 14:26:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main(void)
{
	std::string input;
	Contact     contact_list[8];

	std::cout << std::endl << WELCOME_MSG << std::endl << std::endl;
	std::cout << "Phone_book_> ";
	while (std::getline(std::cin, input))
	{
		if (input.compare("EXIT") == 0)
			break ;
		if (input.compare("ADD") == 0)
			add_contact(contact_list);
		else if (input.compare("SEARCH") == 0)
			search_contact(contact_list);
		std::cout << "Phone_book_> ";
	}
	return (0);
}
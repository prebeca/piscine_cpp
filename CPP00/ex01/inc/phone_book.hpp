/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 00:31:44 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 14:09:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
 
# include <iostream>
# include <iomanip>
# include <cstdlib>

# include "Contact.hpp"

# define WELCOME_MSG \
"Welcome to your personal phone book\n\
\t-ADD: add a new contact\n\
\t-SEARCH: browse your contact list\n\
\t-EXIT: exit your phone book"

const std::string WHITESPACE = " \n\r\t\f\v";

void	add_contact(Contact *contact_list);
void	search_contact(Contact contact_list[]);

std::string ltrim(const std::string &s);
std::string rtrim(const std::string &s);
std::string trim(const std::string &s);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 01:08:14 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 14:09:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phone_book.hpp"

class Contact
{
private:

	bool		empty;

	std::string first_name;

	std::string last_name;

	std::string nickname;

	std::string login;

	std::string postal_address;

	std::string email_address;

	std::string phone_number;

	std::string birthday_date;

	std::string favorite_meal;

	std::string underwear_color;

	std::string darkest_secret;

public:

	Contact();

	~Contact();

	int compare(Contact contact);
	bool is_empty(void);
	std::string to_string(void);

	// setters
	void set_empty(bool empty);
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_login(std::string login);
	void set_postal_address(std::string postal_address);
	void set_email_address(std::string email_address);
	void set_phone_number(std::string email_address);
	void set_birthday_date(std::string birthday_date);
	void set_favorite_meal(std::string favorite_meal);
	void set_underwear_color(std::string underwear_color);
	void set_darkest_secret(std::string darkest_secret);

	// getters
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_login(void);
	std::string get_postal_address(void);
	std::string get_email_address(void);
	std::string get_phone_number(void);
	std::string get_birthday_date(void);
	std::string get_favorite_meal(void);
	std::string get_underwear_color(void);
	std::string get_darkest_secret(void);
};

#endif
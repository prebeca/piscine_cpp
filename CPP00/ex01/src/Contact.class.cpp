/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 01:02:14 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 14:10:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

Contact::Contact()
{
	empty = true;
}

Contact::~Contact()
{
}

bool Contact::is_empty()
{
	return (this->empty);
}

std::string Contact::to_string(void)
{
	std::string return_string;

	return_string = "First name: ";
	return_string += this->first_name;
	return_string += "\nLast name: ";
	return_string += this->last_name;
	return_string += "\nNickname: ";
	return_string += this->nickname;
	return_string += "\nlogin: ";
	return_string += this->login;
	return_string += "\npostal address: ";
	return_string += this->postal_address;
	return_string += "\nEmail address: ";
	return_string += this->email_address;
	return_string += "\nPhone number: ";
	return_string += this->phone_number;
	return_string += "\nBirthday date: ";
	return_string += this->birthday_date;
	return_string += "\nFavorite meal: ";
	return_string += this->favorite_meal;
	return_string += "\nUnderwear color: ";
	return_string += this->underwear_color;
	return_string += "\nDarkest secret: ";
	return_string += this->darkest_secret;
	return (return_string);
}

// setters

void Contact::set_empty(bool empty)
{
	this->empty = empty;
}

void Contact::set_first_name(std::string first_name)
{
	first_name[0] = toupper(first_name[0]);
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	last_name[0] = toupper(last_name[0]);
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_login(std::string login)
{
	this->login = login;
}

void Contact::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

void Contact::set_email_address(std::string email_address)
{
	this->email_address = email_address;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_birthday_date(std::string birthday_date)
{
	this->birthday_date = birthday_date;
}

void Contact::set_favorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

void Contact::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

// getters

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_login(void)
{
	return (this->login);
}

std::string Contact::get_postal_address(void)
{
	return (this->postal_address);
}

std::string Contact::get_email_address(void)
{
	return (this->email_address);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string Contact::get_birthday_date(void)
{
	return (this->birthday_date);
}

std::string Contact::get_favorite_meal(void)
{
	return (this->favorite_meal);
}

std::string Contact::get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:18:09 by user42            #+#    #+#             */
/*   Updated: 2021/09/06 13:16:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int issprint(std::string s)
{
	int i = 0;

	while (s[i])
	{
		if (!std::isprint(s[i]))
			return (false);
		++i;
	}
	return (true);
}

int issint(std::string s)
{
	int i = 0;
	bool is_neg = false;

	if (!std::isdigit(s[i]) && s.length() == 1)
		return (0);
	if (s[i] == '-' && s.length() > 1)
	{
		++i;
		is_neg = true;
	}
	while (s[i])
	{
		if (!std::isdigit(s[i]))
			return (0);
		++i;
	}
	if (!is_neg && s.compare("2147483647") > 0)
		return (0);
	if (is_neg && std::strcmp(&s.c_str()[1], "2147483648") > 0)
		return (0);
	return (1);
}

int issfloat(std::string s)
{
	if (s.length() < 3 || s[s.length() - 1] != 'f')
		return (0);
	if (s.compare("-inff") == 0 || s.compare("+inff") == 0 || s.compare("inff") == 0 || s.compare("nanf") == 0)
		return (1);
	size_t i = 0;
	if (s[i] == '-' && s.length() > 1)
		++i;
	while (std::isdigit(s[i]) && i < s.length() - 1)
		++i;
	if (s[i] != '.')
		return (0);
	++i;
	while (std::isdigit(s[i]) && i < s.length() - 1)
		++i;
	if (i != s.length() - 1)
		return (0);
	return (1);
}

int issdouble(std::string s)
{
	if (s.length() == 1 && s[s.length() - 1] == '.')
		return (0);
	if (s.compare("-inf") == 0 || s.compare("+inf") == 0 || s.compare("inf") == 0 || s.compare("nan") == 0)
		return (1);
	size_t i = 0;
	if (s[i] == '-' && s.length() > 1)
		++i;
	while (std::isdigit(s[i]) && i < s.length())
		++i;
	if (s[i] == '.')
		++i;
	while (std::isdigit(s[i]) && i < s.length())
		++i;
	if (i != s.length())
		return (0);
	return (1);
}

int isschar(std::string s)
{
	int i = 0;

	if (s.length() != 1 || std::isdigit(s[i]))
		return (0);
	return (1);
}
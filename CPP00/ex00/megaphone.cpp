/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 23:06:28 by user42            #+#    #+#             */
/*   Updated: 2021/04/30 00:07:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	size_t	j;
	std::string s;
	std::string tmp;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);	
	}
	i = 0;
	while (++i < argc)
	{
		tmp = argv[i];
		j = -1;
		while (++j < tmp.length())
			tmp[j] = toupper(tmp[j]);
		s += tmp;
	}
	std::cout << s << std::endl;
	return (0);
}
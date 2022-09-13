/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:51:27 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 17:30:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen myKaren;

	myKaren.complain("DEBUG");
	myKaren.complain("INFO");
	myKaren.complain("WARNING");
	myKaren.complain("ERROR");

	myKaren.complain("nothing");
	myKaren.complain("error");
	myKaren.complain("INFORMATION");
	myKaren.complain("");

	return (0);
}

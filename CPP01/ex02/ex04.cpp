/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:07:29 by user42            #+#    #+#             */
/*   Updated: 2021/06/30 14:01:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string = " << &str << std::endl;
    std::cout << "stringPTR = " << stringPTR << std::endl;
    std::cout << "stringREF = " << &stringREF << std::endl;

    std::cout << "stringPTR = " << *stringPTR << std::endl;
    std::cout << "stringREF = " << stringREF << std::endl;

    return (0);
}
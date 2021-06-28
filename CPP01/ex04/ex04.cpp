/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:07:29 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 13:23:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    // std::string &ref; can't be uninitialized
    std::string &ref = str;

    // std::cout << "str = " << str << std::endl;
    std::cout << "ptr = " << *ptr << std::endl;
    std::cout << "ref = " << ref << std::endl;

    // str = "HI THIS IS BRAIN (modified str)";
    // std::cout << "str = " << str << std::endl;
    // *ptr = "HI THIS IS BRAIN (modified by ptr)";
    // std::cout << "str = " << str << std::endl;
    // ref = "HI THIS IS BRAIN (modified by ref)";
    // std::cout << "str = " << str << std::endl;
    return (0);
}
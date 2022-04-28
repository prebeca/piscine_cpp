/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:15:09 by user42            #+#    #+#             */
/*   Updated: 2021/09/06 13:12:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <climits>
# include <cfloat>
# include <cstring>
# include <stdlib.h>

typedef enum e_type
{
	typeChar,
	typeInt,
	typeFloat,
	typeDouble
}t_type;

// Find type
int issprint(std::string s);
int issint(std::string s);
int issfloat(std::string s);
int issdouble(std::string s);
int isschar(std::string s);

// Print by type
void printFromChar(char c);
void printFromInt(int i);
void printFromDouble(double d);
void printFromFloat(float f);

#endif // CONVERT_HPP
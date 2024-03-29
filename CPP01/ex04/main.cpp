/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:00:18 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 12:14:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int    check_args(int argc, char *argv[])
{
	int i;

	if (argc != 4)
		return (1);
	i = 1;
	while (i < argc)
		if (std::string(argv[i++]).compare("") == 0)
			return (1);
	return (0);
}

std::string replace_word(std::string str, unsigned long posFromWhereToReplace, int numberOfCharToReplace, std::string strToReplaceWith)
{
	std::stringstream sStrm;

	sStrm << str.substr(0, posFromWhereToReplace);
	sStrm << strToReplaceWith;
	sStrm << &str[posFromWhereToReplace + numberOfCharToReplace];

	return (sStrm.str());
}

int replace(std::string fileName, std::string s1, std::string s2)
{
	std::string content;

	std::ifstream input_file (fileName.c_str());
	if (!input_file.is_open())
		return (1);
	std::getline(input_file, content, '\0');
	input_file.close();

	int index = 0;
	size_t pos;
	while ((pos = content.find(s1, index)) != std::string::npos)
	{
		content = replace_word(content, pos, s1.length(), s2);
		index = pos + s2.length();
	}

	std::ofstream output_file ((fileName+".replace").c_str());
	if (!output_file.is_open())
		return (1);
	output_file << content;
	output_file.close();

	return (0);
}

int    main(int argc, char *argv[])
{
	if (check_args(argc, argv))
	{
		std::cout << "usage:\treplace [file_name] [s1] [s2]\nreplace each occurence of s1 by s2, neither file_name, s1 or s2 should be empty." << std::endl;
		return (1);
	}
	if (replace(argv[1], argv[2], argv[3]))
	{
		std::cout << "replace: error" << std::endl;
		return (1);
	}
	return (0);
}
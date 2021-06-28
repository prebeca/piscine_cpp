/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:00:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/31 14:03:56 by user42           ###   ########.fr       */
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

int replace(char *argv[])
{
	std::ifstream input_file (argv[1]);
	if (!input_file.is_open())
		return (1);

	std::stringstream sStrm;
	sStrm << argv[1] << ".replace";
	std::ofstream output_file (sStrm.str().c_str());
	if (!output_file.is_open())
	{
		input_file.close();
		return (1);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string line;
	while (std::getline(input_file, line))
	{
		int index = 0;
		size_t pos;
		while ((pos = line.find(s1, index)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			index = pos + s2.length();
		}
		output_file << line << std::endl;
	}

	output_file.close();
	input_file.close();
	return (0);
}

int    main(int argc, char *argv[])
{
	if (check_args(argc, argv))
	{
		std::cout << "usage:\treplace [file_name] [s1] [s2]\nreplace each occurence of s1 by s2, neither file_name, s1 or s2 should be empty." << std::endl;
		return (1);
	}
	if (replace(argv))
	{
		std::cout << "replace: error." << std::endl;
		return (1);
	}
	return (0);
}
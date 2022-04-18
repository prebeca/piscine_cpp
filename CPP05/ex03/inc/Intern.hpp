/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:56:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 15:15:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define NUM_KNOWN_FORM 3

class Intern
{
public:
	Intern(void);
	virtual ~Intern();

	Form * makeForm(std::string name, std::string target);

private:
	Intern(Intern & c);
	Intern & operator=(Intern & rhs);

	static Form * makeFormRobotomy(std::string target);
	static Form * makeFormPardon(std::string target);
	static Form * makeFormShrubbery(std::string target);

	struct FormTemplate
	{
		std::string name;
		Form * (*makeForm)(std::string target);
	};
	
};

#endif // INTERN_HPP
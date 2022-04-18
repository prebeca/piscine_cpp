/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:02:35 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 13:59:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define BUREAUCRAT_MAX_GRADE 1
# define BUREAUCRAT_MIN_GRADE 150

class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat & c);
	virtual ~Bureaucrat();

	std::string getName(void) const;
	unsigned int getGrade(void) const;

	void upGrade(unsigned int n = 1);
	void downGrade(unsigned int n = 1);

	void signForm(Form & form);

	static unsigned int checkGrade(int grade);

	struct GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};

	struct GradeTooLowException: public std::exception
	{
		const char * what() const throw();
	};

private:
	Bureaucrat(void);
	Bureaucrat & operator=(const Bureaucrat & rhs);

	const std::string name;
	unsigned int grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif // BUREAUCRAT_HPP
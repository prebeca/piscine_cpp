/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:08:09 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 13:58:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define FORM_MAX_GRADE 1
# define FORM_MIN_GRADE 150

class Bureaucrat;

class Form
{
public:
	Form(std::string name, std::string target, int gradeSign, int gradeExec);
	Form(const Form & c);
	virtual ~Form();

	std::string getName(void) const;
	std::string getTarget(void) const;
	bool isSigned(void) const;
	unsigned int getGradeSign(void) const;
	unsigned int getGradeExec(void) const;

	void beSigned(const Bureaucrat & b);
	virtual void execute(const Bureaucrat & executor) const = 0;

	static unsigned int checkGrade(int grade);

	struct GradeTooHighException: public std::exception
	{
		const char * what() const throw();
	};

	struct GradeTooLowException: public std::exception
	{
		const char * what() const throw();
	};
	
	struct FormNotSignedException: public std::exception
	{
		const char * what() const throw();
	};

protected:
	Form(void);

private:
	Form & operator=(const Form & rhs);

	const std::string name;
	std::string target;
	const unsigned int gradeSign;
	const unsigned int gradeExec;
	bool sign;

};

std::ostream & operator<<(std::ostream & os, const Form & rhs);

#endif // FORM_HPP
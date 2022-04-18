/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:36:10 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 13:58:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdlib.h>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & c);
	virtual ~RobotomyRequestForm();

	void execute(const Bureaucrat & executor) const;

private:
	RobotomyRequestForm(void);
	RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
};

#endif // ROBOTOMYREQUESTFORM_HPP
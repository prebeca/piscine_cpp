/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:39:38 by user42            #+#    #+#             */
/*   Updated: 2021/08/23 13:58:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & c);
	virtual ~PresidentialPardonForm();

	void execute(const Bureaucrat & executor) const;

private:
	PresidentialPardonForm(void);
	PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
};

#endif // PRESIDENTIALPARDONFORM_HPP
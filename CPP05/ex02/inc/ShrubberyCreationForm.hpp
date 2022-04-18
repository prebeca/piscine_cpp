/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:28:00 by user42            #+#    #+#             */
/*   Updated: 2021/08/27 15:22:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

# define ASCII_TREE "\n\
                    # #### ####\n\
                ### \\/#|### |/####\n\
                ##\\/#/ \\||/##/_/##/_#\n\
                ###  \\/###|/ \\/ # ###\n\
            ##_\\_#\\_\\## | #/###_/_####\n\
            ## #### # \\ #| /  #### ##/##\n\
            __#_--###`  |{,###---###-~\n\
                        \\ }{\n\
                        }}{\n\
                        }}{\n\
                        {{}                   &&& &&  & &&\n\
                , -=-~{ .-^- _            && &\\/&\\|& ()|/ @, &&\n\
                        `}                &\\/(/&/&||/& /_/)_&/_&\n\
                                       &() &\\/&|()|/&\\/ '%\" & ()\n\
           \\/ |    |/                 &_\\_&&_\\ |& |&&/&__%_/_& &&\n\
        \\/ / \\||/  /_/___/          &&   && & &| &| /& & % ()& /&&\n\
         \\/   |/ \\/                  ()&_---()&\\&\\|&&-&&--%---()~\n\
    _\\__\\_\\   |  /_____/_                 &&     \\|||\n\
           \\  | /          /                      |||\n\
  __ _-----`  |{,-----------~                     |||\n\
            \\ }{                                  |||\n\
             }{{                            , -=-~  .-^- _\n\
             }}{                                   `\n\
             {{}\n\
       , -=-~{ .-^- _\n\
             `}\n\n\
"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & c);
	virtual ~ShrubberyCreationForm();

	void execute(const Bureaucrat & executor) const;

private:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
};

#endif // SHRUBBERYCREATIONFORM_HPP
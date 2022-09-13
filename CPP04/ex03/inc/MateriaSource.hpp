/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:45:05 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:07:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# define MAX_KNOWN_MATERIA 4

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource & c);
	
	virtual ~MateriaSource();
	
	MateriaSource & operator=(const MateriaSource & c);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria * knownMateria[MAX_KNOWN_MATERIA];
};

#endif
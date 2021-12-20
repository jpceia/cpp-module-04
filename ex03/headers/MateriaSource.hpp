/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:24:17 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 01:31:40 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _inventory[4];

public:
    // Constructors
    MateriaSource(void);
    MateriaSource(const MateriaSource& rhs);
    
    // Destructor
    ~MateriaSource(void);
    
    // Assignation operator overload
    MateriaSource& operator=(const MateriaSource& rhs);

    // Other methods
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    void info(void) const;
};

#endif

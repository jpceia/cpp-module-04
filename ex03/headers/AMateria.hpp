/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:14:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:10:18 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    std::string _type;

public:
    AMateria(const std::string& type);
    AMateria(const AMateria& rhs);
    virtual ~AMateria(void);

    virtual AMateria& operator=(const AMateria& rhs); // ?

    const std::string& getType(void) const;
    
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif

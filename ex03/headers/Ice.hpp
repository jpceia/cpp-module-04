/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:17:27 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 01:42:01 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    // Constructors
    Ice(void);
    Ice(const Ice& rhs);

    // Destructor
    ~Ice(void);

    // Assignation operator overload
    using AMateria::operator=;

    // Other methods
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif

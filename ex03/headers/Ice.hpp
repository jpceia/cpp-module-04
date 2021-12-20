/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:17:27 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:09:21 by jceia            ###   ########.fr       */
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
    Ice& operator= (const Ice& rhs);

    // Other methods
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif

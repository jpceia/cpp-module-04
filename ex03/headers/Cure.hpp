/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:19:31 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 01:42:06 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    // Constructors
    Cure(void);
    Cure(const Cure& rhs);

    // Destructor
    ~Cure(void);

    // Assignation operator overload
    using AMateria::operator=;

    // Other methods
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif

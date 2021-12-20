/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:19:31 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:09:11 by jceia            ###   ########.fr       */
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
    Cure& operator= (const Cure& rhs);

    // Other methods
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif

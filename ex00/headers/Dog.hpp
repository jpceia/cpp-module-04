/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:42:57 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 01:03:40 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
    // Constructors
    Dog(void);
    Dog(const Dog& rhs);

    // Destructor
    ~Dog(void);

    // Assignment operator overload
    using Animal::operator=;

    // other methods
    void makeSound(void) const;
};

#endif

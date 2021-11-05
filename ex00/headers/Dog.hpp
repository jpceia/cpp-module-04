/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:42:57 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 23:57:37 by jceia            ###   ########.fr       */
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
    Dog& operator= (const Dog& rhs);

    // other methods
    void makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:41:13 by jceia             #+#    #+#             */
/*   Updated: 2021/12/20 21:02:51 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
    // Constructors
    Cat(void);
    Cat(const Cat& rhs);

    // Destructor
    ~Cat(void);

    // Assignment operator overload
    Cat& operator= (const Cat& rhs);

    // Other methods
    void makeSound(void) const;
};

#endif

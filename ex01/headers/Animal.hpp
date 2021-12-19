/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:37:58 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:49:21 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    // Constructors
    Animal(void);
    Animal(const std::string& type);
    Animal(const Animal& rhs);
    
    // Destructor
    virtual ~Animal();

    // Assignation operator overload
    virtual Animal& operator=(const Animal& rhs);

    // Getters
    std::string getType(void) const;

    // Other methods
    virtual void makeSound(void) const;
};

#endif

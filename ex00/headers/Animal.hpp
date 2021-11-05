/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:37:58 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 23:53:05 by jceia            ###   ########.fr       */
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
    Animal(std::string type);
    Animal(const Animal& rhs);
    
    // Destructor
    ~Animal();

    // Assignation operator overload
    Animal& operator=(const Animal& rhs);

    // Getters
    std::string getType(void) const;

    // other methods
    void makeSound(void) const;
};

#endif

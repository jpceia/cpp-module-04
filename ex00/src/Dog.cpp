/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:45:05 by jceia             #+#    #+#             */
/*   Updated: 2021/12/20 21:06:01 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
    : Animal("Dog")
{
    #ifdef DEBUG
    std::cout << "Dog created" << std::endl;
    #endif
}

Dog::Dog(const Dog &rhs) : Animal(rhs)
{
    #ifdef DEBUG
    std::cout << "Dog copy created" << std::endl;
    #endif
}

Dog::~Dog(void)
{
    #ifdef DEBUG
    std::cout << "Dog destroyed" << std::endl;
    #endif
}

Dog& Dog::operator=(const Dog &rhs)
{
    Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

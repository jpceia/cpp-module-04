/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:45:05 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 15:11:08 by jpceia           ###   ########.fr       */
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

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

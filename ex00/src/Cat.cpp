/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:43:45 by jceia             #+#    #+#             */
/*   Updated: 2021/12/20 21:06:20 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
    : Animal("Cat")
{
    #ifdef DEBUG
    std::cout << "Cat created" << std::endl;
    #endif
}

Cat::Cat(const Cat &rhs) : Animal(rhs)
{
    #ifdef DEBUG
    std::cout << "Cat copy created" << std::endl;
    #endif
}

Cat::~Cat(void)
{
    #ifdef DEBUG
    std::cout << "Cat destroyed" << std::endl;
    #endif
}

Cat& Cat::operator=(const Cat &rhs)
{
    Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

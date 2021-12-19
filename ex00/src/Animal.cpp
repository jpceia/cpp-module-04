/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:48 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:10:46 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    #ifdef DEBUG
    std::cout << "Animal default constructor called" << std::endl;
    #endif
}

Animal::Animal(const std::string& type)
    : _type(type)
{
    #ifdef DEBUG
    std::cout << "Animal constructor (type <" << type << ">) called"
        << std::endl;
    #endif
}

Animal::~Animal()
{
    #ifdef DEBUG
    std::cout << "Animal destructor called" << std::endl;
    #endif
}

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}

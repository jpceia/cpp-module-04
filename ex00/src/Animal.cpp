/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:48 by jceia             #+#    #+#             */
/*   Updated: 2021/12/20 21:04:37 by jceia            ###   ########.fr       */
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

Animal::Animal(const Animal& rhs)
    : _type(rhs._type)
{
    #ifdef DEBUG
    std::cout << "Animal copy constructor called" << std::endl;
    #endif
}

Animal::~Animal()
{
    #ifdef DEBUG
    std::cout << "Animal destructor called" << std::endl;
    #endif
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}

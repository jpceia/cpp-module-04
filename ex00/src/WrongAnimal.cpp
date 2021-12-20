/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 00:18:22 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:03:50 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    #ifdef DEBUG
    std::cout << "WrongAnimal default constructor called" << std::endl;
    #endif
}

WrongAnimal::WrongAnimal(const std::string& type)
    : _type(type)
{
    #ifdef DEBUG
    std::cout << "WrongAnimal constructor (type <" << type << ">) called"
        << std::endl;
    #endif
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
    : _type(rhs._type)
{
    #ifdef DEBUG
    std::cout << "WrongAnimal copy created" << std::endl;
    #endif
}

WrongAnimal::~WrongAnimal()
{
    #ifdef DEBUG
    std::cout << "WrongAnimal destructor called" << std::endl;
    #endif
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return _type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}

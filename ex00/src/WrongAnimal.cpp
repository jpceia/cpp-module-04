/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 00:18:22 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 00:19:24 by jpceia           ###   ########.fr       */
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

WrongAnimal::~WrongAnimal()
{
    #ifdef DEBUG
    std::cout << "WrongAnimal destructor called" << std::endl;
    #endif
}

std::string WrongAnimal::getType(void) const
{
    return _type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}

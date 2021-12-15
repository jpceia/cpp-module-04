/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:48 by jceia             #+#    #+#             */
/*   Updated: 2021/12/15 01:23:25 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
    : _type(type)
{
    std::cout << "Animal constructor (type <" << type << ">) called"
        << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}

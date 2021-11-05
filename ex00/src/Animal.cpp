/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:39:48 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 23:53:50 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type)
    : _type(type)
{
    std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout << "Bbrrrr" << std::endl;
}
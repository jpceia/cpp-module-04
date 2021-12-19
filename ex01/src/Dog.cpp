/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:45:05 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:56:59 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :
    Animal("Dog"),
    _brain(new Brain())
{
    #ifdef DEBUG
    std::cout << "Dog created" << std::endl;
    #endif
}

Dog::~Dog(void)
{
    delete _brain;
    #ifdef DEBUG
    std::cout << "Dog destroyed" << std::endl;
    #endif
}

Dog& Dog::operator=(Dog const &rhs)
{
    Animal::operator=(rhs);
    if (this != &rhs)
        *_brain = *rhs._brain;
    return *this;
}

std::string Dog::getIdea(int index) const
{
    return _brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea)
{
    _brain->setIdea(index, idea);
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

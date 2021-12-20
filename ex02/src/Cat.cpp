/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:43:45 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 17:06:49 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) :
    Animal("Cat"),
    _brain(new Brain())
{
    #ifdef DEBUG
    std::cout << "Cat created" << std::endl;
    #endif
}

Cat::Cat(const Cat &rhs)
{
    *this = rhs;
    #ifdef DEBUG
    std::cout << "Cat copy created" << std::endl;
    #endif
}

Cat::~Cat(void)
{
    delete _brain;
    #ifdef DEBUG
    std::cout << "Cat destroyed" << std::endl;
    #endif
}

Cat& Cat::operator=(Cat const &rhs)
{
    Animal::operator=(rhs);
    if (this != &rhs)
        *_brain = *rhs._brain;
    return *this;
}

std::string Cat::getIdea(int index) const
{
    return _brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea)
{
    _brain->setIdea(index, idea);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

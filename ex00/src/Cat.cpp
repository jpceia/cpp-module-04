/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:43:45 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:23:17 by jpceia           ###   ########.fr       */
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

Cat::~Cat(void)
{
    #ifdef DEBUG
    std::cout << "Cat destroyed" << std::endl;
    #endif
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

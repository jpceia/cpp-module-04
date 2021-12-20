/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:43:45 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:11:25 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void)
    : WrongAnimal("WrongCat")
{
    #ifdef DEBUG
    std::cout << "WrongCat created" << std::endl;
    #endif
}

WrongCat::WrongCat(const WrongCat &rhs)
    : WrongAnimal(rhs)
{
    #ifdef DEBUG
    std::cout << "WrongCat copy created" << std::endl;
    #endif
}

WrongCat::~WrongCat(void)
{
    #ifdef DEBUG
    std::cout << "WrongCat destroyed" << std::endl;
    #endif
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    WrongAnimal::operator=(rhs);
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

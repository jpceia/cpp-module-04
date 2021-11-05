/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:45:05 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 23:57:49 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
    : Animal("Dog")
{
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

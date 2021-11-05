/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:43:45 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 23:58:03 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
    : Animal("Cat")
{
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

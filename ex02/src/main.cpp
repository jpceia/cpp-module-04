/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:47:27 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 18:13:21 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int main(void)
{
    // unimplemented pure virtual method 'makeSound' in 'Animal'
    // const Animal* meta = new Animal(); allocating an object of abstract class type 'Animal'
    // Animal meta; variable type 'Animal' is an abstract class
    const Animal* cat = new Cat();
    cat->makeSound();
    delete cat;
}

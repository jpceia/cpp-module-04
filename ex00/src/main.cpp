/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:47:27 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:25:18 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        // 'Correct' solution
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;

        std::cout << "Dog sound: ";
        dog->makeSound();
        std::cout << "Cat sound: ";
        cat->makeSound(); // will output the cat sound!
        std::cout << "Animal sound: ";
        meta->makeSound();

        delete meta;
        delete dog;
        delete cat;
    }
    {
        // 'Incorrect' solution
        const WrongAnimal* cat = new WrongCat();

        std::cout << cat->getType() << " " << std::endl;

        std::cout << "WrongCat sound: ";
        cat->makeSound(); // will NOT output the cat sound!

        delete cat;
    }
}

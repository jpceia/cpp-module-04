/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:47:27 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 01:07:58 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "Test for cats:" << std::endl;
    {
        Cat cat1;
        Cat cat2;
        
        cat1.setIdea(0, "I'm a cat");
        cat2.setIdea(0, "I'm a tiger");
        std::cout << cat2.getIdea(0) << std::endl;
        cat2 = cat1;
        std::cout << cat2.getIdea(0) << std::endl;
        cat1.setIdea(0, "I changed my mind, I'm a lion");
        std::cout << cat1.getIdea(0) << std::endl;
        std::cout << cat2.getIdea(0) << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
    std::cout << "Test for dogs:" << std::endl;
    {
        Dog dog1;
        Dog dog2;

        dog1.setIdea(0, "I'm a dog");
        dog2.setIdea(0, "I'm a fox");
        std::cout << dog2.getIdea(0) << std::endl;
        dog2 = dog1;
        std::cout << dog2.getIdea(0) << std::endl;
        dog1.setIdea(0, "I changed my mind, I'm a wolf");
        std::cout << dog1.getIdea(0) << std::endl;
        std::cout << dog2.getIdea(0) << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
    std::cout << "Leak checker" << std::endl;
    {
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        
        delete dog; //should not create a leak
        delete cat;
    }
    return 0;
}

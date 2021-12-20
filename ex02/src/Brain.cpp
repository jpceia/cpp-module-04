/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:34:23 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 00:48:15 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    #ifdef DEBUG
    std::cout << "Brain default constructor called" << std::endl;
    #endif
}

Brain::Brain(const Brain& rhs)
{
    #ifdef DEBUG
    std::cout << "Brain copy constructor called" << std::endl;
    #endif
    *this = rhs;
}

Brain::~Brain(void)
{
    #ifdef DEBUG
    std::cout << "Brain destructor called" << std::endl;
    #endif
}

Brain& Brain::operator=(const Brain& rhs)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    #ifdef DEBUG
    std::cout << "Brain assignment operator called" << std::endl;
    #endif
    return (*this);
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return (_ideas[index]);
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return ;
    _ideas[index] = idea;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:27:14 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 00:46:04 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type)
{
    std::cout << "AMateria " << _type << " created" << std::endl;
}

AMateria::AMateria(const AMateria& rhs) : _type(rhs._type)
{
    std::cout << "AMateria " << _type << " copied" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria " << _type << " destroyed" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

const std::string& AMateria::getType(void) const
{
    return _type;
}

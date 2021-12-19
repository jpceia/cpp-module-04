/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:27:14 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 01:31:52 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type)
{
}

AMateria::AMateria(const AMateria& rhs) : _type(rhs._type)
{
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

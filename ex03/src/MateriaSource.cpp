/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:51:01 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/06 15:52:18 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource created" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs)
{
    std::cout << "MateriaSource copied" << std::endl;
    *this = rhs;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i] != NULL)
            {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
            if (rhs._inventory[i] != NULL)
                _inventory[i] = rhs._inventory[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            std::cout << "Learned " << materia->getType() << std::endl;
            _inventory[i] = materia;
            return;
        }
    }
    std::cout << "No space to learn " << materia->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL && _inventory[i]->getType() == type)
        {
            std::cout << "Created " << type << std::endl;
            return _inventory[i];
        }
    }
    std::cout << "No " << type << " to create" << std::endl;
    return (NULL);
}

void MateriaSource::info(void) const
{
    std::cout << "*** Materia Source description ***" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            std::cout << "  Slot " << i << ": " << _inventory[i]->getType() << std::endl;
        else
            std::cout << "  Slot " << i << ": (empty)" << std::endl;
    }
    std::cout << std::endl;
}

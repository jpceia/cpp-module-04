/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:33:24 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:20:33 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character(const std::string& name) :
    _name(name), _alloc_materia(NULL), _n_alloc(0)
{
    std::cout << "* " << _name << " is born *" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& rhs)
{
    std::cout << "Creating a copy of " << rhs._name << std::endl;
    *this = rhs;
    _alloc_materia = NULL;
    _n_alloc = 0;
}

Character::~Character(void)
{
    std::cout << "Destroying " << _name << "..." << std::endl;
    for (int i = 0; i < _n_alloc; i++)
        delete _alloc_materia[i];
    delete[] _alloc_materia;
}

Character& Character::operator=(const Character& rhs)
{
    // stuff to do
    if (this != &rhs)
    {
        _name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            if (rhs._inventory[i] != NULL)
            {
                _inventory[i] = rhs._inventory[i]->clone();
                
            }
            else
            {
                _inventory[i] = NULL;
            }
        }
    }
    return *this;
}

const std::string& Character::getName(void) const
{
    return _name;
}

const AMateria* Character::getMateria(int idx) const
{
    if (idx < 0 || idx > 3)
        return NULL;
    return _inventory[idx];
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            std::cout << _name << " equipped with " << m->getType() << std::endl;
            _inventory[i] = m;
            return;
        }
    }
    std::cout << _name << " has no more room for " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << _name << " has no " << idx << "th slot" << std::endl;
        return;
    }
    if (_inventory[idx] == NULL)
    {
        std::cout << _name << " has no inventory in " << idx << "th slot" << std::endl;
        return;
    }
    // The unequip method must NOT delete Materia!
    std::cout << _name << " unequips " << _inventory[idx]->getType() << std::endl;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << _name << " has no " << idx << "th slot" << std::endl;
        return;
    }
    if (_inventory[idx] == NULL)
    {
        std::cout << _name << " has no inventory in " << idx << "th slot" << std::endl;
        return;
    }
    std::cout << _name << " uses " << _inventory[idx]->getType() << std::endl;
    _inventory[idx]->use(target);
}

void Character::info(void) const
{
    std::cout << "*** Character description ***" << std::endl;
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Inventory: " << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            std::cout << "  Slot " << i << ": " << _inventory[i]->getType() << std::endl;
        else
            std::cout << "  Slot " << i << ": (empty)" << std::endl;
    }
    std::cout << std::endl;
}

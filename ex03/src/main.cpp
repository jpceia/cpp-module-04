/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:28:34 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 01:45:58 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    MateriaSource materiaSource;
    materiaSource.learnMateria(new Ice());
    materiaSource.learnMateria(new Cure());

    materiaSource.info();

    Character ash("Ash");
    Character gale("Gale");

    ash.equip(materiaSource.createMateria("ice"));
    ash.equip(materiaSource.createMateria("cure"));

    ash.info();

    ash.use(0, gale);

    gale.info();

    gale = ash;

    gale.info();

    ash.unequip(0);

    ash.info();
    gale.info();

    ash.equip(materiaSource.createMateria("ice"));
    ash.equip(materiaSource.createMateria("ice"));
    ash.equip(materiaSource.createMateria("ice"));
    ash.equip(materiaSource.createMateria("ice"));

    ash.info();
        
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:22:18 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/20 21:19:15 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    Character(void) {}  // Private constructor

    std::string _name;
    AMateria* _inventory[4];
    AMateria** _alloc_materia;
    size_t  _n_alloc;

public:
    // Constructors
    Character(const std::string& name);
    Character(const Character& rhs);

    // Destructor
    virtual ~Character(void);

    // Assignation operator overload
    Character& operator=(const Character& rhs);

    // Getters
    const std::string& getName(void) const;
    const AMateria* getMateria(int idx) const;

    // Other methods
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    void info(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 01:22:18 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 01:35:29 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    Character(void) {} // Private constructor - forbids default construction

    std::string _name;
    AMateria* _inventory[4];
public:
    // Constructors
    Character(const std::string& name);
    Character(const Character& rhs);

    // Destructor
    virtual ~Character(void);

    // Assignation operator overload
    Character& operator=(const Character& rhs);

    // Other methods
    const std::string& getName(void) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif

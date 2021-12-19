/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:37:58 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:20:16 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    // Constructors
    WrongAnimal(void);
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& rhs);
    
    // Destructor
    virtual ~WrongAnimal();

    // Assignation operator overload
    WrongAnimal& operator=(const WrongAnimal& rhs);

    // Getters
    std::string getType(void) const;

    // other methods
    void makeSound(void) const;
};

#endif

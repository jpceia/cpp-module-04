/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:37:58 by jceia             #+#    #+#             */
/*   Updated: 2021/12/20 21:01:57 by jceia            ###   ########.fr       */
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
    virtual WrongAnimal& operator=(const WrongAnimal& rhs);

    // Getters
    std::string getType(void) const;

    // other methods
    void makeSound(void) const;
};

#endif

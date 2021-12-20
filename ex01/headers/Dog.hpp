/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:42:57 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 17:30:46 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;

public:
    // Constructors
    Dog(void);
    Dog(const Dog& rhs);

    // Destructor
    virtual ~Dog(void);

    // Assignment operator overload
    Dog& operator= (const Dog& rhs);

    // Getters
    std::string getIdea(int index) const;

    // Setters
    void setIdea(int index, const std::string& idea);

    // Other methods
    void makeSound(void) const;
};

#endif

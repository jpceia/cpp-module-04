/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:41:13 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:47:58 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;

public:
    // Constructors
    Cat(void);
    Cat(const Cat& rhs);

    // Destructor
    ~Cat(void);

    // Assignment operator overload
    Cat& operator= (const Cat& rhs);

    // Getters
    std::string getIdea(int index) const;

    // Setters
    void setIdea(int index, const std::string& idea);

    // Other methods
    void makeSound(void) const;
};

#endif

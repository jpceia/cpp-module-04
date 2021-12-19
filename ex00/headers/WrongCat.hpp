/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:41:13 by jceia             #+#    #+#             */
/*   Updated: 2021/12/15 01:31:28 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    // Constructors
    WrongCat(void);
    WrongCat(const WrongCat& rhs);

    // Destructor
    ~WrongCat(void);

    // Assignment operator overload
    WrongCat& operator= (const WrongCat& rhs);

    // Other methods
    void makeSound(void) const;
};

#endif

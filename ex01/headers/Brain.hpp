/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:29:55 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/19 00:47:52 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];

public:
    // Constructors
    Brain(void);
    Brain(const Brain& rhs);

    // Destructor
    ~Brain(void);

    // Assignation operator overload
    Brain& operator= (const Brain& rhs);

    // Getters
    std::string getIdea(int index) const;

    // Setters
    void setIdea(int index, const std::string& idea);
};

#endif

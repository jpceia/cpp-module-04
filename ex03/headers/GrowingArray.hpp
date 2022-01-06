/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GrowingArray.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:32:03 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/06 11:03:20 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROWINGARRAY_HPP
# define GROWINGARRAY_HPP

# include <iostream>

template <typename T>
class GrowingArray
{
private:
    T *_array;
    std::size_t _size;

public:
    // Constructors
    GrowingArray();
    GrowingArray(const GrowingArray& rhs);
    
    // Destructor
    ~GrowingArray();

    // Assignation operator overload
    GrowingArray& operator= (const GrowingArray& rhs);

    // at operator overload
    T& operator[] (std::size_t index);
    const T& operator[] (std::size_t index) const;

    // push_back
    void push_back(const T& value);

    // size
    std::size_t size() const;
};

template <typename T>
GrowingArray<T>::GrowingArray()
{
    _array = new T[0];
    _size = 0;
}

template <typename T>
GrowingArray<T>::GrowingArray(const GrowingArray& rhs)
{
    _array = new T[rhs._size];
    _size = rhs._size;
    for (int i = 0; i < _size; i++)
        _array[i] = rhs._array[i];
}

template <typename T>
GrowingArray<T>::~GrowingArray()
{
    delete[] _array;
}

template <typename T>
GrowingArray<T>& GrowingArray<T>::operator= (const GrowingArray& rhs)
{
    if (this != &rhs)
    {
        delete[] _array;
        _array = new T[rhs._size];
        _size = rhs._size;
        for (int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
T& GrowingArray<T>::operator[] (std::size_t index)
{
    return _array[index];
}

template <typename T>
const T& GrowingArray<T>::operator[] (std::size_t index) const
{
    return _array[index];
}

template <typename T>
void GrowingArray<T>::push_back(const T& value)
{
    T *tmp = new T[_size + 1];
    for (std::size_t i = 0; i < _size; i++)
        tmp[i] = _array[i];
    tmp[_size] = value;
    delete[] _array;
    _array = tmp;
    _size++;
}

template <typename T>
std::size_t GrowingArray<T>::size() const
{
    return _size;
}

#endif

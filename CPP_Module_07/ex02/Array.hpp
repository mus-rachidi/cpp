/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:13:05 by murachid          #+#    #+#             */
/*   Updated: 2022/03/06 13:53:20 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>

class Array 
{
    private:
        T *ptr_arr;
        size_t size;
    public:
        Array<T>() : ptr_arr(NULL) ,size(0)
        {
        }
        Array(size_t n) : size(n)
        {
            this->ptr_arr = new T[size];
        }

        Array<T>(Array<T> const & obj)
        {
           this->size = obj.size;
            if(this->size == obj.size)
            {
                for (size_t i = 0 ; i < this->size ; i++)
                    this->ptr_arr = obj.ptr_arr;
            }
        }

        Array<T> &operator=(Array<T> const & obj)
        {
            if(this == &obj)
                return(*this);            
            if(this->size == obj.size)
            {
                for (size_t i = 0 ; i < this->size ; i++)
                    this->ptr_arr[i] = obj.ptr_arr[i];    
            }
           else
            {
                this->ptr_arr = new T[obj.size];
                for (size_t i = 0 ; i < obj.size ; i++)
                {
                    this->ptr_arr[i] = obj.ptr_arr[i]; 
                }
                this->size = obj.size;                  
            }
            return(*this);
        }

        T &operator[](size_t i) const
        {
            if( i >= this->size ) 
                throw "Index out of bounds";
            return ptr_arr[i];
        }

        T get_array(size_t i) const
        {
            return(this->ptr_arr[i]);
        }

        size_t  ft_size() const
        {
            return(this->size);
        }
        ~Array<T>()
        {
            delete [] this->ptr_arr;
        }
};

template<typename T>

std::ostream &operator<<(std::ostream &out, Array<T> const &obj) 
{
    for(size_t i = 0 ; i < obj.ft_size(); i++)
        out << obj.get_array(i);
    return(out);
}

#endif
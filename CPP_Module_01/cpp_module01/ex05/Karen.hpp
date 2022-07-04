/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:29 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 15:56:32 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include<iostream>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning( void );
        void error( void );
    public:
        void (Karen::*ptr_ft[4]) (void);
        Karen();
        ~Karen();
        void complain(std::string level);
};

#endif
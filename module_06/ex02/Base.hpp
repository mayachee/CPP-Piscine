/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:09:23 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 20:51:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
    private:
    
    public:
        Base();
        virtual ~Base() = 0; 
};

#endif
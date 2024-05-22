/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:20:12 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 18:12:02 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstdint>
#include <string>
#include "Data.hpp"
// #include <json/json.h>

class Serializer {
    private:
    
    public:

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
    
    Serializer() {} // private constructor to prevent instantiation
};

#endif
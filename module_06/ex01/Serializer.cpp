/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:19:47 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/21 18:28:27 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    // Convert the pointer to a uintptr_t
    uintptr_t ptr_val = reinterpret_cast<uintptr_t>(ptr);
    // std::cout << ptr_val << std::endl;
    return ptr_val;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* data = new Data();
    data->value = raw;
    // std::cout << "-->>" <<  data->value << std::endl;
    return data;
}
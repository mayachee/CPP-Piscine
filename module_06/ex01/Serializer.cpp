/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:19:47 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 15:36:10 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    // Convert the pointer to a uintptr_t
    uintptr_t ptr_val = reinterpret_cast<uintptr_t>(ptr);
    std::cout << ptr_val << std::endl;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    int* next_ptr = reinterpret_cast<int*>(raw);
    std::cout << raw << std::endl;
}
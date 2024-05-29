/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:19:10 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/29 19:10:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.value = 10;
    // Serializer serializer;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serializer: " << raw << std::endl;
    
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "DeSerializer: " << deserializedData << std::endl;
    return 0;
}
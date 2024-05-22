/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:19:10 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 18:10:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main() {
//     // int x = 10;
//     // int* ptr = &x;

//     // // Convert the pointer to a uintptr_t
//     // uintptr_t ptr_val = reinterpret_cast<uintptr_t>(ptr);

//     // // Perform arithmetic on the uintptr_t
//     // uintptr_t next_ptr_val = ptr_val + sizeof(int);

//     // // Convert the uintptr_t back to a pointer
//     // int* next_ptr = reinterpret_cast<int*>(next_ptr_val);

//     // // Print the memory addresses
//     // std::cout << "ptr: " << ptr << "\n";
//     // std::cout << "next_ptr: " << next_ptr << "\n";

//     return 0;
// }

int main() {
    Data data;
    data.value = 10;
    Serializer serializer;

    uintptr_t raw = serializer.serialize(&data);
    std::cout << "Serializer: " << raw << std::endl;
    
    Data* deserializedData = serializer.deserialize(raw);
    std::cout << "DeSerializer: " << deserializedData << std::endl;
    return 0;
}
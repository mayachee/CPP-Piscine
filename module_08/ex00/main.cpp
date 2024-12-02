/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:15 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/02 13:59:53 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.insert(v.begin(), 11); // Insert at the beginning

    // Loop to print the elements of the vector
    std::cout << "Vector elements: ";
    for (std::vector<int>::size_type i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
    try {
        easyfind(v, 9);
        easyfind(v, 245);
        easyfind(v, 3);
        
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
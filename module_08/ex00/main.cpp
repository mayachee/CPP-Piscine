/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:15 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/18 20:10:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    try {
        std::vector<int> v;
        v.push_back(2);
        v.push_back(9);
        v.push_back(2);
        v.push_back(5);
        v.push_back(245);
        v.insert(v.begin(), 11); // Insert at the beginning

        // Loop to print the elements of the vector
        std::cout << "Vector elements: ";
        for (unsigned long i = 0; i < v.size(); ++i) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    
        easyfind(v, 11);
        easyfind(v, 245);
        easyfind(v, 3);

        std::cout << "---> size v is " << v.size() << std::endl;
        for (unsigned long t = 0; t < v.size(); ++t)
        {
            std::cout << v[t] << " .";
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try{
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);

        std::vector<int>::reverse_iterator rit = numbers.rbegin();

        while (rit != numbers.rend()) {
            std::cout << *rit << " ";
            ++rit;
        }
        std::cout << "\ndestination" << std::endl;
        std::vector<int> destination;

        destination = numbers;
        std::vector<int>::iterator it = destination.begin();
        while (it != destination.end()) {
            std::cout << *it << " ";
            ++it;
        }
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

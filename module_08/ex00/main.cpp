/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:15 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/13 14:41:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(2);
    v.push_back(5);

    std::vector<int> f;
    f.push_back(1);
    f.push_back(2);
    
    try {
        easyfind(v, 9);
        easyfind(f, 3);
        
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
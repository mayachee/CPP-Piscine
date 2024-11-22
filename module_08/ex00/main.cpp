/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:15 by mayache-          #+#    #+#             */
/*   Updated: 2024/11/22 11:57:51 by mayache-         ###   ########.fr       */
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

    try {
        easyfind(v, 9);
        easyfind(v, 3);
        
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
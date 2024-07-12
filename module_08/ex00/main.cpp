/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:15 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/12 19:52:26 by mayache-         ###   ########.fr       */
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
    try {
        std::cout << *easyfind(v, 9) << std::endl;
        // std::cout << *easyfind(v, 42) << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:05:19 by mayache-          #+#    #+#             */
/*   Updated: 2024/07/13 14:41:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class NotFoundException : public std::exception {
    public:
        const char* what() const throw() {
            return "Element not found";
        }
};

template <typename T>
void easyfind(T& container, int value) {
    if (find(container.begin(), container.end(), value) != container.end())
        std::cout << "The element " << value << " is found" << std::endl;
    else
    throw NotFoundException();
        // throw(std::invalid_argument("Element not found"));
}

#endif

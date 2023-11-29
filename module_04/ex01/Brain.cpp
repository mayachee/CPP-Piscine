/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:23 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 19:34:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    // Constructor logic
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain() {
    // Destructor logic
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& other) {
    // Copy constructor logic
    std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(ideas));
    std::cout << "Brain copied." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    // Assignment operator logic
    if (this != &other) {
        std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(ideas));
        std::cout << "Brain assigned." << std::endl;
    }
    return *this;
}
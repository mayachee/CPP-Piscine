/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:23 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 22:16:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    // Constructor logic
    std::cout << YELLOW_TEXT << "Brain created." << std::endl;
}

Brain::~Brain() {
    // Destructor logic
    std::cout << YELLOW_TEXT << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << YELLOW_TEXT << "Brain copied." << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    // Assignment operator logic
    if (this != &other) {
    std::cout << YELLOW_TEXT << "Assignation operator called" << std::endl;
    //     this->ideas = other.ideas;
        }
    return *this;
}


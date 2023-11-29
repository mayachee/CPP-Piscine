/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:17 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 19:34:18 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << ORANGE_TEXT << "Default constructor has been called" << RESET_TEXT << std::endl;
}

Animal::Animal(std::string const& type)
{
    this->type = type;
    std::cout << ORANGE_TEXT << type << " created" << RESET_TEXT << std::endl;
}

std::string Animal::getType() const {
    return type;
}
void Animal::makeSound() const {
    std::cout << ORANGE_TEXT << "Generic Animal Sound\n" << RESET_TEXT;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << ORANGE_TEXT << "Assignation operator called" << RESET_TEXT << std::endl;
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return *this;
}
Animal::~Animal()
{
    std::cout << ORANGE_TEXT << "Animal destroyed" << RESET_TEXT << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:39 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 16:27:31 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << SNORKEL_BLUE_TEXT << "WrongAnimal Constructor\n";
}
WrongAnimal::WrongAnimal(std::string const& type)
{
    this->type = type;
    std::cout << SNORKEL_BLUE_TEXT << type << " created" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
void WrongAnimal::makeSound() const {
    std::cout << SNORKEL_BLUE_TEXT << "WrongAnimal Sound\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    std::cout << SNORKEL_BLUE_TEXT << "Assignation operator called" << std::endl;
    if (this != &wronganimal)
    {
        this->type = wronganimal.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << SNORKEL_BLUE_TEXT << "WrongAnimal Destructor\n";
}


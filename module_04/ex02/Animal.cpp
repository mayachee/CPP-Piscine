/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:45:32 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 12:29:32 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << ORANGE_TEXT << "Default constructor has been called" << RESET_TEXT << std::endl;
    this->type = "deault Animal";
}

Animal::Animal(const Animal &cpy_obj)
{
    std::cout << ORANGE_TEXT << "Animal copy constructor has been called" << RESET_TEXT << std::endl;
	*this = cpy_obj;
}

std::string Animal::getType() const {
    return type;
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

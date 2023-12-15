/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:31 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/14 17:51:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << BLUE_TEXT << "Dog created" << std::endl;
    this->type = "deault Dog";
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << BLUE_TEXT << "Dog copy constructor called" << std::endl;
    *this = cpy;
}

void Dog::makeSound() const
{
    std::cout << BLUE_TEXT << "Woof! Woof!\n";
}

Dog& Dog::operator=(const Dog& dog)
{
    std::cout << BLUE_TEXT << "Assignation operator called" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << BLUE_TEXT << "Dog destroyed" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:52 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/04 18:15:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << BLUE_TEXT << "Dog created" << std::endl;
    type = "Default Animal";
    // brain = Brain();
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

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << BLUE_TEXT << "Assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        // this->brain = obj.brain;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << BLUE_TEXT << "Dog destroyed" << std::endl;
    // delete (brain);
}

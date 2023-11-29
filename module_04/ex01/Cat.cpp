/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 19:34:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << RED_TEXT << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
    brain = new Brain();
	std::cout << RED_TEXT << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << RED_TEXT << "Meow Meow!\n";
}

Cat& Cat::operator=(const Cat& cat)
{
    std::cout << RED_TEXT << "Assignation operator called" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << RED_TEXT << "Cat destroyed" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/13 21:58:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Creating Cat constructor
Cat::Cat() : Animal()
{
    std::cout << RED_TEXT << "Cat created" << std::endl; // Cat creation alert
	brn = new Brain();
    brn->setIdeas("I want sleep", 100);
    brn->setIdeas("I want eating", 100);
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << RED_TEXT << "Cat copy constructor called" << std::endl;
}

std::string	Cat::getType()
{
	return (type);
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
        // this->brain = cat.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << RED_TEXT << "Cat destroyed" << std::endl;
}

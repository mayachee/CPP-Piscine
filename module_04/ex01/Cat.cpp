/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/15 22:20:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Creating Cat constructor
Cat::Cat() : Animal()
{
    std::cout << RED_TEXT << "Cat created" << std::endl; // Cat creation alert
	this->type = "default Cat";
    brn = new Brain();
    brn->setIdeas("Cat I want sleep");
    brn->setIdeas("Cat I want eating");
    brn->setIdeas("Cat I want say meow");
    brn->setIdeas("Cat I want say meow");
    brn->setIdeas("Cat I want say meow");
    brn->setIdeas("Cat I want say meow");
    brn->setIdeas("Cat I want say meow");
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
    }
    return *this;
}

Cat::~Cat()
{
    delete(brn);
    std::cout << RED_TEXT << "Cat destroyed" << std::endl;
}

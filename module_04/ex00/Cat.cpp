/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/04 15:36:39 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << RED_TEXT << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
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
    std::cout << RED_TEXT << "Cat destroyed" << std::endl;
}

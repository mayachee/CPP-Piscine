/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:52 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 13:04:38 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << BLUE_TEXT << "Dog created" << std::endl; // Cat creation alert
	this->type = "default Dog";
    brn = new Brain();
    brn->setIdeas("Dog I want sleep");
    brn->setIdeas("Dog I want eating");
    brn->setIdeas("Dog I want say haw");
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
    delete(brn);
}

#include "Cat.hpp"

Cat::Cat() {
    brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
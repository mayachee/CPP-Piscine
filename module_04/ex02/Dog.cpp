#include "Dog.hpp"

Dog::Dog() {
    brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = cpy;
}
Dog::~Dog() {
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof! Woof!" << std::endl;
}